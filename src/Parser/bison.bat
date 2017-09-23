::"..\..\..\..\tools\bin\bison.exe" -d -v %1 %2 %3
"D:\msys_v11\msys\bin\bison.exe" -d -v -o criscriptparser.cpp criscript.y -v
copy .\criscriptparser.hpp ..\..\inc\
pause

