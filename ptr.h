#ifndef PTR_H
#define PTR_H




#include <iostream> 
using namespace std;





 struct kart {
 const char *taraf;
 const char *takim;
 };

 typedef struct kart Kart;



class ptr
{
	public:
		
		void desteDoldur( Kart * const, const char *[ ],const char *[ ] );
        void desteyiKar ( Kart * const );
        void dagit ( const Kart * const );
        void kontrol(const Kart * const wDeste); 
	
};

#endif

