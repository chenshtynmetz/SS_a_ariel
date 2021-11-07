CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_REC= advancedClassificationRecursion.o basicClassification.o
OBJECTS_LIB_LOOP= advancedClassificationLoop.o basicClassification.o
FLAGS= -Wall -g 

all: libclassrec.so libclassloops.so libclassloops.a libclassrec.a mains maindloop maindrec	
maindloop: $(OBJECTS_MAIN) libclassloops.so 
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so -lm
mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a -lm
maindrec: $(OBJECTS_MAIN) libclassrec.so 
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so -lm
recursived: libclassrec.so
libclassrec.so: $(OBJECTS_LIB_REC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIB_REC) -lm 
loopd: libclassloops.so
libclassloops.so: $(OBJECTS_LIB_LOOP)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LIB_LOOP) -lm
loops: libclassloops.a
libclassloops.a: $(OBJECTS_LIB_LOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB_LOOP) 
recursives: libclassrec.a
libclassrec.a: $(OBJECTS_LIB_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_REC)	
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c 
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c 
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c 
main.o: main.c NumClass.h  
	$(CC) $(FLAGS) -c main.c  

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
 