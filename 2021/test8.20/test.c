#define _CRT_SECURE_NO_WARNINGS 1
#include"test .h"
void Print(void)
{
	printf("***********************************\n");
	printf("****   1.Add          2.Dele   ****\n");
	printf("****   3.Search       4 Alter  ****\n");
	printf("****   5.Show         6.Sort   ****\n");
	printf("****          0.Exit           ****\n");
	printf("***********************************\n");
}
int main()
{
	int input = 0;
	SCon con; //����100���˵���Ϣ ��size
	//��ʼ��
	Initialise(&con);
	do
	{
		Print();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Dele:
			DeleContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Alter:
			AlterContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Exit:
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
//int main()
//{
//	printf(" %-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "name", "age", "sex", "tele", "addr");
//	printf(" %-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n", "zansan", 15, "nan", "12345", "xiad");
//	return 0;
//}









//typedef int* ty_int;
//int main()
//{
//	/*char ch = 'abcd';
//	printf("%c\n", ch);*/
//	//int a = 10;
//	//char a = '\0x41';
//	////0100 0001  -  65
//	//printf("%d\n", a);
//	//printf("%o\n", a);
//	//printf("%x\n", a);
//	//printf("%#o\n", a);
//	//printf("%#x\n", a);
//	//int *x, y;//x��ָ�� y��int
//	//          //�Ժ���ָ��ʱ*��ø��ű�����
//	//int* a, b;//����VS�Զ�����int�ˣ��������������м�ס����
//	//int* x, y;
//	//ty_int a, b; //ty_int ��һ�������� 
//	/*int deep = '\007';
//	printf("%d\n", deep);
//
//	deep = '\016';
//	printf("%d\n", deep);
//
//	deep = '\100';
//	printf("%d\n", deep);
//
//	deep = '\x15';
//	printf("%d\n", deep);
//
//	deep = '\xa';
//	printf("%d\n", deep);
//	*/
//	/*char ch = '\xff';
//	printf("%d\n", ch);
//
//	ch = '\x7f';
//	printf("%d\n", ch);
//
//	ch = '\x111';
//	printf("%d\n", ch);*/
//	return 0;
//}
//int main()
//{
//	int ch=fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}
//�ļ� 
//�����ļ�
//�����ļ�
//�ļ���
//�ļ����� - �ı��ļ� - �������ļ�
//�ļ������� ���뻺���� ���������
//FLIE* pf = foropen();
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = forpen();
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	//FILE* pf = forpen();
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	char ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//fgetc ���Զ�ȡ��һ����
//	ch = fgetc(pf);  //��ȡ��\n��
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	���ļ�
//	fgets(buf, 1024, pf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	puts(buf);  //puts�����ỻ��
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char ch[1024] = { 0 };
//	gets(ch);
//	puts(ch);
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	/*FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}*/
//	//��ʽ������ʽ���ļ�
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),s.arr);
//	fprintf(stdout,"%d %f %s\n", s.n, s.score, s.arr);
//	//�ر��ļ�
//	/*fclose(pf);
//	pf = NULL;*/
//	return 0;
//}
//int main()
//{
//	struct S s = { 100,3.14,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	return 0;
//}
//sscanf & sprintf
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14,"abcdef" };
//	struct S temp = { 0 };
//	char buf[1024] = { 0 };
//    sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//  
//	//printf("%s\n", buf); 
//	sscanf(buf, "%d %f %s",&(temp.n), &(temp.score), temp.arr);
//    printf (buf, "%d %f %s",temp.n, temp.score, temp.arr);
//	return 0;
//}

