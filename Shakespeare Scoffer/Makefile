CC = gcc

INC = -I ../extlibs/PDCurses/include
LIB = -L ../extlibs/PDCurses/lib/mingw/ -lpdcurses -lole32 -loleaut32 -lsapi
FLAGS = -Wwrite-strings -static-libstdc++ -static-libgcc -static -lstdc++ -lpthread -s -O2

all: 
	$(CC) Scoffer.cpp $(INC) $(LIB) $(FLAGS) -o ../Scoffer.exe 2> build.errors
