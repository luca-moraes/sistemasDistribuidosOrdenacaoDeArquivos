#!/bin/bash

gcc ./main.c -o ./main.run

read -p "Número de pessoas no arquivo: " input

# echo "Num = ${input}"

./main.run ${input}
