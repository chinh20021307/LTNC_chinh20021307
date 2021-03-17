void reverse(char*s)
{
	char *p=new char[strlen(s)+1];
	int k=0,i=strlen(s)-1;
	while(i>=0 || k<=i){
		*(p+k)=*(s+i);
		k++;
		i--;
	}
	int a=0,b=strlen(s)-1;
	while(a<=b){
		*(s+a)=*(p+a);
		a++;
    }
}
