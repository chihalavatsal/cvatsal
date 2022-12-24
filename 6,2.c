#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
char pass[20],i;
int up,low,digit,quot;
do
{
up=0;low=0;digit=0;
printf(&quot;\n Enter your password:&quot);
scanf(&quot;%s&quot;,pass);
for (i=0; i&lt;=20;i++)
{
if(islower(pass[i]))o
{

low=1;
}
else if(isupper(pass[i]))
{
up=1;
}
else if(isdigit(pass[i]))
{
digit=1;
}
}
if(low==1&amp;&amp;up==1&amp;&amp;digit==1)

{
printf(&quot;valid password&quot;);
}
else
{
printf(&quot;invalid password&quot;);
}
}while(low==0||up==0||digit==0);
printf(&quot;\nsharik chauhan&quot;);
return 0;
}
