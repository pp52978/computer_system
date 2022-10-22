#include<stdio.h>
#include<math.h>
int main(){
    int len;
    int N;
    char y;
    scanf("%d %d%c",&len,&N,&y);
    
    char aa[40];
    int bb[40]={0};
    for(int i=0;i<=len-1;i++)
    {
       
        scanf("%c",&aa[i]);
       
      }
       for(int i=0;i<=len-1;i++)
    {  if(aa[i]=='A'){bb[i]=10;}
      else if(aa[i]=='B'){bb[i]=11;}
      else if(aa[i]=='C'){bb[i]=12;}
      else if(aa[i]=='D'){bb[i]=13;}
      else if(aa[i]=='E'){bb[i]=14;}
      else if(aa[i]=='F'){bb[i]=15;}
      else if(aa[i]=='0'){bb[i]=0;}
      else if(aa[i]=='1'){bb[i]=1;}
      else if(aa[i]=='2'){bb[i]=2;}
      else if(aa[i]=='3'){bb[i]=3;}
      else if(aa[i]=='4'){bb[i]=4;}
      else if(aa[i]=='5'){bb[i]=5;}
      else if(aa[i]=='6'){bb[i]=6;}
      else if(aa[i]=='7'){bb[i]=7;}
      else if(aa[i]=='8'){bb[i]=8;}
      else if(aa[i]=='9'){bb[i]=9;}
      }
     
    for(int i=0;i<=len-1;i++)
    {
        if(0<=bb[i]&&bb[i]<=N-1){bb[i]=bb[i]*pow(N,len-1-i);}
        else{bb[35]+=1;}
    } 
    for (int i=1;i<=len-1;i++){
        {bb[i]=bb[i]+bb[i-1];}
        
    } 
    if(bb[35]!=0){printf("Error");}
    
    else{printf("%d",bb[len-1]);}
    return 0;
}
