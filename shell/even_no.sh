
#! /bin/bash

for c in $(seq 1 99)
do
	out=$(( $c % 2 ))
	if [ "$out" -eq 1 ]
	then
	   	echo "$c"
	fi
done


