#include <iostream>
using namespace std;

// int function(int e, int f, int g){
// 	int h;
// 	if ( e > 10 || f > 10 ){
// 		h = e+f;
// 	}else{
// 		h = e*f;
// 	}
// 	if ( g > 10 ){
// 		h = g;
// 	}
// 	return h;
// }

int function(int e, int f){
	int h;
	if ( e > 10 ){
		h = e;
	}else{
		h = e*e;
	}
	if ( f > 10 ){
		h = f;
	}
	return h;
}


// int foo(int x, int y) {
//     int z = 0;
//     if ((x>0) && (y>0)) {
//         z = x;
//     }
//     return z;
// }

// int sum(int a, int b){
// 	int c=a+b;
// 	return c;
// }
