CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIBLOOP = basicClassification.o advancedClassificationLoop.o 
OBJECTS_LIBREC = basicClassification.o advancedClassificationRecursion.o 
FLAGS = -Wall -g

all: libclassloops.a libclassrec.a libclassrec.so libclassloops.so mains maindloop maindrec
loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so 

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a -lm 
maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so -lm 
maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so -lm
libclassrec.a: $(OBJECTS_LIBREC)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIBREC)
libclassrec.so: $(OBJECTS_LIBREC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIBREC) -lm
libclassloops.so: $(OBJECTS_LIBLOOP)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LIBLOOP) -lm
libclassloops.a: $(OBJECTS_LIBLOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIBLOOP)
basicClassification.o: basicClassification.c NumClass.h 
	$(CC) $(FLAGS) -c basicClassification.c -lm
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h 
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h 
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -lm
main.o: main.c NumClass.h 
	$(CC) $(FLAGS) -c main.c -lm

.PHONY = all clean loops recursives recursived loopd 

clean: 
	rm -f *.o *.a *.so mains maindloop maindrec