TARGET = pa4
CC = g++
FLAGS = -g 
TYPE = w
HEADER = Employee.h Log.h Node.h Log.h DB.h OnOptionsMenu.h
OBJ = main.o Employee.o Node.o Log.o DB.o OnOptionsMenu.o
CPP = main.cpp Employee.cpp Node.cpp Log.cpp DB.cpp OnOptionsMenu.cpp

pa4: main.o Employee.o Node.o Log.o DB.o OnOptionsMenu.o
	g++ -g main.o Employee.o Node.o Log.o DB.o OnOptionsMenu.o -o pa4


main.o: main.cpp Employee.o Node.o DB.o
	g++ -g  -c main.cpp DB.cpp
Employee.o: Employee.h Employee.cpp Node.h
	g++ -g  -c Employee.cpp
Log.o: 	Log.h Log.cpp
	g++ -g -c Log.cpp
Node.o: Node.h Node.cpp Employee.h
	g++ -g  -c Node.cpp
OnOptionsMenu.o: OnOptionsMenu.h OnOptionsMenu.cpp
	g++ -g  -c OnOptionsMenu.cpp


# add: 
# 	git add *.cpp *.h

clean:
ifeq ($(TYPE), w)
	del pa3.exe
	del *.o
else
	rm -f *.o
	rm -f $(TARGET)
endif 






