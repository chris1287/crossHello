#!/bin/bash 

[[ $1 == "cross" ]] && ./configure --build i686-linux --host i586-mingw32msvc && exit 0
[[ $1 == "local" ]] && ./configure && exit 0

echo "Error"
exit 1
