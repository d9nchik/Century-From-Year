int centuryFromYear(int year) 
{
  int hundreds=(year-year%100)/100; //We counted hundreds
  int ones=year%100;                //we counted other years
  if(ones>0)                        //If ones isn`t equal 0 
return hundreds+1;                  //we return hundreds+1
else return hundreds;               //If not we return hundreds
}//P.S. https://github.com/d9nchik
