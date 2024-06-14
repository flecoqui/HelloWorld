#!/bin/bash
dotnet restore
dotnet build --self-contained -r   linux-x64
dotnet build --self-contained -r   win-x64


