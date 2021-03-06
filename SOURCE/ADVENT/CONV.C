/* ��������������� �����: ����� --> ��� ��������� ������������� */
/* �� ��室�: 㪠��⥫� �� ��ப� ������ 'length', ����������� \000,
	      ᮤ�ঠ��� �८�ࠧ������� �� ������ ��⥬� ��᫥��� �᫮,
	      ��稭��饥�� ᯥ।� ᨬ������ 'begins' */

char *conv (value, length, radix, begins)
    register unsigned value;            /* �८�ࠧ㥬�� ���祭�� */
    int length;                         /* ����� ��室���� ���� */
    register radix;                     /* �᭮����� ��⥬� ��᫥��� */
    char begins;                        /* 祬 ��������� �᫮ ᯥ।� */
{
    char *ptr;
    static char buf[16+1];
    register i;

    buf[16]='\000';
    for(i=0; i<16; ++i)  buf[i]=begins;
    ptr = &buf[16];

    do {
	*--ptr = (i=value%radix) < 10 ? i+'0' : i-10+'A';
	value /= radix;
     } while(value);

    return(&buf[16-length]);
}
