#include <iostream>

int main()
{
	int i = 42, j = 24, *p = &i;
	
	p = &j;//����ָ���ֵ 
	*p = 42;//����ָ����ָ�����ֵ
	
	return 0; 
} 
