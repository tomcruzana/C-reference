//unions
//can only initialize the first value
//it stays in the same memory address
union itlog{
	char tapsilog[9];
	int qnty;
} egg = {"tapsilog"};

main(){
	//egg.qnty = 100; this is the proof; try enabling this line and see for your self
	printf("%s \n" , egg.tapsilog);
	printf("%s %i", egg.tapsilog, egg.qnty);
}
