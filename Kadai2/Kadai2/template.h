#pragma once
template<class T,class T1>

T disp(T t,T1 l, char value) {

	T answer;
	switch (value)
	{
	case '+':
		answer = t + l;
		break;
	case '-':
		answer = t - l;
		break;
	case '*':
		answer = t * l;
		break;
	case '/':
		answer = t / l;
		break;
	default:
		break;
	}
	return answer;
}




//
// template.h‚ğì¬A‚±‚±‚Étemplate‚ğì¬‚·‚é
// 
// ŠÖ”ƒeƒ“ƒvƒŒ[ƒg‚ğ’è‹`‚àŠÜ‚ß‚Ä‹Lq‚·‚é
// 
// ˆá‚¤Œ^“¯m‚ğ‰ÁZ‚µ‚ÄA‚Ç‚¿‚ç‚©‚ÌŒ^‚Å•Ô‚·ŠÖ”
// ˆá‚¤Œ^“¯m‚ğŒ¸Z‚µ‚ÄA‚Ç‚¿‚ç‚©‚ÌŒ^‚Å•Ô‚·ŠÖ”
// ˆá‚¤Œ^“¯m‚ğæZ‚µ‚ÄA‚Ç‚¿‚ç‚©‚ÌŒ^‚Å•Ô‚·ŠÖ”
// ˆá‚¤Œ^“¯m‚ğœZ‚µ‚ÄA‚Ç‚¿‚ç‚©‚ÌŒ^‚Å•Ô‚·ŠÖ”
// 
// main ŠÖ”‚Å—˜—p‚Å‚«‚é‚æ‚¤‚É‚·‚é
//