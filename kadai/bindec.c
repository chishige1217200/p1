main(){
  int i,j,k,l,p=0;
  printf("2進数\t10進数\n");
  for(i=0;i<2;i++)
    for(j=0;j<2;j++)
      for(k=0;k<2;k++)
	for(l=0;l<2;l++){
	  printf("%d%d%d%d\t%d\n",i,j,k,l,p++);
	}
}
