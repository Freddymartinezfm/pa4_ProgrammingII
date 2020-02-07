TARGET = pa4
CC = g++
FLAGS = -g 
TYPE = w
HEADER = Employee.h Log.h Node.h Log.h DB.h
OBJ = main.o Employee.o Node.o Log.o DB.o
CPP = main.cpp Employee.cpp Node.cpp Log.cpp DB.cpp

pa4: main.o Employee.o Node.o Log.o DB.o 
	g++ -g main.o Employee.o Node.o Log.o DB.o -o pa4


main.o: main.cpp Employee.o Node.o DB.o
	g++ -g  -c main.cpp 
Employee.o: Employee.h Employee.cpp
	g++ -g  -c Employee.cpp
Log.o: 	Log.h Log.cpp
	g++ -g -c Log.cpp
Node.o: Node.h Node.cpp
	g++ -g  -c Node.cpp


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






