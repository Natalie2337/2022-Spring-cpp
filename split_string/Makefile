CC = g++
TARGET = main
OBJ = main.o
LIBS := -lpair
CXXFLAGS = -c -Wall -O3
LDFLAGS += -L./lib -Wl,-rpath=./lib

all:$(LIB) $(TARGET)
LIB := libpair.so
$(LIB):pair.cpp
	mkdir ./lib
	$(CC) -shared -fPIC -o lib/$@ $^

$(TARGET):$(OBJ) $(LIB)
	$(CC) -o $@ $(LDFLAGS) $(OBJ) $(LIBS)

.o: %.cpp
	$(CC) $(CXXFLAGS) $< -o $@

.PHONY:clean
clean:
	rm -f *.o $(TARGET)

