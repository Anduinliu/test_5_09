 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	strcmp - �ַ����Ƚ�
//	const char* p1 = "abcdef";
//	char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2,5);
//	printf("%d\n", ret);
//	return 0;
//}
//strstr - �����ַ���
//NULL - ��ָ��
//NUL/Null - '\0'
//#include<assert.h>
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	//
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//
//		while ((*s2 != '\0') && (*s1!='\0') && (*s1 == *p2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//int main()
//{
//	char* p1 = "abbbcef";
//	char* p2 = "bbc";
//
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//int main() 
//{
//	//���ʮ���Ƶı�ʾ��ʽ
//	char arr[] = "a1249967801@163.com";
//	char* p = "@.";
//	
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	/*char*ret=strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//	return 0;
//}
//strerror - ������Ϣ����
//���ش���������Ӧ�Ĵ�����Ϣ
//#include<errno.h>
//int main()
//{
	// ������  ������Ϣ
	// 0 -     No error
	// 1 -     Operation not permitted
	// 2 -     No such file or directory
	// ...
	// errno ��һ��ȫ�ֵĴ�����ı���
	// ��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬���Ƶ�errno��

	//char* str = strerror(errno);
	//printf("%s\n", str);
	
	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}
//#include<ctype.h>
//int main()
//{
//	char ch = '2';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	//char ch = tolower('Q');
//	//char ch = toupper('q');
//	
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
// 
//�ڴ溯��
int main()
{

	return 0;
}