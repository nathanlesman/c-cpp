CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
OBJ = main.o value.o symbol.o symtab.o

symbol_table: $(OBJ)
	$(CXX) $(CXXFLAGS) -o symbol_table $(OBJ)

main.o: main.cc symtab.h symbol.h value.h enum.h
	$(CXX) $(CXXFLAGS) -c main.cc

value.o: value.cc value.h enum.h
	$(CXX) $(CXXFLAGS) -c value.cc

symbol.o: symbol.cc symbol.h value.h enum.h
	$(CXX) $(CXXFLAGS) -c symbol.cc

symtab.o: symtab.cc symtab.h symbol.h value.h enum.h
	$(CXX) $(CXXFLAGS) -c symtab.cc

clean:
	rm -f *.o symbol_table

