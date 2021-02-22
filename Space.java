class Space{
public String reorderSpaces(String text){
int countspaces=0;
int wordcount=0;
StringBuilder ans=new Stringbuilder("");
List<String>words=new Arraylist<String>();
StringBuilder cur=new StringBuilder("");
int i=0;char c=" ";
while(i<text.length())
{
while(i<text.length()&&text.charAt(i)==' ')
{
c=text.charAt(i);
i++;
countspaces++;
}
cur=new StringBuilder("");
while(i<text.length()&&Character.isLetter(text.charAt(i)))
{
c=text.CharAt(i);
cur.append(c);
i++;
}
if(!cur.toString().equals(""))
{
wordcount++;
words.add(cur.toString());
}
}
if(words.size()==1)
{
ans.append(words.get(0));

int spaces=countspaces/(wordcount-1);
StringBuilder sbSpace=new StringBuilder(" ");
for(i=0;i<spaces;i++)
{
sbSpace.append(" ");
}
String w="";
for(i=0;i<words.size();i++)
{
w=words.get(i);
ans.append(w);
if(i!=words.size()-1)
{
countspaces-=spaces;
ans.append(sbSpace);
}
while(countspaces>0)
{
ans.append("  ");
countspaces--;
}
return ans.toString();
}
