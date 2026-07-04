#pragma once
#include <iostream>

template<class T>
T disp(T t, T l, char value) {
	T answer;
	switch (value)
	{
	case '+':
		answer = t + l;
		break;
	case '-':
		answer = t - l;
		break;
	case '/':
		answer = t * l;
		break;
	case '*':
		answer = t / l;
		break;
	default:
		break;
	}
	return 
};

//
// Template‚Å‰º‹L‚ğ’è‹`‚àŠÜ‚ß‚Ä‹Lq‚·‚é
// 
// “¯‚¶Œ^“¯m‚ğ‰ÁZ‚µ‚Ä•Ô‚·ŠÖ”
// “¯‚¶Œ^“¯m‚ğŒ¸Z‚µ‚Ä•Ô‚·ŠÖ”
///“¯‚¶Œ^“¯m‚ğæZ‚µ‚Ä•Ô‚·ŠÖ”
// “¯‚¶Œ^“¯m‚ğœZ‚µ‚Ä•Ô‚·ŠÖ”
// 
// mainŠÖ”‚Å—˜—p‚Å‚«‚é‚æ‚¤‚É‚·‚é
//
