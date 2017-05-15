# This makefile was adapted from the code located in
# the makefile.txt file from the CS 162 class at OSU.
# The file is located here:
# https://oregonstate.instructure.com/courses/1616222/files/65660456/download?wrap=1

CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
LDFLAGS = -lboost_date_time

OBJS = blueMen.o barbarian.o battle.o getOption.o getOptionCreature.o harryPotter.o main.o medusa.o menu.o selectCreatureMenu.o creature.o die.o vampire.o

SRCS = blueMen.cpp barbarian.cpp battle.cpp getOption.cpp getOptionCreature.cpp harryPotter.cpp main.cpp medusa.cpp menu.cpp selectCreatureMenu.cpp creature.cpp die.cpp vampire.cpp

HEADERS = blueMen.hpp barbarian.hpp battle.hpp getOption.hpp getOptionCreature.hpp harryPotter.hpp medusa.hpp menu.hpp selectCreatureMenu.hpp creature.hpp die.hpp vampire.hpp

#target: dependencies
#	rule to build
#	#

fantasy: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o fantasy

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -rf *.o
