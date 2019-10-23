#include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <iostream>
 #include "ptr.h"
 
 const char *sayilar [ ] = { "As", "iki", "Uc",
 "Dort", "Bes",
 "Alti", "Yedi", "Sekiz",
 "Dokuz", "On",
 "Vale", "Kiz", "Papaz"};
 const char *grup [ ] = { "Kupa", "Karo","Sinek", "Maca"};
 
 int main(int argc, char** argv )
 {
 	
 	
 	
 	Kart deste[52];
 	
 	srand( time( NULL ) );
 	
 	ptr nesne1;
 	
 	nesne1.desteDoldur(deste,sayilar,grup);
    nesne1.desteyiKar(deste);
    nesne1.dagit(deste);
    nesne1.kontrol(deste);
    
    
    
 
 	
 	return 0;
 	
 	
 	
 }
