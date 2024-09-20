#!/bin/bash
# commands below:
sudo apt update
sudo apt upgrade -y 
sudo apt install curl build-essential gcc make -y 
sudo apt install rustc -y
# or
# curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh