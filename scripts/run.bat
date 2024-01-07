@echo off
setlocal enabledelayedexpansion

REM $1: executable file
for %%i in (*.i.txt) do (
    set "id=%%~ni"
    SET id=!id:~0,-2!
    echo|set /p="Running test case !id! ... "
    %1 < %%i > !id!.a.txt
    fc /w !id!.o.txt !id!.a.txt > nul
    if !errorlevel! neq 0 (
        code --diff !id!.o.txt !id!.a.txt
        REM Set text color to red
        color 04

        REM Outputting red text
        echo Failed.

        REM Reset color to default
        color
    ) else (
        REM Set text color to green
        color 0A

        REM Outputting green text
        echo Passed.

        REM Reset color to default
        color
    )
)

endlocal
