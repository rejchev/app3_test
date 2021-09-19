#include <iostream>

using namespace std;

int main()
{
	constexpr int asciiNumOffset = 48;

	setlocale(LC_ALL, "ru");

	int index = -1;

	char str[256];

	int count[10] = { 0 };

	cout << "Введите строку с символами: " << endl;
	cin >> str;

	for (int i = 0, b; i < strlen(str); i++)
	{
		if (str[i] > 0 && isdigit(str[i]))
		{
			b = static_cast<int>(str[i]) - asciiNumOffset;

			count[b]++;

			if (i == -1 || count[index] < count[b])
				index = b;
		}
	}
	
	if (index != -1)
	{
		cout << "Цифра: " << index << endl;
		cout << "Количество повторений: " << count[index] << endl;
	}
	else cout << "В строке не найдены цифры" << endl;
	
}