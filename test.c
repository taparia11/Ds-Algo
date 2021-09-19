#include <stdio.h>
#include<stdlib.h>
#define R 3
#define C 5

_Bool isVALID(int x, int y)
{
    return (x >= 0 && y >= 0 && x < R && y < C);
}

struct ele {
    int i, j;
};

_Bool isdelim(struct ele temp)
{
    return (temp.i == -1 && temp.j == -1);
}

_Bool checkall(int arr[][C])
{
    for (int x=0; x<R; x++)
       for (int y=0; y<C; y++)
          if (arr[x][y] == 1)
             return 1;
    return 0;
}

int rotOranges(int arr[][C])
{
    queue<ele> Q;
    struct ele temp;
    int ans = 0;

    for (int x=0; x<R; x++)
    {
       for (int y=0; y<C; y++)
       {
            if (arr[x][y] == 2)
            {
                temp.i = x;
                temp.j = y;
                Q.push(temp);
            }
        }
    }

    temp.i = -1;
    temp.j = -1;
    Q.push(temp);

    while (!Q.empty())
    {
        bool flag = false;

        while (!isdelim(Q.front()))
        {
            temp = Q.front();

            if (isVALID(temp.i+1, temp.j) && arr[temp.i+1][temp.j] == 1)
            {
                if (!flag) ans++, flag = 1;

                arr[temp.i+1][temp.j] = 2;

                temp.i++;
                Q.push(temp);

                temp.i--; 
            }

            if (isVALID(temp.i-1, temp.j) && arr[temp.i-1][temp.j] == 1) {
                if (!flag) ans++, flag = 1;
                arr[temp.i-1][temp.j] = 2;
                temp.i--;
                Q.push(temp); 
                temp.i++;
            }

            if (isVALID(temp.i, temp.j+1) && arr[temp.i][temp.j+1] == 1) {
                if (!flag) ans++, flag = 1;
                arr[temp.i][temp.j+1] = 2;
                temp.j++;
                Q.push(temp); 
                temp.j--;
            }

            if (isVALID(temp.i, temp.j-1) && arr[temp.i][temp.j-1] == 1) {
                if (!flag) ans++, flag = 1;
                arr[temp.i][temp.j-1] = 2;
                temp.j--;
                Q.push(temp); 
            }

            Q.pop();
        }

        Q.pop();

        if (!Q.empty()) {
            temp.i = -1;
            temp.j = -1;
            Q.push(temp);
        }

    }

    return (checkall(arr))? -1: ans;
}

int main()
{
    int arr[100][C];
    for(int x=0;x<4;x++)
      for(int y=0;y<C;y++)
        scanf("%d",&arr[x][y]);
    int ans = rotOranges(arr);
    if (ans == -1)
        printf("-1");
    else
         printf("%d\n",ans);
    return 0;
}