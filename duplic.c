#include<stdio.h>

void main(){

	char s[30000],*str,c;
	int i,k,j,len=0;
	printf("enter the string :");
	c=gets(s);
	str=s;
	while(*str!='\0')
	{
		
		len++;
		str++;
	}
	printf("the given string length is :%d\n",len);	
	if(len>=1 && c!='\0'&&c!="\n")
	{
	 	for(i=0;s[i];i++)
	 {
	 
			for(j=i+1;s[j];j++)
			{
				if(s[i]==s[j])
				{
					for(k=j;s[k];k++)
				
				  	  s[k]=s[k+1];
					j=j-1;
				
				}
			}
	 }
	printf("the new string is : %s\n",s);
		}
	else
	{	printf("entered string length is %d ,enter the string with valid length",len);

	}
}

	
	

