#include <stdio.h>

main (){
	printf("GALIH WIRAS PANGGUGAH\n");
	printf("1912511175\n");
	printf("UAS PEMROGRAMAN \n");
	
	int d,e,f;
	printf("masukan tinggi gedung: ");
	scanf("%i",&f);
	printf("```\n");
	
	for (d=1; d<=f; d++)
	{
		for (e=1; e<=d; e++){
			if(d+e<=f){
				printf("*");
			} else{
				printf(" ");
			}
		}
		printf("\n");
	}
printf("```");
}
