#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a , Rect b){
    double  tl , tr , wi , hei , up , low ;
    tr = min(a.x+a.w,b.x+b.w) ;
	tl = max(a.x,b.x) ;
    up = min(a.y,b.y) ;
	low = max(b.y-b.h,a.y-a.h) ;  
	
	wi = tr-tl;
	hei = up-low;
    if(wi>0 and hei>0) return wi*hei ;
	else return 0 ;







}
    



