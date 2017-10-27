int strlen(char *s)
{
	unsigned int length = 0;
	while(s[length] != '\0')
	{
		length++;
	}
	return length;
}

int pow(int power, int base)
{
	int ans = 1;
	for(int i = 0; i < power; i++){
		ans = ans * base;
	}
	return ans;
}

char int2char(int i)
{
	return (char)i + 48;
}

int char2int(char i)
{
	return (int)i - 48;
}

int str2int(char* s)
{
	int ans = 0;
	int length = strlen(s);
	unsigned int i = 0;
	for(int i = 0; i < length; i++)
	{
		ans += pow( (length-i-1),10) * char2int(s[i]);
	}
	return ans;
}

void int2str(int ii, char* s)
{
	int length = strlen(s);
	unsigned int i = 0;
	for(i = 0; i < length ; i++)
	{
		s[i] = int2char( ii / pow( (length-i-1),10 ) );
		ii = ii % pow( (length-i-1),10 );
	}
}
