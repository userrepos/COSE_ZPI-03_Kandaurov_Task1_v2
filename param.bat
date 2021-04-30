@echo off

copy *.exe > file
findstr exe file > buf
set /p param= < buf

if "%1" == "" goto exit
%param% %1 > _UNIT-TEST_RESULT.txt
if "%2" == "" goto complete
%param% %2 >> _UNIT-TEST_RESULT.txt
if "%3" == "" goto complete
%param% %3 >> _UNIT-TEST_RESULT.txt
if "%4" == "" goto complete
%param% %4 >> _UNIT-TEST_RESULT.txt
if "%5" == "" goto complete
%param% %5 >> _UNIT-TEST_RESULT.txt
if "%6" == "" goto complete
%param% %6 >> _UNIT-TEST_RESULT.txt
if "%7" == "" goto complete
%param% %7 >> _UNIT-TEST_RESULT.txt
if "%8" == "" goto complete
%param% %8 >> _UNIT-TEST_RESULT.txt
if "%9" == "" goto complete
%param% %9 >> _UNIT-TEST_RESULT.txt

:complete
echo Testing completed.
echo Testing result writing in file: "_UNIT-TEST_RESULT.txt"

:exit
del file buf
pause