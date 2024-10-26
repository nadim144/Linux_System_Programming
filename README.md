# Linux_System_Programming
* program for Linux System Programming.


# WSL-UUbuntu Installation
## (1) Enable Windows Subsytem for Linux

* To enable WSL in your machine, you would need PowerShell to be run as administration
* Run below command onw Windows Power Shell (**As administrator**)
```
Enable-WindowsOptionalFeature -Online -FeatureName Microsoft-Windows-Subsystem-Linux
```
<!---![See Image ](image.png)-->
<img src="image.png" alt="drawing" style="width:600px "/>

## (2) Download Ubuntu Distribution

Url to download: https://learn.microsoft.com/en-us/windows/wsl/install-manual#downloading-distributions

* There are various distribution -> download **Ubuntu 22.04 LTS** it will be around 1.0 GB with name: **Ubuntu2204-221101.AppxBundle**

<!-- ![Ubuntu 22.04 LTS](image-1.png) -->
<img src="image-1.png" alt="drawing" style="width:600px"/>

* Rename **Ubuntu2204-221101.AppxBundle** into **Ubuntu2204-221101.zip** and extract it using .zip

![Extract Ubuntu2204-221101.zip](image-2.png)
* Go inside to extracted folder and again extract **Ubuntu_2204.1.7.0_x64** which is with file extension APPX. see image below.

<!-- ![Ubuntu_2204.1.7.0_x64 ](image-4.png) -->
<img src="image-4.png" alt="drawing" style="width:600px"/>

![Ubuntu_2204.1.7.0_x64  extration](image-5.png)

* Go inside extracted folder **Ubuntu_2204.1.7.0_x64** and you will find Ubuntu application. Click or doble click.

<!-- ![Ubuntu](image-6.png) -->
<img src="image-6.png" alt="drawing" style="width:600px"/>

* It will prompt Ubuntu shell and ask user name and password. give accodingly.

# Compiler Installation

Run following command as below
``` 
(1) $sudo apt update
(2) $sudo apt upgrade
```
### Install gc & g++ 11 version using following command
```
(1) sudo apt-get install build-essential
(2) sudo apt-get install manpages-dev
(3) sudo apt-get install software-properties-common

(Note) - Or run all 3 commands together:-
$sudo apt-get install build-essential manpages-dev software-properties-common
```
Next execute below command
```
$sudo add-apt-repository ppa:ubuntu-toolchain-r/test
```
Next, Now update and install gcc-11 g++-11
```
(1) $sudo apt update && sudo apt install gcc-11 g++-11
(2) $sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-11 11
(3) $sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-11 11
```
Make sure that version is updated to 11 using below following command
```
(1) $gcc --version
(2) $g++ --version
```

### Python3 Installation.
```
(1) $sudo apt update
(2) $sudo apt install python3
(3) $sudo apt install python3-pip
```
check Installed pythonn version
```
python3 --version
```

### Install Python package:
```
(1) $pip install protobuf==4.22.3
(2) $pip install robotframework==6.0.2
```

### CMake Installation:
```
(1) $sudo apt install cmake
```

### Install Clang-tidy:
```
(1) $sudo apt install clang-tidy
```

### Install LCOV:
```
(1) $sudo apt install -y lcov
```

### Uninstallation of WSL:
```
(1) Run Powershell as admin
(2) To see the list of install linux distribution wsl -l
(3) To uninstall wsl: wsl --unregister <Distribution_Name>
```