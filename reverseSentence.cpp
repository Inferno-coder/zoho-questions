int lastSpace(string temp,int end){
int ind=0;
for(int i=0;i<end;i++){
	if(temp[i]==' ')ind=i;
}
return ind;
} 

void reverseString(string temp,int start,int end){
if(start>=end)return;
int ind=lastSpace(temp,end);
cout<<temp.substr(ind,end-ind+1);
reverseString(temp,start,ind);	
}

void solve() {
//code here
string temp="Pradeep is a good programmer";
reverseString(temp,0,temp.length());
}
