#!/bin/bash
div()
{
	printf '%*s\n' "$(tput cols)" '' | tr ' ' '_'
	printf '\n'
}

clear
date
div
make re
div
./a.out
div
