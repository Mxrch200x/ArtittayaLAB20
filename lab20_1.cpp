#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2) {
	double xx = abs(R1.x - R2.x);
	double yy = abs(R1.y - R2.y);
	double xxx, yyy;
	if(xx > R1.w || yy > R1.h) return 0;
	else{
		if (xx < R1.w - R2.w){
			xxx = R2.w;
		}else{
			xxx = R1.w - xx;
		}
		if (yy < R1.h - R2.h){
			yyy = R2.h;
		}else{
			yyy = R1.h - yy;
		}
	}
	return xxx *yyy;
}
