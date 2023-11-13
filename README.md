# [README](README)
```bash
 Linux kernel
============

There are several guides for kernel developers and users. These guides can
be rendered in a number of formats, like HTML and PDF. Please read
Documentation/admin-guide/README.rst first.

In order to build the documentation, use ``make htmldocs`` or
``make pdfdocs``.  The formatted documentation can also be read online at:

    https://www.kernel.org/doc/html/latest/

There are various text files in the Documentation/ subdirectory,
several of them using the Restructured Text markup notation.
See Documentation/00-INDEX for a list of what is contained in each file.

Please read the Documentation/process/changes.rst file, as it contains the
requirements for building and running the kernel, and information about
the problems which may result by upgrading your kernel.
```
# [README_kernel.txt](README_Kernel.txt)
1. How to Build
- get Toolchain
  - get the proper toolchain packages from AOSP or CodeSourcery or ETC.

- edit `Makefile`
  - edit "`CROSS_COMPILE`" to right toolchain path(You downloaded).
    - EX)  `CROSS_COMPILE=<android platform directory you download>/android/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android-`
    - EX)  `CROSS_COMPILE=/usr/local/toolchain/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android- // check the location of toolchain`
  - edit `CLANG` to right path(You downloaded).
    - EX)  `CC=<android platform directory you download>/android/prebuilts/clang/host/linux-x86/clang-r383902/bin/clang`
    - EX)  `CC=/usr/local/toolchain/clang/host/linux-x86/clang-r383902/bin/clang // check the location of toolchain`
  - edit "`CLANG_TRIPLE`" to right path(You downloaded).
    - EX)  `CLANG_TRIPLE=<android platform directory you download>/android/prebuilts/clang/host/linux-x86/clang-r383902/bin/aarch64-linux-gnu-`
    - EX)  `CLANG_TRIPLE=/usr/local/toolchain/clang/host/linux-x86/clang-r383902/bin/aarch64-linux-gnu- // check the location of toolchain     `
- to Build
```bash
$ export PLATFORM_VERSION=13
$ export ARCH=arm64
$ make exynos850-a13xx_defconfig
$ make
```
2. Output files
- Kernel : `arch/arm64/boot/Image`
- module : `drivers/*/*.ko`

3. How to Clean
```bash
$ make clean
```
