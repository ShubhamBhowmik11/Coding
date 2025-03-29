for(int i=2;i<=length;i++)Seive[i] = i;


      for(int i=2;i*i<=length;i++){
            if(Seive[i] >= i)
        for(int j=i*i;i<=length;j++){
                   if(j%i == 0){
                      Seive[j] = i;  
                   }
        }
      }
      for(int i=2;i<=length;i++)
      cout<<Seive[i]<<endl;