#!/bin/bash

#Repeticiones a realizar tanto bubble sort, como su version opt
NUM_REPETICIONES=$1

for ((RUN = 1; RUN < $NUM_REPETICIONES + 1; RUN++)); do
    echo -e "Ejecutandose la prueba $RUN del bubble sort simple\n\n"
    make datos 
    ./practica2_std > ./Resultados/data/data_bubble_sort_opt_$RUN.txt 
done