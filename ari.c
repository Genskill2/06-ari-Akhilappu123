char* ari(char* s) {
int c=0;int w=0; int p=0;
for (int i=0;i<strlen(s);i++) {
   if(isalnum(s[i]))
   c++;
   }
for(int i=0;i<strlen(s);i++) {
   if(s[i]==' ')
   w++;
   }
for(int i=0;i<strlen(s);i++) {
   if(s[i]=='.' || s[i]=='?' || s[i]=='!') 
   p++;
   }  
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
