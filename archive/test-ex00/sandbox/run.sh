#!/bin/bash
[[ "$1" == '1' ]] && fyle-tracker run.sh *pp && exit
c++ -Wall -Werror -Wextra -std=c++98 main.cpp
[[ $? != 0 ]] && { echo error ; return 1; }
./a.out
