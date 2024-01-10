#include<stdio.h>
main()
{
	FILE *fp;
	int roll_no = 47;
	char qname[20] = {"Que 9.txt"};
	
	char name[50]={"SHAH KRISH J."},sub[100] = {"OBJECT ORIENTED CONCEPTS AND PROGRAMMING"};
	
	char crs[25]={"COMPUTER SCIENCE"},sem[10]={"III"},ass[10]={"II"};
	
	fp = fopen(qname,"a+");
	
	if(fp != NULL)
	{
		fprintf(fp,"\n/*");
		fprintf(fp,"\nNAME - %s \nSUBJECT - %s \nROLL NO. - %d",name,sub,roll_no);
		fprintf(fp,"\nCOURSE -  %s\nSEM - %s \nASSIGNMENT - %s",crs,sem,ass);
		fprintf(fp,"\n-------------------------------------------------------*/\n\n");
		
		printf("Success");
	}
}
