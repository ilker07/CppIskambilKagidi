#include "ptr.h"
#include <stdlib.h>

 void ptr::desteDoldur( Kart * const wDeste, const char * wTaraf[ ],
 const char * wTakim[ ] )
 {
 int i;

 for ( i = 0; i <= 51; i++ ) {
 wDeste[ i ].taraf = wTaraf[ i % 13 ];
 wDeste[ i ].takim = wTakim[ i / 13 ];
 }
 }
 
 
 void ptr:: desteyiKar( Kart * const wDeste )
 {
 int i, j;
 Kart gecici;

 for ( i = 0; i <= 51; i++ ) {
 j = rand( ) % 52;
 gecici = wDeste[ i ];
 wDeste[ i ] = wDeste[ j ];
 wDeste[ j ] = gecici;
 }
 }
 
 
  void ptr::dagit( const Kart * const wDeste )
 {
 int i;

 for ( i = 0; i <=4; i++ )
 
 cout<<(i+1)<<"."<<wDeste[ i ].takim<<" "<<wDeste[ i ].taraf<<endl;
 
 cout<<"*******************"<<endl;
 cout<<endl;
 

 }
 
  void ptr::kontrol( const Kart * const wDeste )
 {
 int i,j;
 int yer=4;
 bool bulundu=false;

 for ( i = 0; i <=3; i++ )
 {
 if(i==yer)
   continue;
 else
 {
     
   for ( j = i; j<=3; j++ )
  { 	
 	if(wDeste[i].taraf==wDeste[j+1].taraf)
 	{
 		cout<<"Bir cift bulundu:"<<wDeste[i].takim<<" "<<wDeste[i].taraf<<" ve "<<wDeste[j+1].takim<<" "<<wDeste[j+1].taraf<<endl;
 		yer=j+1;
		 bulundu=true;
		 break;	
 		
	}

  }
  
 }
  
 }
 
 if(bulundu==false)
   cout<<"Herhangi bir cift bulunamadi"<<endl;
 
  

 }
 
 
 
 
 
 
 
 
 
 
 
 
