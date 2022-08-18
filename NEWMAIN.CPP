#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
class points
{   public:
    float point;
    int win, loose,draw;
};
char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9',j[10];
int k,m=0,n=0,l[10],q;
int enter();
int enter1();
int play()
{  clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t            ";
   cout<<a<<" "<<char(179)<<" "<<b<<" "<<char(179)<<" "<<c;
   cout<<"\n\t\t\t\t   -----------";
   cout<<"\n\t\t\t\t    "<<d<<" "<<char(179)<<" "<<e<<" "<<char(179)<<" "<<f;
   cout<<"\n\t\t\t\t   -----------";
   cout<<"\n\t\t\t\t    "<<g<<" "<<char(179)<<" "<<h<<" "<<char(179)<<" "<<i;
   return 0;
}

int main()
{ clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t   WELCOME TO TIC-TAC-TOE  (X-O)";
  cout<<"\n\n\t\t\t\t     2 PLAYERS";
  cout<<"\n\n\t\t\t\t    PRESS ENTER\n";
  getch();
  clrscr();
   char nm[20];points filehand;fstream fout;
     neworcont:clrscr();
    cout<<"1.NEW GAME\n2.CONTINUE\n3.EXIT\nENTER (1 OR 2 OR 3):";
    cin>>q;
    if(q==1)
    {
	cout<<"Enter your nickname/username...";
	gets(nm);
	strcat(nm,".BAT");
	fout.open(nm,ios::binary|ios::out);
    }
    else
	if(q==2)
    {
	cout<<"Enter your nickname/username that is already existing...";
	gets(nm);
	strcat(nm,".BAT");
	fout.open(nm,ios::binary|ios::nocreate|ios::in|ios::out);
	if(!fout)
	{
	    cout<<"YOUR ACCOUNT NOT FOUND, ENTER THE CORRECT USERNAME CORRECTLY OR START A NEW GAME";
	    getch();
	    goto neworcont;
	}
    }
    else if(q==3)
    exit(0);
    else
    {
	cout<<"WRONG INPUT ENTER AGAIN!!!";
	goto neworcont;
    }
  play();
  for(k=1;k<10&&n<1&&m<1;k++)
  { int z;

    if(k%2!=0)
    { cout<<"\nPLAYER 1: choose the box where you want to enter x\n\n\t\t\t\t\t";
enter:cin>>j[k];
       for(z=1;z<k;z++)
       { if(j[k]==j[z])
	{ cout<<"DON'T CHEAT, ENTER AGAIN\n\t\t\t\t\t";
	  goto enter;
	}
      }
      enter();
      if(a=='x'&&b=='x'&&c=='x'||d=='x'&&e=='x'&&f=='x'||g=='x'&&h=='x'&&i=='x'||a=='x'&&e=='x'&&i=='x'||c=='x'&&e=='x'&&g=='x'||a=='x'&&d=='x'&&g=='x'||b=='x'&&e=='x'&&h=='x'||c=='x'&&f=='x'&&i=='x')
      n=1;
    }
    else
    if(k%2==0)
    {
      if(k==2)
      { if(e!='x')
	{j[k]='5';
	}
	else
	j[k]='1';
      }
   else
   if(k==4)
{
    if(e=='x')
    {
	if(b=='x')
	    j[k]='8';
	else
	    if(h=='x')
		j[k]='2';
	    else
		if(c=='x')
		    j[k]='7';
		else
		    if(g=='x')
			j[k]='3';
		    else
			if(d=='x')
			    j[k]='6';
			else
			    if(f=='x')
				j[k]='4';
			    else
				if(i=='x')
				    j[k]='3';
    }
    else
    {
	if(a=='x'&&b=='x'||i=='x'&&f=='x')
	    j[k]='3';

	    if(a=='x'&&d=='x'||h=='x'&&i=='x')
		j[k]='7';

		if(d=='x'&&g=='x'||b=='x'&&c=='x')
		    j[k]='1';

		    if(c=='x'&&f=='x'||g=='x'&&h=='x')
			j[k]='9';

			if(a=='x')
			{
			    if(c=='x')
				j[k]='2';
			       else
				if(g=='x')
				    j[k]='4';
			}
							  //problem
			     if(i=='x')
			    {
				if(c=='x')
				    j[k]='6';
				else
				    if(g=='x')
					j[k]='8';
			    }

				if(f=='x')
				{
				    if(g=='x'||h=='x')
					j[k]='9';
				    else
					if(b=='x'||a=='x')
					    j[k]='3';
				}

				    if(d=='x')
				{
				    if(i=='x'||h=='x')
					j[k]='7';
				    else
				    if(b=='x'||c=='x')
					j[k]='1';
				}

				if(h=='x')
				{
				    if(c=='x')
				    j[k]='9';
				    else
				    if(a=='x')
				    j[k]='7';
				}

				    if(b=='x')
				{
				    if(g=='x')
					j[k]='1';
				    else
				     if(i=='x')
					 j[k]='3';
				}




				    if(a=='x'&&i=='x'||c=='x'&&g=='x')
				    j[k]='4';

				    if(b=='x'&&h=='x'||f=='x'&&d=='x')
				   j[k]='1';




    }
}
else
if(k==6)
 { if(e=='x')
   {       if(g=='x')
	   { if(b=='x')
	     j[k]='8';
	     else
	     j[k]='2';
	   }
	    if(c=='x')
	  { if(d=='x')
	    j[k]='6';
	    else
	    j[k]='4';
	   }

	   if(f=='x')
	   { if(g=='x')
	     j[k]='3';
	     else
	     j[k]='7';
	   }

	   if(h=='x')
	   { if(c=='x')
	     j[k]='7';
	     else
	     j[k]='3';
	   }

	   if(i=='x')
	   { if(b=='x')
	     j[k]='8';
	     else
	     j[k]='2';
	   }

	   if(b=='x'&&h=='o')
	   { if(c=='x')
	     j[k]='7';
	     else
	     if(d=='x')
	     j[k]='6';
	     else
	     if(f=='x')
	     j[k]='4';
	     else
	     if(g=='x')
	     j[k]='3';
	     else
	     if(i=='x')
	     j[k]='7';
	   }

	   if(d=='x'&&f=='o')
	   { if(b=='x')
	     j[k]='8';
	     else
	     if(c=='x')
	     j[k]='7';
	     else
	     if(g=='x')
	     j[k]='3';
	     else
	     if(h=='x')
	     j[k]='2';
	     else
	     if(i=='x')
	     j[k]='3';
	   }
   }
	else
	{ if(g=='o')
	  { if(c=='x')
	    { if(a=='x')
	      j[k]='2';
	      else
	      if(i=='x')
	      j[k]='6';
	    }
	    else
	    j[k]='3';
	  }

	  if(c=='o')
	  { if(g=='x')
	    { if(a=='x')
	      j[k]='4';
	      else
	      if(i=='x')
	      j[k]='8';
	    }
	    else
	    j[k]='7';
	  }

	  if(i=='o')
	  { if(a=='x')
	    { if(g=='x')
	      j[k]='4';
	      else
	      if(c=='x')
	      j[k]='2';
	    }
	    else
	    j[k]='1';
	  }

	  if(a=='o')
	  { if(i=='x')
	    { if(g=='x')
	      j[k]='8';
	      else
	      if(c=='x')
	      j[k]='6';
	    }
	    else
	    j[k]='9';
	  }


	   if(h=='o')
	   { if(b=='x')
	     j[k]='4';
	     else
	     j[k]='2';
	   }

	   if(d=='o')
	   { if(f=='x')
	     j[k]='2';
	     else
	     j[k]='6';
	   }

	   if(f=='o')
	   { if(d=='x')
	     j[k]='2';
	     else
	     j[k]='4';
	   }

       if(b=='o')
       {
	   if(h=='x')
	   j[k]='4';
	   else
	   j[k]='8';
       }

				 if(f=='x')
				 {
				    if(g=='x'&&i=='o')
				   {if(a=='x')
					j[k]='4';
				    else
				      j[k]='1';
				   }
				     else
				     if(h=='x')
				     {if(a=='x')
				      j[k]='3';
				      else
				      j[k]=1;
				     }
				     else
				     if(a=='x'&&c=='o')
				     {if(g=='x')
				      j[k]='4';
				      else
				      j[k]='7';
				     }
				     else
				     if(b=='x')
				     {
					 if(g=='x')
					  j[k]='9';
					 else
					  j[k]='7';
				     }
				}

				    if(d=='x')
				{
				    if(i=='x'&&g=='o')
				   {if(c=='x')
				       j[k]='6';
				     else
					j[k]='3';
				   }
				   else
				    if(h=='x')
				   {if(c=='x')
				     j[k]='1';
				     else
					j[k]='3';
				    }
				    else
				    if(c=='x'&&a=='o')
				   { if(i=='x')
				     j[k]='6';
				     else
				     j[k]='9';
				   }
				   else
				    if(b=='x'&&a=='o')
				   {if(i=='x')
				       j[k]='7';
				     else
				      j[k]='9';
				   }
				}

				if(h=='x')
				{
				    if(c=='x'&&i=='o')
				    {
					if(a=='x')
					    j[k]='2';
					else
					    j[k]='1';
				    }

				    else
				    if(a=='x'&&g=='o')
					{
					    if(c=='x')
						j[k]='2';
					    else
						j[k]='3';
					}
				}

				    if(b=='x')
				{
				    if(g=='x'&&a=='o')
				       {
					   if(i=='x')
					    j[k]='8';
					   else
					    j[k]='9';
				       }
				    else
				     if(i=='x'&&c=='o')
				       {
					   if(g=='x')
					    j[k]='8';
					   else
					    j[k]='7';
				       }
				}


					      if(a=='x'&&i=='x')
						{
						    if(f=='x')
							j[k]='3';
						    else
							j[k]='6';
						}

						if(c=='x'&&g=='x')
						{
						    if(f=='x')
							j[k]='9';
						    else
							j[k]='6';
						}


					     if(b=='x'&&h=='x')
					     {
						 if(i=='x')
						    j[k]='7';
						 else
						    j[k]='9';
					     }

					     if(f=='x'&&d=='x')
					     {
						 if(i=='x')
						    j[k]='3';
						 else
						    j[k]='9';
					     }




	}
}

else
    if(k==8)
{   if(e=='x')
    {
     if(c=='x'&&d=='x')
	  {
	     if(b=='x')
	    j[k]='8';
	 else
	    if(h=='x')
	    j[k]='2';
	 else
	    j[k]='8';

	   }                       //problem

	   if(g=='x'&&b=='x')
	   {
	       if(d=='x')
	    j[k]='6';
	   else
	    if(f=='x')
	    j[k]='4';
	   else
	    j[k]='4';
	   }

	   if(f=='x'&&g=='x')
	   { if(b=='x')
	     j[k]='8';
	     else
	     j[k]='2';
	   }

	   if(h=='x'&&c=='x'&&b=='o')
	   { if(d=='x')
	     j[k]='6';
	     else
	     j[k]='4';
	   }

	   if(i=='x'&&b=='x')
	   { if(d=='x')
	 j[k]='6';
	     else
	 if(f=='x')
	     j[k]='4';
	     else
	 j[k]='4';
	   }

	   if(b=='x'&&h=='o')
	   { if(c=='x')
	     {if(d=='x')
	  j[k]='6';
	      else
	  j[k]='4';
	     }

	      if(d=='x'&&f=='o')
	 {if(g=='x')
	 j[k]='3';
	 else
	 if(c=='x')
	 j[k]='7';
	 else
	 j[k]='3';
	 }

	      if(f=='x')
	{ if(g=='x')
	  j[k]='3';
	  else
	  j[k]='7';
	}

	      if(g=='x'&&c=='o')
	{ if(d=='x')
	  j[k]='6';
	      else
	  if(f=='x')
	  j[k]='4';
	  else
	  j[k]='4';
	}

	  if(i=='x')
	      { if(d=='x')
	    j[k]='6';
	    else
	    j[k]='4';
	      }

	   }

	   if(d=='x'&&f=='o')
	   { if(b=='x')
	{if(g=='x')
	 j[k]='3';
	 else
	 if(c=='x')
	 j[k]='7';
	 else
	 j[k]='3';
	}

	     if(c=='x'&&g=='o')
	{if(b=='x')
	 j[k]='8';
	 else
	 if(h=='x')
	 j[k]='2';
	 else
	 j[k]='8';
	}

	     if(g=='x'&&c=='o')     //
	{if(i=='x'||h=='x')
	 j[k]='2';
	 else
	 j[k]='8';
	}

	     if(h=='x'&&b=='o')
	{if(c=='x')
	 j[k]='7';
	 else
	 j[k]='3';
	}

	     if(i=='x'&&c=='o')
	     {if(b=='x')
	      j[k]='8';
	      else
	  j[k]='2';
	     }
	   }

   }

else
  {
    if(g=='o')
	  { if(c=='x')
	    { if(a=='x')
	      {
		  if(h=='x')
		j[k]='9';
	      else
		j[k]='8';
	      }
	      else
	      if(i=='x')
	      {
		  if(d=='x')
		j[k]='1';
	      else
		j[k]='4';
	      }
	    }

	  }

	  if(c=='o') //
	  { if(g=='x')
	    { if(a=='x')
	      {
		  if(f=='x')
		j[k]='9';
	      else
		j[k]='6';
	      }
	      else
	      if(i=='x')
	      {
		  if(b=='x')
		j[k]='1';
	      else
		j[k]='2';
	      }
	    }

	  }

	  if(i=='o')        //
	  { if(a=='x')
	    { if(g=='x')
	      {
		  if(f=='x')
		j[k]='3';
	      else
		j[k]='6';
	      }
	      else
	      if(c=='x')
	      {
		  if(h=='x')
		j[k]='7';
	      else
		j[k]='8';
	      }
	    }

	  }

	  if(a=='o')
	  { if(i=='x')
	    { if(g=='x')
	      {
		  if(b=='x')
		j[k]='3';
	      else
		j[k]='2';
	      }
	      else
	      if(c=='x')
	      {
		  if(d=='x')
		j[k]='7';
	      else
		j[k]='4';
	      }
	    }

	  }

	   if(h=='o')
	   { if(b=='x')
	    {
		if(f=='x')
		j[k]='3';
	    else
		j[k]='6';
	    }
	   }

	   if(d=='o'&&b=='o')
	   { if(f=='x')
	     {
		 if(h=='x')
		j[k]='9';
	     else
		j[k]='8';
	     }
	   }

	   if(f=='o')
	   { if(d=='x')
	     {
		 if(h=='x')
		j[k]='7';
	     else
		j[k]='8';
	     }
	   }

       if(b=='o'&&a=='x')
       {
	   if(h=='x')
	  {
	      if(f=='x')
		j[k]='9';
	      else
		j[k]='6';
	  }
       }

				 if(f=='x'&&(i=='o'||c=='o'))    //
				 {
				    if(g=='x'&&d=='o'&&i=='o')
				   {if(a=='x')
				    {   if(b=='x')
					    j[k]='3';
					else
					if(c=='x')
					     j[k]='2';
					else
					if(h=='x')
					    j[k]='3';
				    }
				   }
				     else
				     if(h=='x'&&i=='o')
				     {if(a=='x')
				      {
					  if(g=='x')
					    j[k]='4';
					  else
					    j[k]='7';
				      }
				     }
				     else
				     if(a=='x'&&c=='o'&&d=='o')
				     {if(g=='x')
				      {
					  if(i=='x')
					    j[k]='8';
					  else
					    if(h=='x')
					    j[k]='9';
					  else
					    if(b=='x')
					    j[k]='8';
				      }
				     }
				     else
				     if(b=='x'&&i=='o'&&c=='o')
				     {
					 if(g=='x')
					 {
					     if(a=='x')
						j[k]='4';
					     else
						j[k]='1';
					 }
				     }
				}

				    if(d=='x')
				{
				    if(i=='x'&&g=='o'&&f=='o')
				   {if(c=='x')
				    {
					if(a=='x')
					    j[k]='2';
					else
					    if(b=='x')
					    j[k]='1';
					else
					    if(h=='x')
					    j[k]='1';
				    }
				   }
				   else
				    if(h=='x'&&g=='o'&&f!='o')       //
				   {if(c=='x')
				     {
					 if(i=='x')
					    j[k]='6';
					 else
					    j[k]='9';
				     }
				    }
				    else
				    if(c=='x'&&a=='o'&&g!='o'&&f=='o')
				   { if(i=='x')
				     {
					 if(g=='x')
					    j[k]='8';
					 else
					    if(h=='x')
					    j[k]='7';
					 else
					    if(b=='x')
					    j[k]='7';
				     }
				   }
				   else
				    if(b=='x'&&g=='o')
				   {if(c=='x')
				       j[k]='6';
				     else
				      j[k]='3';
				   }
				}

				if(h=='x')
				{
				    if(c=='x'&&i=='o')
				    {
					if(a=='x')
					{
					    if(g=='x')
						j[k]='4';
					    else
						if(d=='x')
						j[k]='7';
					    else
						if(f=='x')
						j[k]='7';
					}
				    }

				    else
				    if(a=='x'&&g=='o')
					{
					    if(c=='x')
					    {
						if(f=='x')
						    j[k]='9';
						else
						    if(i=='x')
						    j[k]='6';
						else
						    if(d=='x')
						    j[k]='9';
					    }
					}
				}

				    if(b=='x')
				{
				    if(g=='x'&&a=='o')
				       {
					   if(i=='x')
					   {
					       if(c=='x')
						j[k]='6';
					       else
						if(f=='x')
						j[k]='3';
					       else
						if(d=='x')
						j[k]='3';
					   }
				       }
				    else
				     if(i=='x'&&c=='o')
				       {
					   if(g=='x')
					  {
					      if(a=='x')
						j[k]='4';
					      else
						if(d=='x')
						j[k]='1';
					      else
						if(f=='x')
						j[k]='1';
					  }
				       }
				}




					      if(a=='x'&&i=='x')
						{
						    if(f=='x')
						    {
							if(g=='x')
							    j[k]='8';
							else
							    j[k]='7';
						    }
						}

						if(c=='x'&&g=='x')
						{
						    if(f=='x')
						       {
							   if(a=='x')
							    j[k]='2';
							   else
							    j[k]='1';
						       }
						}


					     if(b=='x'&&h=='x')
					     {
						 if(i=='x')
						  {
						      if(c=='x')
							j[k]='4';
						      else
							j[k]='3';
						  }
					     }

					     if(f=='x'&&d=='x'&&c=='o')
					     {
						 if(i=='x')
						  {
						      if(g=='x')
							j[k]='2';
						      else
							j[k]='7';
						  }
					     }





  }

}






	enter1();
	if(a=='o'&&b=='o'&&c=='o'||d=='o'&&e=='o'&&f=='o'||g=='o'&&h=='o'&&i=='o'||a=='o'&&e=='o'&&i=='o'||c=='o'&&e=='o'&&g=='o'||a=='o'&&d=='o'&&g=='o'||b=='o'&&e=='o'&&h=='o'||c=='o'&&f=='o'&&i=='o')
	m=1;
      }
    }

{if(n==1)
{getch();
clrscr();
cout<<"CONGRATS !!! HURRAY !!! PLAYER 1 YOU WON  :)";
if(q==1)
{
    filehand.point=10.0;
    filehand.win=1;
    filehand.loose=0;
    filehand.draw=0;
    fout.write((char*)&filehand,sizeof(filehand));

}
else
{fout.read((char*)&filehand,sizeof(filehand));
 filehand.point+=10.0;
 filehand.win+=1;
 fout.write((char*)&filehand,sizeof(filehand));
}
}

else
if(m==1)
{getch();
clrscr();
cout<<"DEFEAT :(";
if(q==1)
{
    filehand.point=0.0;
    filehand.win=0;
    filehand.loose=1;
    fout.write((char*)&filehand,sizeof(filehand));

}
else
{fout.read((char*)&filehand,sizeof(filehand));
 filehand.loose+=1;
 fout.write((char*)&filehand,sizeof(filehand));
}

}

else
if(k>9)
{getch();
    clrscr();
 cout<<"SORRY IT IS A DRAW MATCH :(";
 if(q==1)
{
    filehand.point=5.0;
    filehand.win=0;
    filehand.loose=0;
    filehand.draw=1;
    fout.write((char*)&filehand,sizeof(filehand));

}
else
{fout.read((char*)&filehand,sizeof(filehand));
 filehand.point+=5.0;
 filehand.draw+=1;
 fout.write((char*)&filehand,sizeof(filehand));
}


}

}fout.close();
cout<<"\nYOUR POINTS:"<<filehand.point;
cout<<"\nYOUR NO.OF WINS:"<<filehand.win;
cout<<"\nYOUR NO.OF LOSSES:"<<filehand.loose;
getch();
return 0;
}

int enter()
{

  if(j[k]=='1')
   {a='x';
    play();
   }

  if(j[k]=='2')
   {b='x';
    play();
   }

  if(j[k]=='3')
   {c='x';
    play();
   }

  if(j[k]=='4')
   {d='x';
   play();
   }

   if(j[k]=='5')
   {e='x';
   play();
   }

   if(j[k]=='6')
   {f='x';
   play();
   }

   if(j[k]=='7')
   {g='x';
    play();
    }

    if(j[k]=='8')
   {h='x';
   play();
   }

   if(j[k]=='9')
   {i='x';
    play();
   }
    if(j[k]=='0')
 {exit(0);}
   return 0;

}

int enter1()
{
 if(j[k]=='1')
 { a='o';
   play();
 }

  if(j[k]=='2')
 { b='o';
   play();
 }

  if(j[k]=='3')
 { c='o';
   play();
 }

  if(j[k]=='4')
 { d='o';
   play();
 }

  if(j[k]=='5')
 { e='o';
   play();
 }

  if(j[k]=='6')
 { f='o';
   play();
 }

  if(j[k]=='7')
 { g='o';
   play();
 }

  if(j[k]=='8')
 { h='o';
   play();
 }

  if(j[k]=='9')
 { i='o';
   play();
 }

return 0;
}


