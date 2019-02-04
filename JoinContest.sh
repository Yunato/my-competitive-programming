#!/bin/sh

echo "Please select a contest you want to join."
echo "1. AtCoder"

read select

if [ "$select" -eq "1" ]
then
    echo "Join AtCoder"
    contestName="AtCoder"
else
    echo "You may have inputed by mistake"
    return
fi

if [ -e "AtCoder" ]
then
    echo "exist"
else
    echo "Not exsit"
fi
