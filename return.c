#include <stdio.h>
int x, y, z;
int returnFunc(int a, int b); // function prototype.. di nmn tlga kailangan, khit wla ggana ung function.


int main(void){ // void for clarity, wla nmn kc reretun na value ung main()
	scanf("%i %i",&x, &y); // kelangan mauna to tpos aassign nya sa baba na returnfunction ung values ng x at y.
	z = returnFunc(x,y);//so ung value ng x at y mppunta sa a at b then = sa z variable
	
	printf("%i is larger", z);
}

int returnFunc(int a, int b){
	if (a > b)
		return a;
	else 
		return b;
}
