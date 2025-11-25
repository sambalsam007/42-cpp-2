#!/bin/bash
[[ "$1" == "1" ]] && fyle-tracker run.sh *pp Makefile && make fclean && exit
make fclean 2>&1 >/dev/null
make quick
printf '%*s\n' "$(tput cols)" '' | tr ' ' '_'
printf '\n'
./a.out
