#include <stdio.h>
#include <stdlib.h>

void main()                                         // emulate matches

{       int r,x,max,c; float win,loss,draw,f1,f2,f3,f4; char w[200]; int rnd,d,e;
        float tot=0; int rounds;

        srand(rnd);

        printf("Emulate Matches version 1.0\n\n");

again:  printf("Number of Games "); gets(w); max=atoi(w);
        printf("Rounds          "); gets(w); rounds=atoi(w);

loop:   x=0; win=0; loss=0; draw=0; tot=0; printf("\n");

next:   if (x==max) goto end;

        r=rand(); r=r&3; if (r==0) goto next;
        if (r==1) win++;
        if (r==2) loss++;
        if (r==3) draw++;

        if (r==1) tot=tot+1.0;
        if (r==3) tot=tot+0.5;

        x++; if (x!=max) goto next;

        f1=win+(draw/2); f2=loss+(draw/2); f4=x; f3=(f1*100)/f4; d=f1; e=f2;
        printf("%d-%d (%.1f%%) ",d,e,f3);
        goto next;

end:    rounds--; if (rounds) goto loop;
        printf("\n(Q)uit (A)gain ");
        c=getch(); if (c=='q') return;
                   if (c=='a') { printf("\n\n"); goto again; }
        rounds=atoi(w); printf("\n\n"); goto loop;
}
