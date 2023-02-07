#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	for(int i = 0;i<100;i++){
		int x = rand()%3;
		if(x == 0){
			int y = *a;
			*a = *b;
			*b = y;
		}
		if(x == 1){
			int y = *b;
			*b = *c;
			*c = y;
		}
		if(x == 2){
			int y = *c;
			*c = *d;
			*d = y;
		}
	}
}
