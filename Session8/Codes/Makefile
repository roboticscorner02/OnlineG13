calculator.exe : calculator_app.o calculator_imp.o
	g++ -o calculator.exe calculator_app.o calculator_imp.o 

calculator_imp.o : calculator_imp.cpp 
	g++ -c calculator_imp.cpp 

calculator_app.o : calculator_app.cpp 
	g++ -c calculator_app.cpp