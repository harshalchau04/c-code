#! /bin/bash

read yn

if [ "$yn" = "${yn#[Yy]}" ]
then
        echo YES
else
        echo NO
fi
