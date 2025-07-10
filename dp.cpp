int total=0;
if(penelty.size()!=score.size()){
    return-1;
}
for(int i=0;i<score.size();i++){
    int result=score[i]-penelty[i];
    if(result>0){
        total=total+result;
    }
    else{
        continue;
    }
}
return total