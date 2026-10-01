FROM ubuntu:latest

# Installation des packages pour le développement C++
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends \
    libboost-all-dev \
    build-essential \
    clang \
    cmake \
    gdb \
    wget \
    git

# Met à jour les certificats pour git
RUN apt install -y --reinstall ca-certificates