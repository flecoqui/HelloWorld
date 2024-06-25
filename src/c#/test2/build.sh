#!/bin/bash
dotnet restore
dotnet publish --self-contained -c Release -r linux-x64
dotnet publish --self-contained -c Release -r win-x64
