#!/bin/bash
[[ "$1" == '1' ]] && fyle-tracker run.sh *pp && exit
div()
{
	printf '%*s\n' "$(tput cols)" '' | tr ' ' '_'
	printf '\n'
}

clear
date
div
make fclean &>/dev/null
make quick 
div
./a.out
div
make fclean &>/dev/null 
