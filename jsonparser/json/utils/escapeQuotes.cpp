
#include "escapeQuotes.h"

// TODO �� ����� ����������� ��������
std::string escapeQuotes(std::string s) {
	std::string result = "";
	for (char c : s) {
		if (c == '"') {
			result += "\\\"";
		} else {
			result += c;
		}
	}

	return result;
}