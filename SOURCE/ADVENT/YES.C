/* �뤠�� ᮮ�饭�� 'n' � ���� �⢥� yes/no */

yes(x)
    int x;
{
    char c, c1;
    char s[80];

beg:
    rspeak(x);

    for(;;) {
      gets(s);
      trim(s);

      if(s[0]==0) goto quit;

      c=s[0];

      if( c == 'y' || c=='Y' || c=='�' || c=='�' ) {
        x = 1;  break;
      } else if( c == 'n' || c=='N' || c=='�' || c=='�' ) {
        x = 0;  break;
      } else {
        rspeak(40);
      }
    }
    return( x );

quit:
    if( x!=22  &&  yes(22) ) exit(0);
    goto beg;
}
