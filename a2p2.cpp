#include <iostream>
using namespace std;

int a1[12],
    a2[12],
    a3[12];
char einStr[]    = "Enter integer #";
char moStr[]     = "Max of ";
char ieStr[]     = " ints entered...";
char emiStr[]    = "Enter more ints? (n or N = no, others = yes) ";
char begA1Str[]  = "beginning a1: ";
char nn09A1Str[] = "a1 (noneg09): ";
char procA1Str[] = "processed a1: ";
char procA2Str[] = "          a2: ";
char procA3Str[] = "          a3: ";
char dacStr[]    = "Do another case? (n or N = no, others = yes) ";
char dlStr[]     = "================================";
char byeStr[]    = "bye...";

int main()
{
               char reply;
               int used1,
                   used2,
                   used3,
                   target,
                   intHolder,
                   count,
                   iter,
                   *hopPtr1,
                   *hopPtr11,
                   *hopPtr2,
                   *hopPtr3,
                   *endPtr1,
                   *endPtr2,
                   *endPtr3;

               reply = 'y';
               goto WTest1;
               // while (reply != 'n' && reply != 'N')
begW1://       {
                  used1 = 0;
                  hopPtr1 = a1;
                  goto WTest2;
                  // while (reply != 'n' && reply != 'N')
begW2://          {
                     cout << einStr;
                     cout << (used1 + 1);
                     cout << ':' << ' ';
                     cin >> *hopPtr1;
                     ++used1;
                     ++hopPtr1;
                     // if (used1 < 12)
                     if(used1 >= 12) goto else1;
begI1://             {
                        cout << emiStr;
                        cin >> reply;
                        goto endI1;
                     //  }
else1://             else
                     // {
                        cout << moStr << 12 << ieStr << endl;
                        reply = 'n';
                     // }
endI1://
;
endW2://           }
WTest2:     //(reply != 'n' && reply != 'N')
            //if(reply != 'n' && reply != 'N') goto begW1;
            if(reply == 'n') goto xitW2;
            if(reply != 'N') goto begW2;
xitW2:    

                  cout << begA1Str;
                  // if (used1 > 0)
                  if(used1 <= 0)goto endI2;
begI2://          {
                     hopPtr1 = a1;
                     endPtr1 = a1 + used1;
                     do
                     {
                        cout << *hopPtr1 << ' ' << ' ';
                        ++hopPtr1;
                     }
                     while (hopPtr1 < endPtr1);
endI2://          }
                  cout << endl;

                  // if (used1 > 0)
                  if (used1 <= 0)goto endI3;
begI3://          {
                     for (hopPtr1 = a1, endPtr1 = a1 + used1;  // multi-init
                                           hopPtr1 < endPtr1;  // test
                                                    ++hopPtr1) // update
                     {
                        target = *hopPtr1;
                        // if (target < 0 || target > 9)
                        if(target < 0)goto begI4;
                        if(target <= 9)goto endI4; 
begI4://                {
                           for (hopPtr11 = hopPtr1 + 1;  // multi-init
                                    hopPtr11 < endPtr1;  // test
                                             ++hopPtr11) // update
                           {
                              *(hopPtr11 - 1) = *hopPtr11;
                           }
                           --used1;
                           --endPtr1;
                           --hopPtr1;
endI4://                }
;
                     }

                     cout << nn09A1Str;
                     // if (used1 > 0)
                     if(used1 <= 0)goto endI5;
begI5://             {
                        hopPtr1 = a1;
                        endPtr1 = a1 + used1;
                        do
                        {
                           cout << *hopPtr1 << ' ' << ' ';
                           ++hopPtr1;
                        }
                        while (hopPtr1 < endPtr1);
endI5://             }
                     cout << endl;

                     used2 = 0;
                     used3 = 0;
                     hopPtr1 = a1;
                     hopPtr2 = a2;
                     hopPtr3 = a3;
                     endPtr1 = a1 + used1;
                     while (hopPtr1 < endPtr1)
                     {
                        intHolder = *hopPtr1;
                        *hopPtr2 = intHolder;
                        ++used2;
                        ++hopPtr2;
                        *hopPtr3 = intHolder;
                        ++used3;
                        ++hopPtr3;
                        ++hopPtr1;
                     }

                     iter = 0;
                     do
                     {
                        ++iter;
                        count = 0;
                        // if (iter == 1)
                        if (iter != 1)goto else6;
begI6://                {
                           for (hopPtr1 = a1, endPtr1 = a1 + used1;  // multi-init
                                                 hopPtr1 < endPtr1;  // test
                                                          ++hopPtr1) // update
                           {
                              target = *hopPtr1;
                              //if (target != 5)
                              if (target == 5)goto else7;
begI7://                      {
                                 ++count;
                              goto endI7;
                           // }
else7://                     else
                           // {
                                 // if (count != 0)
                                 if (count == 0)goto endI8;
begI8://                         {
                                    *(hopPtr1 - count) = *hopPtr1;
endI8://                         }
;
endI7://                      }
;
                           }
                           used1 -= count;
                           // if (used1 == 0)
                           if (used1 != 0)goto endI9;
begI9://                   {
                              hopPtr1 = a1;
                              *hopPtr1 = -99;
                              ++used1;
endI9://                   }
                        goto endI6;
                     // }
else6://             else
                     // {
                           // if (iter == 2)
                           if (iter != 2)goto else10;
begI10://                  {
                              for (hopPtr2 = a2, endPtr2 = a2 + used2;  // multi-init
                                                    hopPtr2 < endPtr2;  // test
                                                             ++hopPtr2) // update
                              {
                                 target = *hopPtr2;
                                 // if (target > 4)
                                 if (target <= 4)goto else11;
begI11://                        {
                                    ++count;
                                 goto endI11;
                              // }
else11://                        else
                              // {
                                    // if (count != 0)
                                    if (count == 0)goto endI12;
begI12://                           {
                                       *(hopPtr2 - count) = *hopPtr2;
endI12://                           }
;
endI11://                        }
;
                              }
                              used2 -= count;
                              // if (used2 == 0)
                              if (used2 != 0)goto endI13;
begI13://                     {
                                 hopPtr2 = a2;
                                 *hopPtr2 = -99;
                                 ++used2;
endI13://                     }
;
                             goto endI10;
                        // }
else10://                  else
                        // {
                              for (hopPtr3 = a3, endPtr3 = a3 + used3;  // multi-init
                                                    hopPtr3 < endPtr3;  // test
                                                             ++hopPtr3) // update
                              {
                                 target = *hopPtr3;
                                 if (target < 6)
                                 {
                                    ++count;
                                 }
                                 else
                                 {
                                    if (count != 0)
                                    {
                                       *(hopPtr3 - count) = *hopPtr3;
                                    }
                                 }
                              }
                              used3 -= count;
                              if (used3 == 0)
                              {
                                 hopPtr3 = a3;
                                 *hopPtr3 = -99;
                                 ++used3;
                              }
endI10://                  }
;
endI6://                }
;
                     }
                     while (iter < 3);
endI3://          }

                  cout << procA1Str;
                  if (used1 > 0)
                  {
                     hopPtr1 = a1;
                     endPtr1 = a1 + used1;
                     do
                     {
                        cout << *hopPtr1 << ' ' << ' ';
                        ++hopPtr1;
                     }
                     while (hopPtr1 < endPtr1);
                  }
                  cout << endl;

                  cout << procA2Str;
                  if (used2 > 0)
                  {
                     hopPtr2 = a2;
                     endPtr2 = a2 + used2;
                     do
                     {
                        cout << *hopPtr2 << ' ' << ' ';
                        ++hopPtr2;
                     }
                     while (hopPtr2 < endPtr2);
                  }
                  cout << endl;

                  cout << procA3Str;
                  if (used3 > 0)
                  {
                     hopPtr3 = a3;
                     endPtr3 = a3 + used3;
                     do
                     {
                        cout << *hopPtr3 << ' ' << ' ';
                        ++hopPtr3;
                     }
                     while (hopPtr3 < endPtr3);
                  }
                  cout << endl;

                  cout << dacStr;
                  cin >> reply;
endW1://       }
WTest1:     //(reply != 'n' && reply != 'N')
            //if(reply != 'n' && reply != 'N') goto begW1;
            if(reply == 'n') goto xitW1;
            if(reply != 'N') goto begW1;
xitW1:     
               cout << dlStr << '\n';
               cout << byeStr << '\n';
               cout << dlStr << '\n';

               return 0;
}
