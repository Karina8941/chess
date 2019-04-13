all: main
.PHONY: clean 

main: main.o move.o output.o
		g++ build/main.o build/move.o build/output.o -Wall -Werror -lm -o bin/chess

main.o: src/main.cpp
		g++ src/main.cpp -o build/main.o -c -Wall -Werror

move.o: src/move.cpp
		g++ src/move.cpp -o build/move.o -c -Wall -Werror -lm

output.o: src/output.cpp
		g++ src/output.cpp -o build/output.o -c -Wall -Werror -lm

clean:
		rm -rf build/*.o bin/chess
