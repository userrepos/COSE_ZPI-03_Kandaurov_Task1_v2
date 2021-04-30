@echo off
g++ cosxTaylor.cpp -o cosxTaylor
set /p param= < param.txt
param %param%