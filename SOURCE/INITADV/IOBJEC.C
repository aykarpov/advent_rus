/*d* === iobjec === read in cave description === 13.02.85   version   11 */

/*  format: */
/*     +  word(s) to name object */
/*     i  invent message (for movable objects) */
/*     0,1.. object in various state */
/*     s  initial state (in <>0) */
/*     l  initial location (for movable objects) */
/*     f  initial location(s) for fixed objects */
/*     =  separate treasures */

#include "adv_ext.h"

iobjec() {
    static int mark, object, indstt, posit, indfix;

    if( (F3=fopen("advobjec","r")) == NULL )  fatal();
    printf("objects description:");
    while(getlin()) {
	mark=line(1);  p=4;

	if( mark=='+' ) {                 /* ����� ��"ektob */
	    object=object+1;
	    while(getwrd()) {
		if( vocab(_word) >= 0 ) {
		    printf("\n%s%.4s\n","������ ��।�����: ",_word);
		    fatal();
		}
		nvoc=nvoc+1;
		ktab(nvoc)=object+(objcwr*1000);  atab(nvoc) = *rword;
	    }
	    screen(object);
	    if( treasr>=1 ) {
		prop(object)=inipro;
		tally=tally+1;
	    }

	} else if( mark=='=' ) {             /* ��諨 ��"����-᮪஢�� */
	    treasr=object+1;

	} else if( mark=='i' ) {             /* ᮮ�饭�� o ��ᮬ�� */
	    indstt=indstt+1;
	    ptext(object)=indstt;
	    pstat(indstt)=putmes();

	} else if( mark>='0' && mark<='9' ) {     /* o ���ﭨ�� */
	    indstt=indstt+1;
	    pstat(indstt)=putmes();

	} else if( mark=='s' ) {                 /* ��砫쭮� ���ﭨ� */
	    prop(object)=getobj();

	} else if( mark=='l' ) {                 /* ��砫쭠� ������: */
	    place(object)=getobj()            /*   ���������� ��"ekta */;

	} else if( mark=='f' ) {                 /*   䨪�஢������ */
	    place(object) = -(indfix+1);
	    for(;;) {
		posit=getobj();
	    if(!(posit>=1)) break;
		indfix=indfix+1;
		fixed(indfix)=posit;
	    }
	    indfix=indfix+1;
	    fixed(indfix)=0;

	} else {
	    printf("\n%s%.10s\n","�訡��: ",&line(p));  fatal();
	}
    }
    printf("%8d  %s %6d  %s\n",object,"of",objt,"used");

    printf("fixed objects posit:");
    printf("%8d  %s %6d  %s\n",indfix,"of",fixt,"used");

    printf("objects states     :");
    printf("%8d  %s %6d  %s\n",indstt,"of",sttt,"used");

    fclose(F3);
}
