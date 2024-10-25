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