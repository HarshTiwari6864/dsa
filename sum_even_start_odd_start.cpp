int count=0;
for(int i=0;i<arr.size();i++ ){|
    if(arr[i]%2==1){
        int sum =0;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            if(sum%2==0){
                count++;
            }
        }

    }
}
return count;