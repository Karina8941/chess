source = src/main.cpp src/chess_output.cpp src/standart_create.cpp src/read.cpp src/check.cpp src/move.cpp
executable = bin/chess
t_executable = bin/test/test
objects = build/main.o build/chess_output.o build/standart_create.o build/read.o build/check.o build/move.o
t_objects = build/test/main.o build/chess_output.o build/standart_create.o build/read.o build/check.o build/move.o build/test/tests.o

all: $(executable)

$(executable):$(objects)
	g++ $(objects) -o $@

build/%.o: src/%.cpp
	g++ -c $< -o $@

build/test/%.o: test/%.cpp
	g++ -c $< -o $@

test: $(t_executable)

$(t_executable):$(t_objects)
	g++ $(t_objects) -o $@

.PHONY: clean

clean:
	rm -rf build/*.o bin/chess