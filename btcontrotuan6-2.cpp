void rFilter(char *s)
{
	int k=strlen(s)-1;
	while(k>=0){
	    if(s[k]<'A'||(s[k]>'Z'&&s[k]<'a')||s[k]>'z'){
			s[k]='_';
		}
		k--;
		if((s[k]>='a'&&s[k]<='z')||(s[k]>='A'&&s[k]<='Z')){
		    break;
		}
	}
}
