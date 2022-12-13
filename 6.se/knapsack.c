#include &lt; stdio.h & gt;
int n = 5;                  /* The number of objects */
int c[10] = {12, 1, 2, 1, 4}; /* c[i] is the *COST* of the ith object; i.e. what
  YOU PAY to take the object */
int v[10] = {4, 2, 2, 1, 10}; /* v[i] is the *VALUE* of the ith object; i.e.
  what YOU GET for taking the object */
int W = 15;                   /* The maximum weight you can take */
 void simple_fill()
{
    int cur_w;
    float tot_v;
    int i, maxi;
    int used[10];
     for (i = 0; i & lt; n; ++i)
        used[i] = 0; /* I have not used the ith object yet */

     cur_w = W;
    while (cur_w & gt; 0)
    { /* while there&#39;s still room*/
        /* Find the best object */
        maxi = -1;
        for (i = 0; i & lt; n; ++i)
            if ((used[i] == 0) & amp; &amp;
                ((maxi == -1) || ((float)v[i] / c[i] & gt; (float)v[maxi] / c[maxi])))
                maxi = i;
          used[maxi] = 1; /* mark the maxi-th object as used */
        cur_w -= c[maxi]; /* with the object in the bag, I can carry less */
        tot_v += v[maxi];
        if (cur_w &gt; = 0)
            printf(&quot; Added object % d(% d$, % dKg) completely in the bag.Space left
                   : % d.\n & quot;
                   ,
                   maxi + 1, v[maxi], c[maxi], cur_w);
        else
        {
            printf(&quot; Added % d % % (% d$, % dKg) of object % d in the bag.\n & quot;, (int)((1 + (float)cur_w / c[maxi]) * 100), v[maxi], c[maxi], maxi + 1);
            tot_v -= v[maxi];
            tot_v += (1 + (float)cur_w / c[maxi]) * v[maxi];
        }
    }
      printf(&quot; Filled the bag with objects worth % .2f $.\n & quot;, tot_v);
}
  int main(int argc, char *argv[])
{
    simple_fill();
      return 0;
}