: main
.PHONY: clean 

main: prog.o convert.o elephant.o hourse.o king.o move.o output.o quin.o rook.o
	g++ build/src/prog.o build/src/convert.o build/src/elephant.o build/src/hourse.o build/src/king.o build/src/move.o build/src/output.o build/src/quin.o build/src/rook.o -Wall -Werror -lm -o bin/Chess
prog.o: src/prog.cpp
	g++ src/prog.cpp -o build/src/prog.o -c -Wall -lm
convert.o: src/convert.cpp
	g++ src/convert.cpp -o build/src/convert.o -c -Wall -Werror -lm
elephant.o: src/elephant.cpp
	g++  src/elephant.cpp -o build/src/elephant.o -c -Wall -Werror -lm
hourse.o: src/hourse.cpp
	g++ src/hourse.cpp -o build/src/hourse.o -c -Wall -Werror -lm
king.o: src/king.cpp
	g++ src/king.cpp -o build/src/king.o -c -Wall -lm
move.o: src/move.cpp
	g++ src/move.cpp -o build/src/move.o -c -Wall -lm
output.o: src/output.cpp
	g++ src/output.cpp -o build/src/output.o -c -Wall -lm
quin.o: src/quin.cpp
	g++ src/quin.cpp -o build/src/quin.o -c -Wall -lm
rook.o: src/rook.cpp
	g++ src/rook.cpp -o build/src/rook.o -c -Wall -lm
test: bin/Chess_test

bin/Chess_test: build/test/main.o build/test/convert.o build/test/elephant.o build/test/hourse.o build/test/king.o build/test/move.o build/test/output.o build/test/quin.o build/test/rook.o
	g++ -Wall -Werror build/test/main.o build/test/convert.o build/test/elephant.o build/test/hourse.o build/test/king.o build/test/move.o build/test/output.o build/test/quin.o build/test/rook.o -o bin/Chess_test -lm
build/test/main.o: test/main.cpp
	g++ -Wall -Werror -c -I thirdparty -I src test/main.cpp -o build/test/main.o

build/test/convert.o: src/convert.cpp src/foo.h
	g++ -Wall -Werror -c -I thirdparty -I src src/convert.cpp -o build/test/convert.o
build/test/elephant.o: src/elephant.cpp src/foo.h
	g++ -Wall -Werror -c -I thirdparty -I src src/elephant.cpp -o build/test/elephant.o
build/test/hourse.o: src/hourse.cpp src/foo.h
	g++ -Wall -Werror -c -I thirdparty -I src src/hourse.cpp -o build/test/hourse.o
build/test/king.o: src/king.cpp src/foo.h
	g++ -Wall -Werror -c -I thirdparty -I src src/king.cpp -o build/test/king.o
build/test/move.o: src/move.cpp src/foo.h
	g++ -Wall -Werror -c -I thirdparty -I src src/move.cpp -o build/test/move.o
build/test/output.o: src/output.cpp src/foo.h
	g++ -Wall -Werror -c -I thirdparty -I src src/output.cpp -o build/test/output.o
build/test/quin.o: src/quin.cpp src/foo.h
	g++ -Wall -Werror -c -I thirdparty -I src src/quin.cpp -o build/test/quin.o
build/test/rook.o: src/rook.cpp src/foo.h
	g++ -Wall -Werror -c -I thirdparty -I src src/rook.cpp -o build/test/rook.o

clean:
	rm -rf build/*.o bin/Chess