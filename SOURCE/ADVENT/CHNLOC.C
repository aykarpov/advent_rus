/*d* === chnloc ===        07.01.85   version    9 */
/* ��������� ����樨 ha ������ #newloc */

#include "..\common\advexter.h"

int drkfla;

chnloc(newloc) {
    static int drkold;
    drkold=dark();
    loc=newloc;
    if( dark() && drkfla && drkold && pct(30) ) {
	rspeak(23);                   /* ᢠ����� b ������� b temhote */
	score();
	exit(0);
    }
    drkfla=1;
    descr();
}
