int flag=0;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(second[i] == first[j]) flag=1;
        }
        printf("%d ", flag);
        flag=0;
    }