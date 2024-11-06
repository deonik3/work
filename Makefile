matrix: main.cpp matrix.cpp classMatrix.cpp
	g++ -o $@ $^
run: matrix
	./matrix
