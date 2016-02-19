#pragma once

#include <string>

std::wstring hanzi2pinyin(const std::wstring &hanzi, const std::wstring &separator = L"");
std::wstring findGama(wchar_t word);

