#include<bits/stdc++.h>
using namespace std;
int row[8], TC, a, b, lineCounter;
bool place(int r, int c)
{
    for (int prev = 0; prev < c; prev++)
        if (row[prev] == r || (abs(row[prev] - r) == abs(prev - c)))
            return false;
    return true;
}
void backtrack(int c)
{
    if (c == 8 && row[b] == a)
    {
        printf("%2d      %d", ++lineCounter, row[0] + 1);
        for (int j = 1; j < 8; j++)
            printf(" %d", row[j] + 1);
        printf("\n");
    }
    for (int r = 0; r < 8; r++)
        if (place(r, c))
        {
            row[c] = r;
            backtrack(c + 1);
        }
}
int main()
{
    //freopen("750out.txt","w+",stdout);
    bool s;
    s=false;
    scanf("%d", &TC);
    while (TC--)
    {
        if(s)
            cout<<"\n";
        s=true;
        scanf("%d %d", &a, &b);
        a--;
        b--; // switch to 0-based indexing
        memset(row, 0, sizeof row);
        lineCounter = 0;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        backtrack(0);
    }
 return 0;
}
