SRC_PATH = ./src
BIN_PATH = ./bin
OBJ_PATH = ./obj

CXXFLAGS = $(shell pkg-config --cflags ibex)
LIBS = $(shell pkg-config --libs ibex)


all: node.o tree.o main.o
	mkdir -p bin
	g++ -std=c++11 -Wall ${OBJ_PATH}/*.o -o ${BIN_PATH}/exe ${CXXFLAGS} ${LIBS}

%.o: ${SRC_PATH}/%.cpp
	mkdir -p obj
	g++ -std=c++11 -Wall -c $< -o ${OBJ_PATH}/$@ ${CXXFLAGS} ${LIBS}

clean:
	rm -rf ${OBJ_PATH}/*.o ${BIN_PATH}/exe