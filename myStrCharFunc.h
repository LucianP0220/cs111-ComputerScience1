//implement char toupper(char)
// toupper(‘a’) returns ‘A’
// toupper(‘A’) return ‘A’
char myToUpper(char letter)
{
  if(letter > 90)
  letter = letter - 32;
  else 
    letter = letter;

  return letter;

}
//implement int starlen(const char cstr[])
int myStrlen(const char cstr[] )
{
  int i;
  for(i = 0; cstr[i] != '\0'; i++)
    ;

  return i;
}
