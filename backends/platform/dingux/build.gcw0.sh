#!/bin/bash

export PATH=/opt/gcw0-toolchain/usr/bin:$PATH

# Enable high resolution engines for 640x480 resolution
./configure --host=gcw0 --with-mad-prefix=/opt/gcw0-toolchain/mipsel-gcw0-linux-uclibc/sysroot/usr/ --enable-plugins --default-dynamic --enable-release --enable-highres --enable-engine=grim,twine,monkey4 && make -j9 gcw-opk && ls -l scummvm.opk
