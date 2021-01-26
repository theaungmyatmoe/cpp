#!/usr/bin/env bash
# Copyright by "Aung Myat Moe"
# get file name
    FILE=$1

# split with `.` delimeter
    NAME=(${FILE//./ })
    
# check file name exist or not
if [[ $# -eq 0 ]]; then
    echo "File Name Required!"
    
elif [[ ${NAME[1]} != "cpp" ]]; then
    echo "File extension should be 'cpp'"
else
# compile file and put into `target` directory
    $(g++ $FILE -o target/${NAME[0]})
# run output binary file from traget directory
    ./target/${NAME[0]}
fi