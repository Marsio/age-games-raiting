//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream>
 #include "windows.h"
 #include <string>
#include <conio.h>
using namespace std;
 typedef BOOL (WINAPI *SETCONSOLEFONT)(HANDLE, DWORD);     // �������� ������������������ �������
 SETCONSOLEFONT SetConsoleFont;
//---------------------------------------------------------------------------
int main ()
{
     setlocale( LC_ALL,"Russian" );




  HMODULE hmod = GetModuleHandleA("KERNEL32.DLL");     // ������� �����
  SetConsoleFont =(SETCONSOLEFONT) GetProcAddress(hmod, "SetConsoleFont");   // ����� �� �����
  if (!SetConsoleFont) {cout<<"error\n" ; exit(1);}   //   ���� ������
  SetConsoleFont(GetStdHandle(STD_OUTPUT_HANDLE), 6);  // ������������� 6-� �����..
  SetConsoleCP(1251);            // ������������� ��������� �����
  SetConsoleOutputCP(1251) ;  // ������������� ��������� ������


char l[1];// ������ ,���� ������������ ������� ������
//������ ������ //
  cout << "������ � 1 \n";
cout << "� ���� ���������� ���������� ����������������� ���������?\n";
cout << "Y/N\n" ;
cin >> l[1];
if(l[1]=='Y')
  {cout << "���������� ���������:18+\n";cout << "\n" ;system ("pause"); return 0;}
//����� ������� �������//
else {  //������ ������ //
            if (system("clear")) system( "cls" );  //������� �������
            cout << "������ � 2\n";
       cout << "� ���� ���������� ����������,����������� ����� � ���������� ��������, �������������� ������ �� ����� � (���) ��������, � ��� ����� � ���������� ����� ������ ��������, ������������?\n";
        cout << "Y/N\n" ;
        cin >> l[1];
        if(l[1]=='Y')
                {cout << "���������� ���������:18+\n"; cout << "\n" ;system ("pause");return 0;  }
         //����� ������� �������//
        else{
        //������ ������ //
                    if (system("clear")) system( "cls" );  //������� �������
                    cout << "������ � 3\n";
                cout << "� ���� ���������� �� ��������������� �������� � ����� � �� ������� ��������������� ��������� ����������� ��� �������� ������� ��������� ����� �������� � ��������, �� ����������� ����������� ��� �������� �������� ������������ ���������?\n";
                cout << "Y/N\n" ;
                cin >> l[1];
                if(l[1]=='Y')
                {cout << "���������� ���������:16+\n"; cout << "\n" ;system ("pause");return 0;  }
         //����� �������� �������//

                 else{
                 //4 ������ //
                            if (system("clear")) system( "cls" );  //������� �������
                            cout << "������ � 4\n";
                        cout << "� ���� ���������� ��������� ������� ����� � (���) ���������, �� ����������� � ����������� �����?\n";
                        cout << "Y/N\n" ;
                        cin >> l[1];
                        if(l[1]=='Y')
                        {cout << "���������� ���������:16+\n"; cout << "\n" ;system ("pause");return 0;  }
                //����� 4 �������//
                         else{
                         //5 ������ //
                                    if (system("clear")) system( "cls" );  //������� �������
                                    cout << "������ � 5\n";
                                 cout << "� ���� ���������� ��������� ������� ����� � (���) ���������, �� ����������� � ����������� �����?\n";
                                 cout << "Y/N\n" ;
                                 cin >> l[1];
                                 if(l[1]=='Y')
                                 {cout << "���������� ���������:12+\n"; cout << "\n" ;system ("pause");return 0;  }
                        //����� 5 �������//
                                  else
                                  //6 ������ //
                                            if (system("clear")) system( "cls" );  //������� �������
                                            cout << "������ � 6\n";
                                        cout << "� ���� ���������� �� ��������������� �������� � ����� � �� ������� ������������� ��� ��������������� ��������� ������������� ������������������� ����������� ��� �������� ������� ��������� ����� �������� � ��������, �� ����������� ����������� ��� �������� �������� ������������ ���������?\n";
                                        cout << "Y/N\n" ;
                                        cin >> l[1];
                                        if(l[1]=='Y')
                                         {cout << "���������� ���������:12+\n"; cout << "\n" ;system ("pause");return 0;  }
                                //����� 6 �������//
                                         else{
                                         //7 ������ //
                                                    if (system("clear")) system( "cls" );  //������� �������
                                                    cout << "������ � 7\n";
                                                cout << "� ���� ���������� ������������������� ����������� ��� �������� ����������� ������, ������, ���������� ���� ���������������� ������ ��� ������������ �� �����������, ������� ����� �������� � ����� �����, ���� ��� ������?\n";
                                                cout << "Y/N\n" ;
                                                cin >> l[1];
                                                if(l[1]=='Y')
                                                {cout << "���������� ���������:6+\n"; cout << "\n" ;system ("pause");return 0;  }
                                         //����� 7 �������//
                                                 else{
                                                       //8 ������ //
                                                             if (system("clear")) system( "cls" );  //������� �������
                                                             cout << "������ � 8\n";
                                                         cout << "� ���� ���������� �� ����������� � ���������� ���������������� �������� � (���) ������������ ������������� ����������� ��� �������� ���� �������� � (���) ������������ ��� �������, ��� �� �������������� � �� ������������� �� ������������ � ���������� �������������, ���������� ��������� � �����, �� �����������?\n";
                                                         cout << "Y/N\n" ;
                                                         cin >> l[1];
                                                         if(l[1]=='Y')
                                                         {cout << "���������� ���������:6+\n"; cout << "\n" ;system ("pause");return 0;  }
                                                        //����� 8 �������//

                                                 else{     if (system("clear")) system( "cls" );  //������� �������
                                                 cout << "������ ����� ���� ���� ����� ���������� ����������� 0+ \n";
                                                 cout << "� �������������� ��������� ��� �����, �� ��������� �������� ����� ���, ����� ���� �������� �������������� ���������, ���������� ����������, �� ����������� ����� �������� � (���) �������� ����� (� ��� ����� �������������� ���������, ���������� ����������� � ������ � (���) ������� ������������� ������������������� ����������� ��� �������� ����������� � (���) ������������ ������� (�� ����������� ������������ �������) ��� ������� ��������� ����� ��� ���� � ��������� ����������� � ������ ������� � (���) ��������� �������).\n";
                                                     }
                                                     }


                                              }

                             }

                     }

            }
     }


cout << "\n" ;      //�������
system ("pause");  // ������� �����,��� �� ������� �� ����������� ����� ����� ��������� ���������
return 0;

}
//---------------------------------------------------------------------------
