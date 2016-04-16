in questo esempio si vuole dare un esempio di modularizzazione del programma
Il programma dello studente, inizialmente scritto in
inizio.c

richiede lo sviluppo di due funzioni.


In una seconda fase si richiede la suddivisione del
programma in tre file
- funzioni.h  (contenete le dichiarazioni delle funzioni)
- funzioni.c  (contenente le definizioni delle funzioni)
- main.c      (contenente il main di prova)


Si compili il programma con il seguente comando

1. generare il file oggetto per ciascun .c
   g++ -c <nomefile.c>

2. linkare tutti i file oggetti generati
   g++ -o prova.c *.o

Scoprite cosa accade eliminando le direttive del compilatore, come
specificato nel sorgente.
