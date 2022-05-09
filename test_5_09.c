 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	strcmp - 字符串比较
//	const char* p1 = "abcdef";
//	char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2,5);
//	printf("%d\n", ret);
//	return 0;
//}
//strstr - 查找字符串
//NULL - 空指针
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
//			return cur;//找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//int main()
//{
//	char* p1 = "abbbcef";
//	char* p2 = "bbc";
//
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//int main() 
//{
//	//点分十进制的表示方式
//	char arr[] = "a1249967801@163.com";
//	char* p = "@.";
//	
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
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
//strerror - 错误信息函数
//返回错误码所对应的错误信息
//#include<errno.h>
//int main()
//{
	// 错误码  错误信息
	// 0 -     No error
	// 1 -     Operation not permitted
	// 2 -     No such file or directory
	// ...
	// errno 是一个全局的错误码的变量
	// 当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，复制到errno中

	//char* str = strerror(errno);
	//printf("%s\n", str);
	
	//打开文件
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
//内存函数
int main()
{

	return 0;
}