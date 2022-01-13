#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;


int main(){
   int t;
   int n;
   bool mode;

   Start:
   cout << "Enter number of repetitions: ";
   cin >> n;

   cout << "Enter time constant: ";
   cin >> t;

   cout << "Enter mode (0 for enter or 1 for mouse)";
   cin >> mode;

   cout << "Press"" End"" to begin" <<endl;

   if(mode){
        while(true){
            if(GetAsyncKeyState(VK_END)){

                cout << "Operation Cock And Balls is ago" << endl;
                Sleep(500);

            for(int i = n; i >= 0; i--){
                keybd_event(VK_LCONTROL, 0, KEYEVENTF_EXTENDEDKEY, 0);
                Sleep(t);
                keybd_event(0x56, 0, KEYEVENTF_EXTENDEDKEY, 0);
                Sleep(t);
                keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0);
                Sleep(t);
                keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYUP, 0);
                Sleep(t);
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                Sleep(t);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

                }
            }
        }
    }else{

        while(true){
                if(GetAsyncKeyState(VK_END)){

                    cout << "Operation Cock And Balls is ago" << endl;
                    Sleep(500);

                for(int i = n; i >= 0; i--){
                    keybd_event(VK_LCONTROL, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    Sleep(t);
                    keybd_event(0x56, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    Sleep(t);
                    keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0);
                    Sleep(t);
                    keybd_event(VK_LCONTROL, 0, KEYEVENTF_KEYUP, 0);
                    Sleep(t);
                    keybd_event(VK_RETURN, 0, KEYEVENTF_EXTENDEDKEY, 0);
                    Sleep(t);
                    keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
                    }
            }
        }
    }



    return 0;
}

