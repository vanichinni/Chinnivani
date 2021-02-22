class Replace{
public String findReplace(String S,int[] indexes,String[]sources,String[] targets){
int n=S.length();
int[] match=new int[n];

for(int i=0;i<indexes.length;i++)
{
if(S.substring(indexes[i],indexes[i]+sources[i].length()).equals(sources[i]))
{
match[indexes[i]]=i;
}
}
StringBuilder sb=new StringBuilder();
for(int i=0;i<n;)
{
if(match[i]!=-1)
{
sb.append(targets[match[i]]);
i +=sources[match[i]].length();
}else{
sb.append(S.charAt(i));
i++;
}
}
return sb.toString();
}
}