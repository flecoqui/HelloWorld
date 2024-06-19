# Hello World Journey

Be part of the journey and get started exploring Programming languages, source code, tools, cloud,...

## Getting Started

In this repository, you'll find scripts, source code files to build Hello World applications in different Programming Languages.

Some Hello World applications will be deployed in the cloud.

This chapter describes how to :

1. Install the pre-requisites including Visual Studio Code, Dev Container
2. Install the tools associated with each Programming Language
3. Build and run the Hello World applications
  
This repository contains the following resources :

- A Dev container under '.devcontainer' folder
- The source code of the Hello World applications in different languages under 'src' folder

### Installing the pre-requisites

In order to test the solution, you need first an Azure Subscription, you can get further information about Azure Subscription [here](https://azure.microsoft.com/en-us/free).

You also need to install Git client and Visual Studio Code on your machine, below the links.

|[![Windows](./docs/README/windows_logo.png)](https://git-scm.com/download/win) |[![Linux](./docs/README/linux_logo.png)](https://git-scm.com/download/linux)|[![MacOS](./docs/README/macos_logo.png)](https://git-scm.com/download/mac)|
|:---|:---|:---|
| [Git Client for Windows](https://git-scm.com/download/win) | [Git client for Linux](https://git-scm.com/download/linux)| [Git Client for MacOs](https://git-scm.com/download/mac) |
[Visual Studio Code for Windows](https://code.visualstudio.com/Download)  | [Visual Studio Code for Linux](https://code.visualstudio.com/Download)  &nbsp;| [Visual Studio Code for MacOS](https://code.visualstudio.com/Download) &nbsp; &nbsp;|

Once the Git client is installed you can clone the repository on your machine running the following commands:

1. Create a Git directory on your machine

    ```bash
        c:\> mkdir git
        c:\> cd git
        c:\git>
    ```

2. Clone the repository.  
    For instance:

    ```bash
        c:\git> git clone  https://github.com/flecoqui/HelloWorld.git 
        c:\git> cd ./HelloWorld
        c:\git\HelloWorld> 
    ```

### Using Dev Container

#### Installing Dev Container pre-requisites

You need to install the following pre-requisite on your machine

1. Install and configure [Docker](https://www.docker.com/get-started) for your operating system.

   - Windows / macOS:

     1. Install [Docker Desktop](https://www.docker.com/products/docker-desktop) for Windows/Mac.

     2. Right-click on the Docker task bar item, select Settings / Preferences and update Resources > File Sharing with any locations your source code is kept. See [tips and tricks](https://code.visualstudio.com/docs/remote/troubleshooting#_container-tips) for troubleshooting.

     3. If you are using WSL 2 on Windows, to enable the [Windows WSL 2 back-end](https://docs.docker.com/docker-for-windows/wsl/): Right-click on the Docker taskbar item and select Settings. Check Use the WSL 2 based engine and verify your distribution is enabled under Resources > WSL Integration.

   - Linux:

     1. Follow the official install [instructions for Docker CE/EE for your distribution](https://docs.docker.com/get-docker/). If you are using Docker Compose, follow the [Docker Compose directions](https://docs.docker.com/compose/install/) as well.

     2. Add your user to the docker group by using a terminal to run: 'sudo usermod -aG docker $USER'

     3. Sign out and back in again so your changes take effect.

2. Ensure [Visual Studio Code](https://code.visualstudio.com/) is already installed.

3. Install the [Remote Development extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack)

#### Using Visual Studio Code and Dev Container

1. Launch Visual Studio Code in the folder where you cloned the 'ps-data-foundation-imv' repository

    ```bash
        c:\git\HelloWorld> code .
    ```

2. Once Visual Studio Code is launched, you should see the following dialog box:

    ![Visual Studio Code](./docs/README/reopen-in-container.png)

3. Click on the button 'Reopen in Container'
4. Visual Studio Code opens the Dev Container. If it's the first time you open the project in container mode, it first builds the container, it can take several minutes to build the new container.
5. Once the container is loaded, you can open a new terminal (Terminal -> New Terminal).
6. And from the terminal, you have access to the tools installed in the Dev Container like az client,....

    ```bash
        vscode ➜ /workspace/HelloWorld $ az login 
    ```

## C

![C Programming Language](./docs/README/c-lang.png)

### Install C compilers and linkers

### Sample 1: Hello World

### Sample 2: Optimize size

### Sample 3: Enter risky string

### Sample 4: Enter secure string

### Sample 5: Key Stroke Windows in while loop

### Sample 6: Key Stroke Linux in while loop

## C#

![C# Programming Language](./docs/README/cs-lang.png)

### Install DotNet SDK

### Sample 1: Hello World

### Sample 2: Self Contained Binary

### Sample 3: Key Stroke detection

### Sample 4: Enter string

### Sample 5: Key Stroke in while loop

## java

![Java Programming Language](./docs/README/java-lang.png)

### Install Java SDK

### Sample 1: Hello World

### Sample 2: Self Contained Binary

### Sample 3: Key Stroke detection

### Sample 4: Enter string

### Sample 5: Key Stroke in while loop

## python

![Python Programming Language](./docs/README/python-lang.png)

### Install Python SDK

### Sample 1: Hello World

### Sample 2: Key Stroke detection

### Sample 3: Enter string

### Sample 4: Key Stroke in while loop

## HTML/Javascript

### Install HTML/Javascript SDK

![HTML Programming Language](./docs/README/html-lang.png)

### Sample 1: Hello World

### Sample 2: Key Stroke detection

### Sample 3: Enter string

### Sample 4: Key Stroke in while loop