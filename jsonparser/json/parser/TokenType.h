#pragma once

enum TokenType {
	BRACE_LEFT, // {
	BRACE_RIGHT, // }
	BRACKET_LEFT, // [
	BRACKET_RIGHT, // ]
	STRING_, // "..."
	NULL_, // null
	BOOLEAN, // true, false
	COLON, // :
	COMMA, // ,
	NUMBER, // �����, ���� ��� ����� �������, TODO �� ������� 1e
};
