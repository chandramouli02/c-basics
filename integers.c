#include<stdio.h>
#include<limits.h>
void main()
{
	/* short int */	
	printf("short int signed:%hd to %hd",SHRT_MIN,SHRT_MAX);
	printf("\nshort int unsigned:%d to %hu",0,USHRT_MAX);
	
	printf("\nint signed:%d to %d",INT_MIN,INT_MAX);
	printf("\nint unsigned:%d to %u",0,UINT_MAX);
	
	printf("\nlong int signed:%ld to %ld",LONG_MIN,LONG_MAX);
	printf("\nlong int unsigned:%d to %lu",0,ULONG_MAX);
	
	printf("\nlong long int signed:%lld to %lld",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("\nlong long int unsigned:%d to %llu",0,ULONG_LONG_MAX);
	
	
	
	

}

