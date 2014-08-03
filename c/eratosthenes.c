N=1000,n[1024],k;main(i) {for(;++i<=N;)if(!n[i]&&printf("%d ",i))for(k=i;(n[k]=k+=i)<=N;);}
