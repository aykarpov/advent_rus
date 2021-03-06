/* = common blocks for adventure === include file === */
/* ฎ ฌญฅ ํโฎโ ไ ฉซ ฏฎฏ ซ แ ฏฎฌฎเฎ็ฅญญ๋ฌจ ชฎฌฌฅญโ เจ๏ฌจ. .. */

/* - parameters --- current limits: */

                        /* === 55ๅ ใใ === */
#define vocw 550        /* 55 ใ5ฉ */
#define loct 254        /* locations */
#define objt 127        /* objects */
#define fixt 200        /* locations for fixed objects */
#define sttt (objt*2)   /* different states of objects */
#define actw 60         /* "action" verbs */
#define ranm 400        /* random messages */
#define plcl 12         /* different player classifications. */

                        /* === ๎ๅ ใ === */
#define movewr 0        /* 5 ฉ */
#define objcwr 1        /* 'ekt */
#define actnwr 2        /* ใ๎ c 'ektom */
#define specwr 3        /* ใ6-ใ */


/* there are also limits which cannot be exceeded due to the structure */
/* of the database. these upper limits are: */
/*      1000 non-synonymous vocabulary words */
/*       255 locations */
/*       127 objects */
/*       511 random messages */
/*       255 states of objects */


/* --- messages --- */
int  abb;                      /* ก:     ใ */
unsigned  _rtext[ranm];        /* 5ใ 5ๅๆ ใช */
#define    rtext(x) _rtext[(x)-1]
unsigned  _ltext[loct];        /* - " -  ๅๆ ใ 6 */
#define    ltext(x) _ltext[(x)-1]
unsigned  _stext[loct];        /* - " -  5๎ๆ ใ 6*/
#define    stext(x) _stext[(x)-1]
unsigned  _ctext[plcl];        /* - " -  ก6 5 */
#define    ctext(x) _ctext[(x)-1]
unsigned  _cval[plcl];         /* 5 ก6 5 */
#define    cval(x) _cval[(x)-1]
unsigned  _ptext[objt];        /* ใๅ ใช. o ใใ๎.'ektob*/
#define    ptext(x) _ptext[(x)-1]
unsigned  _pstat[sttt];        /* ใๅ ใช. o ใใ๎.'ektob*/
#define    pstat(x) _pstat[(x)-1]
char _abrev[loct];             /* ก:  ใ5ช ใ*/
#define    abrev(x) _abrev[(x)-1]


/* --- travels + actions --- */
unsigned  _trvkey[loct];       /* ๎6 2 5ก  . */
#define    trvkey(x) _trvkey[(x)-1]
unsigned  _actkey[actw];       /*  -"-    -"-  56 ha ใ๎ */
#define    actkey(x) _actkey[(x)-1]


/* --- vocabulary --- */
int  nvoc;                     /* 2ใ ใ b ใ5 */
int  _ktab[vocw];              /* 2ใ - 2ฉ ใ */
#define    ktab(x) _ktab[(x)-1]
long _atab[vocw];              /* ใ -  4  ๅ */
#define    atab(x) _atab[(x)-1]

/* --- state --- */
#define inipro  255           /* 2ฌ. ใใ๎ฉ ฉ ใ5ช */
#define nulobj  255           /* ๎ใ ๎ใ๎ ฃช "ekt */
#define caried  1000          /* mapkep - 'ekt ใ ๎ */

int  rndini;
int  loc;                      /* ๎ ชฉ 6ฉ */
int  tally;                    /* 2ใ ช  5 . ใ5ช */
int  treasr;                   /* homep 1- 'ekta-ใ5ช */
int  rndini;                   /* ใ 2.2ใ  5๎ */
unsigned  tevent;              /*  ๎ฌ ๎6ๅ ใ 2.ใๅ๎ */
unsigned  eevent;              /* 6 ๎6ๅ ใ 2ๅๆ ใๅ๎ */
unsigned  tiniti;              /* -"-  -"- 66 */
int  _place[loct];             /* 6ฉ 7๎  -[ใ] */
#define    place(x) _place[(x)-1]
char _fixed[fixt];             /*    ฉ กใ5ๅๆ 'ektob */
#define    fixed(x) _fixed[(x)-1]
char _prop[objt];              /* ใใ๎ 'ekt */
#define    prop(x) _prop[(x)-1]
