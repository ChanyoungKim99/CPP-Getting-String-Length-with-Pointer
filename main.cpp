#include <iostream>

// ���ڿ� 
//		null(zero) terminated 
//		�迭�� ������
//		���ڿ� ������ ����

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
// ���� ���� ���ͷ��� ����ϴ� ���� �ſ� ������.

int main()
{
	char input[1000];

	std::cin >> input;
	std::cout << GetLength(input) << std::endl;
}