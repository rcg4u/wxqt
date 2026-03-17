[TOC]
# Windows 10 
* This may work on versions as early as Windows 7 provided you have 64bit OS

## Obtain MSYS2 "Software Distribution and Building Platform for Windows" (Windows 7 or newer - 64bit)
[https://www.msys2.org/](https://www.msys2.org/)
* Under **Installation** click on the button next to `Download the installer`. As of Dec 2021 the button links to:
https://github.com/msys2/msys2-installer/releases/download/2021-11-30/msys2-x86_64-20211130.exe
* After installation a terminal window should open, follow these steps
```bash
pacman -Syu
# close window
```
* Run `MSYS2 MSYS` from Start menu. Update the rest of the base packages with
```
pacman -Su
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
# close window
```
* run `MSYS MinGW 64-bit` from Windows Start menu and install necessary **Qt6** software along with **git**.
```
pacman -S git
pacman -S mingw-w64-x86_64-qt6-base
pacman -S mingw-w64-x86_64-qt6-tools
pacman -S mingw-w64-x86_64-qt6-location
```
* Download **wxqt** and compile/run.
```bash
git clone https://gitlab.com/joshua.tee/wxqt
cd wxqt/resourceCreation
./createResourcesImage.py
./createResourcesRes.py
cd ..
./makeAll.py
# after the initial compile just use
./run.bash
```


## Building Without MSYS2 (Custom Qt/MinGW Setup)

If you already have Qt6 and MinGW installed via the [Qt Online Installer](https://www.qt.io/download-qt-installer) or another custom setup, you can build **wxqt** without MSYS2.

The following has been verified with:
* **Qt 6.4.2** installed to `C:\Qt\6.4.2\mingw_64`
* **MinGW-w64 13.2.0** from [Strawberry Perl](https://strawberryperl.com/) (`C:\Strawberry\c\bin`)

### Prerequisites
* Qt6 (including `qmake`) installed to a known path, e.g. `C:\Qt\6.4.2\mingw_64`
* MinGW-w64 toolchain with `g++.exe` and `mingw32-make.exe` — either bundled with the Qt installer or from a standalone distribution such as [Strawberry Perl](https://strawberryperl.com/) or [winlibs](https://winlibs.com/)
* `git` for Windows ([https://git-scm.com/](https://git-scm.com/))
* Python 3 for Windows ([https://www.python.org/](https://www.python.org/))

### Build Steps

1. Clone the repository and generate resources:
```bat
git clone https://gitlab.com/joshua.tee/wxqt
cd wxqt\resourceCreation
python createResourcesImage.py
python createResourcesRes.py
cd ..
```

2. Regenerate the `Makefile` using **your** qmake so that all tool paths reflect your installation:
```bat
C:\Qt\6.4.2\mingw_64\bin\qmake.exe -o Makefile wxqt.pro
```
Replace `C:\Qt\6.4.2\mingw_64` with the actual path to your Qt kit.

3. Build the project (ensure your MinGW `bin` directory is on `PATH`):
```bat
set PATH=C:\Qt\6.4.2\mingw_64\bin;C:\Strawberry\c\bin;%PATH%
mingw32-make -f Makefile release
```

The compiled binary will be placed under `build\release\wxqt.exe`.

4. *(Optional)* Bundle the required Qt DLLs next to the executable so it runs on any machine:
```bat
C:\Qt\6.4.2\mingw_64\bin\windeployqt.exe build\release\wxqt.exe
```

> **Note:** The `Makefile` checked into the repository has MSYS2 paths hard-coded (e.g. `d:\msys64\mingw64\bin\`). Always regenerate it with `qmake` from **your own** Qt installation before building to avoid path mismatches.

## Additional Reference Links
* [MSYS2 Detailed install guide](https://www.msys2.org/wiki/MSYS2-installation/)
* [MSYS2 Introduction](https://www.msys2.org/wiki/MSYS2-introduction/)
* [MSYS2 Packages](https://packages.msys2.org/package/)

