#include <stdio.h>
int playprint(int n1, char c1);
int playprint2(int n1, char c1, int n2);
int Pn1(int n1);
char Pc1(char c1);
int Pn2(int n2);
int seting(int c1, char n1, int n2);
int case1(char c1, int n1, int n2);


int main(void)
{
	char c1 = ' ';
	int n1 = 0;
	int n2 = 0;

	playprint(n1, c1);
	n1 = Pn1(n1);
	playprint(n1, c1);
	c1 = Pc1(c1);
	playprint(n1, c1);
	n2 = Pn2(n2);
	playprint2(n1, c1, n2);
	n1 = case1(c1, n1, n2);
	c1 = ' ';
	n2 = 0;
	playprint(n1, c1);

	return 0;
}

int playprint(int n1, char c1) {
	/* 콘솔 n1 계산기 출력*/
	printf("\n"
		"- 	-	-	-	-	-	-	-	-\n"
		"-						-	C	-\n"
		"- %d	 %c				-	-	-\n"
		"-						-	*	-\n"
		"-	-	-	-	-	-	-	-	-\n"
		"-	7	-	8	-	9	-	/	-\n"
		"-	-	-	-	-	-	-	-	-\n"
		"-	4	-	5	-	6	-	+	-\n"
		"-	-	-	-	-	-	-	-	-\n"
		"-	1	-	2	-	3	-	-	-\n"
		"-	-	-	-	-	-	-	-	-\n"
		"-		-	0	-		-	=	-\n"
		"-	-	-	-	-	-	-	-	-\n\n", n1,c1);
	return 0;
}

int playprint2(int n1, char c1, int n2)
{
	/* 콘솔 n1 계산기 출력*/
	printf("\n"
		"- 	-	-	-	-	-	-	-	-\n"
		"-						-	C	-\n"
		"- %d	%c	 %d			-	-	-\n"
		"-						-	*	-\n"
		"-	-	-	-	-	-	-	-	-\n"
		"-	7	-	8	-	9	-	/	-\n"
		"-	-	-	-	-	-	-	-	-\n"
		"-	4	-	5	-	6	-	+	-\n"
		"-	-	-	-	-	-	-	-	-\n"
		"-	1	-	2	-	3	-	-	-\n"
		"-	-	-	-	-	-	-	-	-\n"
		"-		-	0	-		-	=	-\n"
		"-	-	-	-	-	-	-	-	-\n\n", n1, c1,n2);
	return 0;
}

int Pn1(int n1)
{
	while (1)
	{
		/*n1의 값을 저장*/
		printf("수를 입력해주세요. ex(n1*n2) n1의 값을 입력하십시요.\n");

		int result = scanf_s("%d", &n1);

		if (result == 1) {
			break; // 정수 입력 성공 → 반복 종료
		}
		else {
			// 버퍼에 남은 잘못된 입력 제거
			while (getchar() != '\n');
			printf("다시 정수를 입력해주세요.\n");
		}
	}
	return n1;
}

char Pc1(char c1)
{
		while (1)
	{
		/*c1의 값을 저장*/
		printf("연산자를 입력해주세요. ex(n1*n2) *의 값을 입력하십시요.\n");
		char result = scanf_s("%c", &c1, 1);
		if (result == 1 && (c1 == '+' || c1 == '-' || c1 == '*' || c1 == '/'))
		{
			break; // 문자 입력 성공 및 유효한 연산자 → 반복 종료
		}
		else {
			// 버퍼에 남은 잘못된 입력 제거
			while (getchar() != '\n');
			printf("다시 연산자를 입력해주세요. (+, -, *, / 중 하나)\n");
		}
	}
		return c1;
}

int Pn2(int n2)
{
	while (1)
	{
		/*n1의 값을 저장*/
		printf("수를 입력해주세요. ex(n1*n2) n2의 값을 입력하십시요.\n");

		int result = scanf_s("%d", &n2);

		if (result == 1) {
			break; // 정수 입력 성공 → 반복 종료
		}
		else {
			// 버퍼에 남은 잘못된 입력 제거
			while (getchar() != '\n');
			printf("다시 정수를 입력해주세요.\n");
		}
	}
	return n2;
}

int case1(char c1, int n1, int n2)
{
	int res1 = 0;

	switch (c1)
	{
	case '+':
		res1 = n1 + n2;
		break;
	case '-':
		res1 = n1 - n2;
		break;
	case '*':
		res1 = n1 * n2;
		break;
	case '/':
		if (n2 != 0) {
			res1 = n1 / n2;
		}
		else {
			printf("0으로 나눌 수 없습니다. 다시 입력해주세요.\n");
			n2 = Pn2(n2);
		}
		break;
	}

	return res1;
}

int seting(int c1, char n1, int n2) /*값 초기화*/
{
	n1 = 0;
	c1 = " ";
	n2 = 0;
	return c1, n1, n2;
}

