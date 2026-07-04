#pragma once
#include <iostream>

template<class T>
void disp(T t, T l, char value) {
	switch (value)
	{
	case '+':
		std::cout << t + l << std::endl;
		break;
	case '-':
		std::cout << t - l << std::endl;
		break;
	case '/':
		std::cout << t / l << std::endl;
		break;
	case '*':
		std::cout << t * l << std::endl;
		break;
	default:
		break;
	}
};

//
// Template‚Å‰º‹L‚ð’è‹`‚àŠÜ‚ß‚Ä‹Lq‚·‚é
// 
// “¯‚¶Œ^“¯Žm‚ð‰ÁŽZ‚µ‚Ä•Ô‚·ŠÖ”
// “¯‚¶Œ^“¯Žm‚ðŒ¸ŽZ‚µ‚Ä•Ô‚·ŠÖ”
///“¯‚¶Œ^“¯Žm‚ðæŽZ‚µ‚Ä•Ô‚·ŠÖ”
// “¯‚¶Œ^“¯Žm‚ðœŽZ‚µ‚Ä•Ô‚·ŠÖ”
// 
// mainŠÖ”‚Å—˜—p‚Å‚«‚é‚æ‚¤‚É‚·‚é
//
