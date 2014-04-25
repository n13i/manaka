@echo off
setlocal
setlocal ENABLEDELAYEDEXPANSION
set AYAC_PATH=..\..\..\pdk\ayac
set AYAC_OPTS=

if "%1" == "clean" goto :CLEAN

rem ���̃o�b�`�t�@�C���̂���t�H���_�����擾
set AYAC_INC_PATH=-I"%~dp0%AYAC_PATH%"
rem echo AYAC_INC_PATH = %AYAC_INC_PATH%

for /r %%s in (*.aya) do (
	set src_path=%%s
	set dst_path=%%~dpns.exa
	call :COMPARE !src_path! !dst_path!
	if errorlevel 1 (
		echo;
		echo [DIR]  %%~dps
		echo [FILE] %%~nxs
		call :COMPILE %%s
		if errorlevel 1 goto :EOF
	) else (
		rem echo ... skip
	)
)
rem �s�v�ȃe���|�����t�@�C�����폜
del /s /q *.$$$ 2> NUL
goto :EOF

:COMPARE
if not exist %2 exit /b 1
for %%x in (%1) do set src_t=%%~tx
for %%x in (%2) do set dst_t=%%~tx
rem echo %src_t% %dst_t%
rem �\�[�X�X�V����>=�I�u�W�F�N�g�X�V�����̂Ƃ�1
if "%src_t%" GEQ "%dst_t%" exit /b 1
exit /b 0

:COMPILE
%AYAC_PATH%\ayac.exe %AYAC_INC_PATH% %AYAC_OPTS% %1
exit /b

:CLEAN
del /q src\*.exa
del /q src\core\*.exa
del /q src\core\lib\ini\*.exa
del /q src\core\lib\mxcl\*.exa
del /q src\core\lib\xml\*.exa

