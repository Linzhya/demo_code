@echo off

set MATLAB=D:\software\matlab2020

cd .

if "%1"=="" ("D:\software\matlab2020\bin\win64\gmake"  -f test_code_style_rtw.mk all) else ("D:\software\matlab2020\bin\win64\gmake"  -f test_code_style_rtw.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
