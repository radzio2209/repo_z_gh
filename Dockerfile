FROM ubuntu:20.04

RUN apt-get update && apt-get install -y build-essential

COPY . /app

WORKDIR /app

RUN g++ fibo.cpp -o FibCalc

CMD ["./FibCalc"]

