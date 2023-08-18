FROM ubuntu:latest

RUN apt update

# Install Tools (Git)
RUN apt install -y git curl

# Install Languages
RUN apt install -y gcc g++
RUN apt install -y openjdk-19-jdk
RUN apt install -y python3 python3-pip 

# Install Node for LeetCode extension
RUN curl -fsSL https://deb.nodesource.com/setup_20.x | bash - && apt install -y nodejs

RUN rm -rf /var/lib/apt/lists/*

# Install Rust using Rustup
RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y

# Set environment variables for Rust
# ENV PATH="/root/.cargo/bin:${PATH}"