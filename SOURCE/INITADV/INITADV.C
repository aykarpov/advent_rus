/*d* === init === adventure === 07.01.85   version  147 */

/* ��砫쭠� ��ࠡ�⪠ ⥪�⮢�� 䠩��� ������ � ᮧ����� 3-x 䠩��� */
/* ��אַ�� ����㯠: */
/*      text.adv    - c ⥪�⠬� ᮮ�饭�� */
/*      common.adv  - ��� ���樠����樨 common-������ */
/*      data.adv    - c ����ᠭ�묨 ����묨 ����� */

/* ����� ���ᠭ� � ᫥����� 䠩���: */
/*      advcave    - ���ᠭ�� ��� ����� */
/*      advmessa   - ⥪��� ࠧ����ࠧ��� ᮮ�饭�� */
/*      advvocab   - ᫮���� */
/*      advobjec   - ��'����, �� ᢮��⢠, ���.��������� ... */
/*      advclass   - �����䨪�樨 ��ப� */
/*      advactio   - ����⢨� � �⢥� �� ࠧ���� ������� */
/*      advevent   - ��砫�� � ��砩�� ����⢨� */


/* === ���뢠�� ��室�� 䠩�� ��� tekctob � ��� ����� === */

#include <stdio.h>
#include "adv_ini.h"
FILE *F2;

main()
{
    printf("\n%s\n","      adventure database initialising");
    printf("---------------------------------------------\n");
    if( (F2=fopen("data.adv","wb")) == NULL )  fatal();


/* === ��ࠡ�⪠ �室��� 䠩��� === */

    ivocab();                    /* ���冷� 1-�� 3-x ��易⥫�� ! */
    iobjec();
    iactio();

    iclass();                    /* � �� ���浪� (�� ��᫥) */
    icave();
    imessa();
    ievent();

    stat();


/* === create file adv_common === */

    savecm();
    printf("---------------------------------------------\n\n");
}
