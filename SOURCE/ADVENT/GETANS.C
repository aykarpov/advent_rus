/*d* === getans ===        07.01.85   version    9 */
/* ���� ������ ��� 2-x ᫮� */
/* out: word1,word2 - �������� �� ᫮���� ���祭�� ᫮� */
/*      type1,type2 - �� ⨯� (-1 - ᫮�� het) */

getans(word1,word2,type1,type2)
    int *word1, *word2, *type1, *type2;
{
    int work, kk;
    char _wrd1[10],_wrd2[10];
#    define wrd2(x) _wrd2[(x)-1]
#    define wrd1(x) _wrd1[(x)-1]

    for(;;) {
	inpans(_wrd1,_wrd2);
	*word1 = *word2 = *type1 = *type2 = -1;
	if( wrd1(1)=='!' || wrd2(1)=='!' )  goto L100    /* ᯥ�-᫮�� */;

	work=vocab(_wrd1);
	if( work >= 1 ) {
	    *word1=work%1000;
	    *type1=work/1000;
	}

	work=vocab(_wrd2);
	if( work >= 1 ) {
	    *word2=work%1000;
	    *type2=work/1000;
	}

    if( *type1>=0 ) break;          /* bce ᫮�� ��������� */
	if( wrd1(1)==' ' ) {           /*     ����� het �� ������ */
	    kk=61;
	} else {
L100:       kk=60;
	    if( pct(50) )  kk=61;
	    if( pct(33) )  kk=13;
	}
	rspeak(kk);
    }
}
