
#include <iostream>
#include "hanzi2pinyin.h"

int main(int argc, char *argv[])
{
	std::wstring wstr(L"ƻ�������°�iOS�����޸���ש����");
	std::wstring result = hanzi2pinyin(wstr, L" ");

	std::wcout.imbue(std::locale("chs"));
	std::wcout << L"src:" << wstr << std::endl;
	std::wcout << L"dst:" << result << std::endl;

	system("pause");
	return 0;
}

