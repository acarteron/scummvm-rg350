#!/bin/sh

cd `dirname $0`

if [ ! -f $HOME/.scummvmrc ] ; then
	cp ./scummvmrc $HOME/.scummvmrc
fi

exec env LD_LIBRARY_PATH=`pwd`/lib:$LD_LIBRARY_PATH ./scummvm 2>&1 >/var/tmp/scummvm.log
