#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
void main()
{
	//task1
	/*int N, M, sum = 0;
	printf("ââåäèòå ÷èñëî:");
	scanf_s("%d", &N);
	printf("Ââåäèòå ñòåïåíü:");
	scanf_s("%d", &M);
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			i *= i;
		sum += i;
	}
	printf("Èòîãî: %d\n", sum);*/

	/*int A, B, s1, s2, S, mes;
	printf("Âââåäèòå ðàçìåð ñòèïåíäèè: ");
	scanf_s("%d", &A);
	printf("Âââåäèòå ðàçìåð íàêîïëåíèÿ: ");
	scanf_s("%d", &S);
	printf("Âââåäèòå ðàçìåð ðàñõîäîâ: ");
	scanf_s("%d", &B);
	s2 = 0;
	s1 = 12 * A;
	for (size_t i = 1; i <= 12; i++)
	{
		B = (float)B * 1.03;
		s2 = s2 + B;
	}
	printf("Ñòèïåíäèÿ çà 12 ìåñÿöåâ=%d\n", s1);
	printf("Ðàñõîäû çà 12 ìåñÿöåâ=%d\n", s2);
	mes = (s1 + S) / s2;
	printf("Èòîãî ìåñÿöåâ:%d\n", mes);

	int s, m, k, n, a;

	printf("Âââåäèòå ÷èñëî: ");
	scanf_s("%d", &a);
	printf("Êîëè÷åñòâî ÷èñåë: ");
	scanf_s("%d", &m);
	s = 0;
	n = m;
	for (size_t i = 1; i <= m; i++)
	{
		k = n % 10;
		printf("k=%d; ", k);
		n = a % 10;
		printf("n=%d; \n", n);
		s = s + k;

	}
	printf("Ñóììà ïîñëåäíèõ ÷èñåë ÷èñëà:%d\n", s);
	*/
	/*
	int x1, x2, x3, x4, i;
	printf("Ââåäèòå ÷èñëî:");
	scanf_s("%d", &i);
	for (size_t i = 100; i <= 9999; i++)
	{
		x4 = i % 10;
		x3 = i / 10;
		x3 = x3 % 10;
		x2 = i / 100;
		x2 = x2 % 10;
		x1 = i / 1000;
		x1 = x1 % 10;
	}
	if (pow(x1, 3) + pow(x2, 3) + pow(x3, 3) + pow(x4, 3))
	{
		printf("×èñëî ÿâëÿåòñÿ ÷èñëîì Àðìñòðîíãà;\n×èñëî :%d\n", i);
	}*/

	/*int x1, x2, x3, x4, i;
	printf("Ââåäèòå ÷èñëî:");
	scanf_s("%d", &i);
	for (i = 100; i <= 9999; i++)
	{
		x4 = i % 10;
		x3 = i / 10;
		x3 = x3 % 10;
		x2 = i / 100;
		x2 = x2 % 10;
		x1 = i / 1000;
		x1 = x1 % 10;
	}
	if (i % 7 == 0 && (x1 + x2 + x3) % 7 == 0)
	{
		printf("×èñëà: %d\n", i);
	}
	else
	{
		printf("×èñëî íå óäîâëåòâîðÿåò óñëîâèþ\n");
	}*/

	system("pause");
}