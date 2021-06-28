int count_characters(string s) {
 int ret=0;
 for (int i=0;i<strlen(s);i++) {
   if(isalnum(s[i]))
   ret++;
   }
   return ret;
   }
int count_words(string s) {
 int ret=0;
 for(int i=0;i<strlen(s);i++) {
 if(s[i]==' ')
 ret++;
 }
return ret+1; 
}
int count_sentences(string s) {
int ret=0;
for(int i=0;i<strlen(s);i++) {
 if(s[i]=='.' || s[i]=='?' || s[i]=='!') 
 ret++;
 }
 return ret; 
 }
string ari(string s) {
int c=count_characters(s);
int w=count_words(s);
int p=count_sentences(s);
float scr=4.71*c/w+.5*w/p-21.43;
float n=scr-(int)scr;
int score=(int)scr;
if (n!=0){
score++;}
switch(score) {
 case 1:
  return "Kindergarten";
  break;
  case 2:
  return "First/Second Grade";
  break;
  case 3:
  return "Third Grade";
  break;
  case 4:
  return "Fourth Grade";
  break;
  case 5:
  return "Fifth Grade";
  break;
  case 6:
  return "Sixth Grade";
  break;
  case 7:
  return "Seventh Grade";
  break;
  case 8:
  return "Eighth Grade";
  break;
  case 9:
  return "Ninth Grade";
  break;
  case 10:
  return "Tenth Grade";
  break;
  case 11:
  return "Eleventh Grade";
  break;
  case 12:
  return "Twelfth Grade";
  break;
  case 13:
  return "Collage Student";
  break;
  case 14:
  return "Professor";
  break;
  }
 } 
