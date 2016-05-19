#make variables
OBJS=list_functions.o list_main.o
CXXFLAGS=-Wall
CXX=g++

#default rules
.phony:	clean all

all:	list_main

#each .o depends on the corresponding .c
%.o:	%.c
	$(CXX) -c $(CXXFLAGS) $< -o $@

#list_main depends on all object files
list_main:	$(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

#polishes
clean:	
	rm -rf $(OBJS) list_main *~
