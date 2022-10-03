#include <iostream>

// 문자열 
//		null(zero) terminated 
//		배열은 포인터
//		문자열 포인터 연산

int GetLength(char* pc)
{
	char* p = pc;
	int count{};
	
	while (*p != '\0')
	{
		p++;
		count++;
	}
	
	return count;
};

/*
int GetLength(char* pc)
{
	for (int i = 0; i < 1000; i++)
	{
		if (pc[i] == '\0')
		{
			return i;
		}
	}
};
*/
// 위와 같이 리터럴을 사용하는 것은 매우 안좋다.

int main()
{
	char input[1000];

	std::cin >> input;
	std::cout << GetLength(input) << std::endl;
}