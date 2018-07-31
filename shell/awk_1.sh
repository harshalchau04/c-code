#! /bin/bash

#awk '/A/{print $1,$2}' input.txt
awk '/A/{ print "\b HAVE A NICE DAY, " $1, $2  "!" }' input.txt
