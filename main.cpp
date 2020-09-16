#include <iostream>
#include <cstdlib>
#include <ctime>
         using namespace std;
// THIS IS SOOO MESSED UP I DON'T SEE HOW IT WORKS, BUT IT DOES.
main()
{
   
      const int ROWS = 3;
      const int COLUMS = 3;
      int history[9] = {0,0,0,0,0,0,0,0,0};
      int user;
      int tie = 0;
      int lastpick;
      // I want chach location on the board to hold 1 character so i used a Char
      char board[ROWS][COLUMS] = { {' ', ' ', ' '},
                                    {' ', ' ', ' '},
                                    {' ', ' ', ' '} };
     
      cout <<"Welcome to Tic-Tac-Toe\n";
      while(true)
      {
      cout <<"\nThe board is now.\n";
     
      //this board[#][#] = x was just for me testing the board.
    //  board[1][1] = 'x';
     // board[0][0] = 'X';
     // board[2][2] = 'X';
      for(int i = 0; i < ROWS; ++i)
              {
                  for(int j = 0; j < COLUMS; ++j)
                  cout << board[i][j];
                  cout <<endl;
              }
      cout << "Just type the number you want to place your 'X'\n" <<endl;
      //cout << "1 , 2 , 3\n4 , 5 , 6\n7 , 8 , 9\n";
     
      cout << "[1][2][3]\n";
      cout << "[4][5][6]\n";
      cout << "[7][8][9]\n";
     
     
      s:
      cin >> user;
      switch(user)
      {
                  case 1:
                       if(history[0] == 1)
                       {cout <<"It's already chosen\n";
                       goto s;
                                     }
                       board[0][0] = 'X';
                       history[0] = 1;
                       break;
                  case 2:
                       if(history[1] == 1)
                       {
                                     cout <<"It's already chosen.\n";
                                     goto s;
                                     }
                       board[0][1] = 'X';
                       history[1] = 1;
                       break;
                  case 3:
                                              if(history[2] == 1)
                       {cout <<"It's already chosen\n";
                       goto s;
                                     }
                       board[0][2] = 'X';
                       history[2] = 1;
                       break;
                  case 4:
                                              if(history[3] == 1)
                       {cout <<"It's already chosen\n";
                       goto s;
                                     }
                       board[1][0] = 'X';
                       history[3] = 1;
                       break;
                  case 5:
                                              if(history[4] == 1)
                       {cout <<"It's already chosen\n";
                       goto s;
                                     }
                       board[1][1] = 'X';
                       history[4] = 1;
                       break;
                  case 6:
                                              if(history[5] == 1)
                       {cout <<"It's already chosen\n";
                       goto s;
                                     }
                       board[1][2] = 'X';
                       history[5] = 1;
                       break;
                  case 7:
                                              if(history[6] == 1)
                       {cout <<"It's already chosen\n";
                       goto s;
                                     }
                       board[2][0] = 'X';
                       history[6] = 1;
                       break;
                  case 8:
                                              if(history[7] == 1)
                       {cout <<"It's already chosen\n";
                       goto s;
                                     }
                       board[2][1] = 'X';
                       history[7] = 1;
                       break;
                  case 9:
                                              if(history[8] == 1)
                       {cout <<"It's already chosen\n";
                       goto s;
                                     }
                       board[2][2] = 'X';
                       history[8] = 1;
                       break;
                  default:
                          cout << "Thats not an option\n";
                          }            
                         
                                if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
                                                  { cout << "\nYOU WIN!!!!\n";
                                                   break;}
     
      if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
                                              {cout <<"\nYOU WIN!!!!\n";
                                              break;}
     
            if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
                                              {cout <<"\nYOU WIN!!!!\n";
                                              break;}
                                             
         if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
                                              {cout <<"\nYOU WIN!!!!\n";
                                              break;}
                                             
               if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
                                              {cout <<"\nYOU WIN!!!!\n";
                                              break;}
                                             
                    if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
                                                  { cout << "\nYOU WIN!!!!\n";
                                                  break;}
                    if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
                                                  { cout << "\nYOU WIN!!!!\n";
                                                   break;}
                    if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
                                                  { cout << "\nYOU WIN!!!!\n";
                                                   break;}
                   
                         
                          tie += 2;
if(tie >= 9)
{
       cout << " \nIT'S A TIE GAME" <<endl;
       break;
}
                         
                         
                          //YES I know GOTO is poor programming but Hey I'm learning.
                         
                 
                          d:
                          srand(time(0));
                         int pcpick = (rand() % 9) + 1;
                        
                         if (pcpick == user)
                         goto d;
                             
                               switch(pcpick)
      {
                  case 1:
                       if(history[0] == 1)
                       goto d;
                      
                       board[0][0] = 'O';
                       history[0] = 1;
                       break;
                  case 2:
                       if(history[1] == 1)
                       goto d;
                      
                       board[0][1] = 'O';
                       history[1] = 1;
                       break;
                  case 3:
                       if(history[2] == 1)
                       goto d;
                                    
                       board[0][2] = 'O';
                       history[2] = 1;
                       break;
                  case 4:
                       if(history[3] == 1)
                       goto d;
                                    
                       board[1][0] = 'O';
                       history[3] = 1;
                       break;
                  case 5:
                       if(history[4] == 1)
                       goto d;
                                    
                       board[1][1] = 'O';
                       history[4] = 1;
                       break;
                  case 6:
                       if(history[5] == 1)
                       goto d;
                                    
                       board[1][2] = 'O';
                       history[5] = 1;
                       break;
                  case 7:
                       if(history[6] == 1)
                       goto d;
                                    
                       board[2][0] = 'O';
                       history[6] = 1;
                       break;
                  case 8:
                       if(history[7] == 1)
                       goto d;
                                    
                       board[2][1] = 'O';
                       history[7] = 1;
                       break;
                  case 9:
                       if(history[8] == 1)
                       goto d;
                                    
                       board[2][2] = 'O';
                       history[8] = 1;
                       break;
   
                 
      }// this is for switch   
   
                                   
                                   
// THE PC IF STAMTEMENTS
             if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
                                                  { cout << "\nYOU LOSE!!!!\n";
                                                   break;}
                   if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
                                                  { cout << "\nYOU LOSE!!!!\n";
                                                   break;}
                   if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
                                                  { cout << "\nYOU LOSE!!!!\n";
                                                   break;}
if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
                                                  { cout << "\nYOU LOSE!!!!\n";
                                                   break;}
if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
                                                  { cout << "\nYOU LOSE!!!!\n";
                                                   break;}
                    if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
                                                  { cout << "\nYOU LOSE!!!!\n";
                                                  break;}
                    if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
                                                  { cout << "\nYOU LOSE!!!!\n";
                                                   break;}
                    if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
                                                  { cout << "\nYOU LOSE!!!!\n";
                                                   break;}
// the last thing
                  } //this is the while loop }
     
     
     
      cin >> user;
}

// the board is only showing 1 row   FIXED
// The pc picks the same number over and over agin FIXED
// The pc over wright my X'es making them 'O'  FIXED
// It's hard to find a way to declare a winner FIXED
// After declaring a winng the game still gos on FIXED
//ITs seems like everything is falling into place except fot the TIE AkA Cats game. Added a TIE game . FIXED
