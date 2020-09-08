CXX=g++
CXXFLAGS=-Wall -g
OBJS=$(OBJ_FOLDER)/main.o
OBJ_FOLDER=obj
DEPS=
EXEC=main

.PHONY: mkdir

build: mkdir main
	
run: build
	./main

clean: 
	rm -rf $(OBJ_FOLDER)
	rm main

mkdir: $(OBJ_FOLDER)

$(OBJ_FOLDER):
	mkdir -p $(OBJ_FOLDER)

main: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $^

$(OBJ_FOLDER)/%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<
