#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void test()
{
	printf("hehe");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//void qsort(void* base, size_t num, size_t width, int(__cdecl* compare)(const void* elem1, const void* elem2));

//void My_qsort(void* base, int num, int width, int(*com)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		for (int j = 0; j < num - 1 - i; j++)
//		{
//			if (com((char*)e1, (char*)e2)>0)
//			{
//				Swap();
//			}
//		}
//	}
//}

//int main()
//{
//	int(*pf[4])(int, int) = { Add,Sub,Mul,Div };
//
//	int(*(*ppf)[4])(int, int) = &pf;
//	//ppf
//
//	return 0;
//}

//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = &Add;
//	printf("%d\n", pf1(1, 2));
//	printf("%d\n", (*pf1)(1, 2));
//	printf("%d\n", (*pf2)(1, 2));
//	return 0;
//}

//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}








//void resreval(char arr[], int sz)
//{
//	assert(arr);
//	char* left = arr;
//	char* right = arr + sz - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	/*int a = 10;
//	10 = 20;
//	return 0;*/
//}

//0x
//int main()
//{
//	printf("%#p\n", 1);
//	printf("%#x\n", 1);
//	return 0;
//}
//0x 00 00 00 01
//

//int main()
//{
//	int a = 1;
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//int main()
//{
//
//	char c;
//	int v0 = 0, v1 = 0, v2 = 0;
//	do
//	{
//		//ADescriptor 4 7
//		switch (c = getchar())
//		{
//		case'a':case'A':
//		case'e':case'E':
//		case'i':case'I':
//		case'o':case'O':
//		case'u':case'U':v1 += 1;
//		default:v0 += 1; v2 += 1;
//		}
//	} while (c != '\n');
//	printf("v0=%d,v1=%d,v2=%d\n", v0, v1, v2);
//	return 0;
//	//int m, n;
//	//printf("Enter m,n;");
//	//scanf("%d%d", &m, &n);
//	//while (m != n) //1   65 14  //51
//	//{
//	//	while (m > n) m = m - n; //2
//	//	while (n > m) n = n - m; //3
//	//}
//	//printf("m=%d\n", m);
//	//return 0;
//
//}


//int main()
//{
//	int a[] = { 4, 0, 2, 3, 1 }, i, j, t;
//	for (i = 1; i < 5; i++)
//	{
//		t = a[i];    //0
//		j = i - 1; // 0
//		while (j >= 0 && t < a[j])
//		{
//			a[j + 1] = a[j];
//			--j;
//		} 
//		a[j + 1] = t;
//	}
//
//	return 0;
//}
//int* findErrorNums(int* nums, int numsSize, int* returnSize) 
//{
//	//int j = 0;
//	//≈≈–Ú
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		for (int j = 0; j < numsSize - 1 - i; j++)
//		{
//			if (nums[j] > nums[j + 1])
//			{
//				int temp = nums[j];
//				nums[j] = nums[j + 1];
//				nums[j+1] = temp;
//			}
//		}
//	}
//
//	int j = 0;
//
//	int* p = (int*)malloc(sizeof(int) * numsSize);
//	// 1 2 2 4     
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] != i + 1)
//		{
//			//1 1 3
//			//2 2 3
//
//			p[j++] = nums[i];
//			p[j] = i + 1;
//			/*p[j++] = i;
//			p[j] = i + 1;*/
//		/*	p[(*returnSize)] = i;
//			(*returnSize)++;
//			p[(*returnSize)] = i + 1;
//			(*returnSize)++;*/
//			break;
//		}
//	}
//	*returnSize = 2;
//	return p;
//}

//int* findErrorNums(int* nums, int numsSize, int* returnSize) 
//{
//	
//	//≈≈–Ú
//	// 3,2,3,4,6,5          2 3 3 4 5 6
//	// [3,2,2]  2 2 3  
//	//1 4 3 4   1 3 4 4
//	//0 1 0 3 4
//	int* p1 = (int*)malloc(sizeof(int) * (numsSize + 1));
//	//≈≈–Ú
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		for (int j = 0; j < numsSize - 1 - i; j++)
//		{
//			if (nums[j] > nums[j + 1])
//			{
//				int temp = nums[j];
//				nums[j] = nums[j + 1];
//				nums[j+1] = temp;
//			}
//		}
//	}
//	//’“÷ÿ∏¥
//	int* prev = nums;
//	int* next = nums + 1;
//	for (int i = 1; i < numsSize;i++)
//	{
//		if (*prev == *next)
//		{
//			p1[0] = *prev;
//			break;
//		}
//		prev++;
//		next++;
//	}
//	int* p2 = (int*)malloc(sizeof(int) * (numsSize + 1));
//	for (int i = 0; i < numsSize + 1; i++)
//	{
//		p2[i] = 0;
//	}
//	for (int i = 0; i < numsSize; i++)
//	{
//		p2[nums[i]] = nums[i];
//	}
//	//’“»± ß
//	int j = 1;
//	while (j < numsSize + 1)
//	{
//		if (p2[j] == 0)
//		{
//			p1[1] = j;
//			break;
//		}
//		j++;
//	}
//	*returnSize = 2;
//	return p1;
//
//}

int* findErrorNums(int* nums, int numsSize, int* returnSize)
{
	//—°‘Ò≈≈–Ú
	int* p = (int*)malloc(sizeof(int) * (numsSize + 1));
	for (int i = 0; i < numsSize + 1; i++)
	{
		p[i] = 0;
	}

	int* p1 = (int*)malloc(sizeof(int) * 2);
	for (int i = 0; i < numsSize; i++)
	{
		if (p[nums[i]] != 0)
		{
			p1[0] = p[nums[i]];
		}
		p[nums[i]] = nums[i];
	}
	//
	//’“»± ß
	int j = 1;
	while (j < numsSize + 1)
	{
		if (p[j] == 0)
		{
			p1[1] = j;
			break;
		}
		j++;
	}
	*returnSize = 2;
	return p1;
}

//int main()
//{
//	int arr[3] = { 3,2,2 };
//	int ret = 0;
//	int *p = findErrorNums(arr, 3, &ret);
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int ch = 0;
		while ((ch = getchar()) != '\n')
		{
			if (!((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch > 'a' && ch <= 'z')))
			{
				printf("NO\n");
				break;
			}
		}
		getchar();
	}
	//while (scanf("%d", &n) != EOF)
	//{
	//	int ch = 0;
	//	while ((ch = getchar()) != '\n')
	//	{
	//		if (!((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch > 'a' && ch <= 'z')))
	//		{
	//			printf("NO\n");
	//			break;
	//		}
	//	}
	//	getchar();

	//	//printf("Yes\n");
	//}
	return 0;
}


