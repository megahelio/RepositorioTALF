#!/bin/bash
name=${1/\.l/}

flex $1 && gcc -o $name lex.yy.c