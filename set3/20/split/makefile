CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRC_DIR = src
INC_DIR = include
BIN_DIR = bin

TARGET = $(BIN_DIR)/wc

SRCS = $(SRC_DIR)/main.cpp \
       $(SRC_DIR)/countText.cpp \
       $(SRC_DIR)/processChar.cpp \
       $(SRC_DIR)/printResult.cpp \
       $(SRC_DIR)/printLines.cpp \
       $(SRC_DIR)/printWords.cpp \
       $(SRC_DIR)/printChars.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -rf $(BIN_DIR) $(SRC_DIR)/*.o

