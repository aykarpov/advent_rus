/*d* === motion + action ===           07.01.85   version   13 */
/* ��।������� ��� ����⢨� b otbet ha ᫮�� */
/* inp: verb   - ������ �������� ��� ����⢨� */
/*      object - ��'ekt (�᫨ het to =0) */

#include "..\common\advexter.h"

action(verb,object) {
    int kk;

    kk=actkey(verb);
    if( kk==0 && verb!=1 )  fatal(102);
    if( !act(kk,object) )  rspeak(12); /* kak �ਬ����� ᫮��? */
}

motion(verb) {
    int kk;

    kk=trvkey(loc);
    if( kk==0 && loc!=1 )  fatal(103);
    if( !act(kk,verb) ) {
	if( pct(50) ) {
	    rspeak(9);                /* ��� het */
	} else {
	    rspeak(12);              /* kak �ਬ����� �� ᫮�� �����? */
	}
    }
}
