#include <stdio.h> // macros and returns
int x = 5, y = 10;
int main(void){
func();
puts("-----------------------");

int z;
z = returnFunc(10,8);
printf("%i",z);
}

int func(){
	int ans;
	
	ans = ((x) > (y) ? (x) : (y)); // macro
	printf("%i\n", ans);
	
}

int returnFunc(int k, int h){

	if (k > h)
		return k;
	else
		return h;
}
