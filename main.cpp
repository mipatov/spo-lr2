#include <iostream>
#define WINVER 0x0502
#include <windows.h>
#include <sddl.h>
#include "module.h"


using namespace std;



int  main()
{
//    string InputName; // \\.\mailslot\test
//    cout << "Enter slot name: ";
//    cin>> InputName;
    string InputName="\\\\.\\mailslot\\test";
    LPCTSTR SlotName= InputName.c_str();
    HANDLE hSlot;
    bool isServer;


    bool cf = MakeSlot(SlotName, hSlot, isServer);
    if (!cf) return -1;


    cout << "Start session in "<< ((isServer) ? "Server" : "Client") << " mode"<< endl;
    string command;

    while(TRUE)
    {

        cout << "You can: "<<endl<<"\t[check] messeges"<<endl<<((isServer) ? "\t[read] messeges" : "\t[write] new messege") <<endl<<"\t[quit] prorgam"<<endl;
        cin>> command;

        if(command ==  "check")
        {
            CheckMsgs(hSlot);
        }
        else if(command == "quit")
        {
            return 0;
        }
        else if(command == "read")
        {
            cout<<"Im read"<<endl;
        }
        else if (command == "write")
        {
            cout<<"Im write"<<endl;
        }
        else
        {
            cout<<"wrong"<<endl;
        }
    }


//    if (!isServer)
//    {
//        WriteSlot(hSlot, TEXT("Message one for mailslot."));
//        WriteSlot(hSlot, TEXT("Message two for mailslot."));
//    }
//    else
//    {
//        cout<<"Reading . . ."<<endl;
//        while(TRUE)
//        {
//            ReadSlot(hSlot);
//            cin>>InputName;
//            if(InputName == "quit")break;
//        }
//    }







return 0;
}
