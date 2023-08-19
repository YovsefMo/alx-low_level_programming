#!/bin/bash

gcc -c *.c

ar rcs liball.a *.o

ran liball.a

echo "Static library liball.a created successfully!"
