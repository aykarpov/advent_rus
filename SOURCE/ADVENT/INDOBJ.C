/*d* === indobj ===        07.01.85   version   16 */
/* indicate objects at this location */

#include "..\common\advexter.h"

indobj() {
    int obj, kk, p;
    if( !dark() ) {
	for(obj=1; obj<=objt; ++obj) {
	    if( ptext(obj)!=0 ) {
		kk = prop(obj) & 0377;
		if( kk==inipro )  kk=0;
		kk=pstat(ptext(obj)+kk+1);
		p=place(obj);

		if( p == loc ) {                 /* �������� ��"ekt */
		    if( (prop(obj)&0377) == inipro ) { /* ����� 㢨��� */
			prop(obj)=0     /*        ᮪஢�� */;
			tally=tally-1;
		    }
		    mes(kk);

		} else if( p < 0 ) {                      /* �� -"- -"- */
		    p = -p;
		    while(fixed(p)!=0) {
			if((fixed(p)&0377)==loc)  mes(kk);
			p=p+1;
		    }
		}
	    }
	}
    }
}
