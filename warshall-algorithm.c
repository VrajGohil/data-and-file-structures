#include<stdio.h>
#include<stdlib.h>

#define INF 99999

struct Graph
{
    int V;
    int E;
    int *Adj;
};

void warshall(struct Graph *G)
{
    int i,j,k;
    int dist[G->V][G->V];

    for(i=0;i<G->V;i++)
    {
        for(j=0;j<G->V;j++)
        {
            dist[i][j]=*(G->Adj+i*G->V+j);
        }
    }

     for(k=0;k<G->V;k++)
     {
        for(i=0;i<G->V;i++)
        {
            for(j=0;j<G->V;j++)
            {
                if(dist[i][k]+dist[k][j] <dist[i][j])
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
     }


      for(i=0;i<G->V;i++)
      {
        for(j=0;j<G->V;j++)
        {
            *(G->Adj+i*G->V+j)=dist[i][j];
        }
      }
}

void print(struct Graph *G)
{
    int i,j;

    for(i=0;i<G->V;i++)
    {
        for(j=0;j<G->V;j++)
        {
            if(*(G->Adj+i*G->V+j)==INF)
            {
                printf("%7s","INF");
            }
            else
            {
                printf("%7d",*(G->Adj+i*G->V+j));
            }
        }
        printf("\n");
    }
}

int main()
{
    struct Graph *G;
    int i,j,k,l,m,n;
    printf("Enter the number of vertex and edges respectively :\n");
    scanf("%d %d",&k,&l);
    int matrix[k][k];
    printf("Enter original distance matrix :\n");
    for(m=0;m<k;m++)
    {
        for(n=0;n<k;n++)
        {
            scanf("%d",&matrix[m][n]);
        }
    }

    G=(struct Graph*)malloc(sizeof(struct Graph));
    G->V=k;
    G->E=l;
    G->Adj=malloc((G->V)*(G->V) * sizeof(int));

    for(i=0;i<G->V;i++)
    {
        for(j=0;j<G->V;j++)
        {
            *(G->Adj+i*G->V+j)=matrix[i][j];
        }
    }

    printf("Original Distance.\n");
    print(G);
    warshall(G);
    printf("shortest path matrix using warshall algorithm.\n");
    print(G);
}
