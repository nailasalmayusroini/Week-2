# Target to compile the object file
quadratic: quadratic.o
	g++ quadratic.o -o quadratic.exe

# Target to compile the C++ program
quadratic.o: quadratic.cpp
	g++ -c quadratic.cpp -o quadratic.o

# Target to run the program (interactively)
run: quadratic
	./quadratic.exe

# Target to compile the object Test file
quadraticTest: quadraticTest.o
	g++ quadraticTest.o -o quadraticTest.exe

# Target to compile the C++ Test program
quadraticTest.o: quadraticTest.cpp
	g++ -c quadraticTest.cpp -o quadraticTest.o

# Target to run the Test program
test: quadraticTest
	./quadraticTest.exe

# Target to clean up compiled files
clean:
	rm -f quadratic.o quadraticTest.o quadratic.exe quadraticTest.exe
