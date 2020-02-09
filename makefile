TARGET = pa4
CC = g++
FLAGS = -g 
TYPE = l
HEADER = Employee.h Log.h Node.h Log.h DB.h
OBJ = main.o Employee.o Node.o Log.o DB.o
CPP = main.cpp Employee.cpp Node.cpp Log.cpp DB.cpp

$(TARGET): $(OBJ) 
	$(CC) $(FLAGS)  $(OBJ) -o $(TARGET)

main.o: main.cpp DB.h
	$(CC) $(FLAGS) -c main.cpp
Employee.o: Employee.h Employee.cpp
	$(CC) $(FLAGS) -c Employee.cpp
Log.o: Log.h Log.cpp
	$(CC) $(FLAGS) -c Log.cpp
Node.o: Node.h Node.cpp
	$(CC) $(FLAGS) -c Node.cpp
DB.o: DB.cpp DB.h Employee.h
	$(CC) $(FLAGS) -c DB.cpp


# add: 
# git add *.cpp *.h

clean:
ifeq ($(TYPE), w)
	del pa4.exe
	del *.o
else
	rm -f *.o
	rm -f $(TARGET)
endif 






