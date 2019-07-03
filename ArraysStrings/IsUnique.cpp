//Determine if string has all unique chars, dont use additional data structure


Bool isUnique( String s)
{
  for(int i = 0; i<s.length();i++)
  {
    for(int j = i; j<s.length();j++)
    {
      if(s[i]==s[j])
        return false;
    }
    
  }
  
  return true;
}
