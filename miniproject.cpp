#include <iostream>
#include <windows.h>
//#include <stdio.h>
#include <string.h>
#include <ctime> 
using namespace std;
    char password[100];
    char ch[100],p[100];
    char var[100] ;
    int choice=0;
void askquestions(string name){
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning "<<name<<endl;
        string phrase = "Good Morning "+name;
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon "<<name<<endl;
        string phrase = "Good Afternoon "+name;
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    
    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening "<<name<<endl;
        string phrase = "Good Evening "+name;
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    gets(p);
    //cout<<endl<<"How can i help you ...."<<endl;
    string phrase = "How can i help you"+name;
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    do{
        cout<<"\n<==================================================================>\n\n";
        cout<<endl<<"How can i help you ...."<<endl;
        gets(ch);
        if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 || strcmp(ch,"hii")==0 || strcmp(ch,"hlo")==0 ){
            cout<<"Hello ....."<<name<<endl;
            string phrase = "Hello "+ name;
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
            cout<<"Good Bye"<<name<<"have a nice day!!!!"<<endl;
            string phrase = "Good Bye "+name+ "have a nice day";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            return;
        }
        else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup?") == 0 || strcmp(ch, "how is your day?") == 0 ){
            cout<<"I'm good"<<name<< "tell me how can i help you.."<<endl;
            string phrase = "I'm good "+name+"tell me how can i help you";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if(strcmp(ch, "what is your name") == 0 || strcmp(ch, "your name?") == 0 || strcmp(ch, "name?") == 0 || strcmp(ch, "who are you?") == 0 || strcmp(ch, "tell me about yourself?") == 0 || strcmp(ch, "about?") == 0 ){
            cout<<"I'm a virtual assisstant created by my master codekashish!!!! "<<endl;
            string phrase = "I am a virtual assistant created by my master codekashish ";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if(strcmp(ch, "what is your age") == 0 || strcmp(ch, "your age?") == 0 || strcmp(ch,"age?")==0){
            cout<<"i m 1 year old what about yours"<<name<<endl;
            string phrase = "i m 1 year old what about yours"+name;
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if(strcmp(ch, "i am 19 years old") == 0 || strcmp(ch, "i am 19") == 0 || strcmp(ch, "I am 19 years old") == 0 || strcmp(ch,"19 years")==0 ){
            cout<<"oh great.."<<name<<endl;
            string phrase = "oh great"+name;
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else{
            cout<<"Sorry could not understand your query please ty again !!!"<<endl;
            string phrase = "Sorry could not understand your query please ty again ";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            cout<<"\n<==================================================================>\n\n";
            return;
        }
    }
    while(1);
}
void submitfee(){
    cout<<"opening erp......"<<endl;
    string phrase = "opening erp";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    system("start https://student.gehu.ac.in/Web_StudentFinance/Cyborg_StudentOnlineFeeSubmission?id=Fee%20Submission");
}
void opennssprofile(){
    cout<<"\n<==================================================================>\n\n";
    cout<<"opening ......"<<endl;
    string phrase = "opening nss profile";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    system("start https://www.instagram.com/nss_gehu?utm_source=ig_web_button_share_sheet&igsh=ZDNlZDc0MzIxNw==");
    cout<<"\n<==================================================================>\n\n";
}
void openyoutube(){
    cout<<"\n<==================================================================>\n\n";
    cout<<endl<<"openining YouTube  for graphic era information and videos  ....."<<endl;
    string phrase = "opening you tube";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    system("start https://www.youtube.com/results?search_query=graphic+era+university+dehradun");
    cout<<"\n<==================================================================>\n\n";
}
void location(){
    cout<<"\n<==================================================================>\n\n";
    cout<<"enter the campus name of which you want to know loaction"<<endl;
    gets(p);
    gets(ch);
    if(strcmp(ch, "bhimtal") == 0 ){
    system(" start https://www.google.com/maps/place/Graphic+Era+Hill+University+-+Bhimtal+Campus/@29.3754353,79.5283142,17z/data=!3m1!4b1!4m6!3m5!1s0x39a0987622d2a7f3:0x8a1cf97c55e9e156!8m2!3d29.3754307!4d79.5308891!16s%2Fg%2F119vbxvyj?entry=ttu");
    }
    else if(strcmp(ch, "dehradun") == 0 ){
        system(" start https://www.google.com/maps/place/Graphic+Era+Hill+University/@30.2723779,77.9984286,17z/data=!3m1!4b1!4m6!3m5!1s0x39092bca3fc0ccf3:0xd19900de8c24dbee!8m2!3d30.2723733!4d78.0010035!16s%2Fm%2F0120xj_3?entry=ttu");
    }
     else if(strcmp(ch, "haldwani") == 0 ){
        system(" start https://www.google.com/maps/place/Graphic+Era+Hill+University,+Haldwani+Campus/@29.1246997,79.5169733,17z/data=!3m1!4b1!4m6!3m5!1s0x39a0854e46fbbcbb:0xe8ad2dca724e9699!8m2!3d29.124695!4d79.5195482!16s%2Fg%2F11jq306sbj?entry=ttu");
    }
    else{
        cout<<"invalid campus"<<endl;
    }
    cout<<"\n<==================================================================>\n\n";
}
void website(){
    cout<<"\n<==================================================================>\n\n";
     cout<<"enter the campus name of which you want to open erp"<<endl;
    gets(p);
    gets(ch);
    if(strcmp(ch, "haldwani") == 0 ){
    cout<<endl<<"opening haldwani website"<<endl;
    system("start https://haldwani.gehu.ac.in");
    }
    else if(strcmp(ch, "dehradun") == 0 ){
        cout<<endl<<"opening dehradun website"<<endl;
        system("start https://student.gehu.ac.in/Account/Login");
    }
    else if(strcmp(ch, "bhimtal") == 0 ){
        cout<<endl<<"opening bhimtal website"<<endl;
        system("start https://bhimtal.gehu.ac.in");
    }
    else{
        cout<<"invalid campus"<<endl;
    }
    cout<<"\n<==================================================================>\n\n";
}
void bookhostel(){
    cout<<"opening...."<<endl;
    string phrase = "opening hostel page";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    system("start https://student.gehu.ac.in/HTM/Cyborg_HTM_Student_ViewHostelGallery?id=Book%20Hostel%20Roomk");

}
int main(){
    string name;
    cout<<"\t\t\t<============ W E L C O M E =============>"<<endl;
    cout<<"\t\t\t<============ I'M A VIRTUAL ASSISTANT ========>"<<endl;
    cout<<"\t\t\t<========= MY NAME IS KASHISH ===============>"<<endl;
    cout<<"\t\t\t<============ I'M HERE TO HELP YOU ============>"<<endl<<endl;
    cout<<"can i know your name?"<<endl;
    cin>>name;
    do
    {   gets(p);
        cout<<"ENTER YOUR PASSWORD"<<endl;
        gets(password);
         if(strcmp(password, "kashish")==0){
        cout<<"\n<=============================================================>\n\n";
        cout<<"correct password"<<endl;
        do{
            cout<<"1:ask simple questions to ai"<<endl<<"2:to submit fee"<<endl<<"3:to open nss profile"<<endl<<"4:open youtube"<<endl<<"5:location of university"<<endl<<"6:open offical webiste of university"<<endl<<"7:book hostel"<<endl;
            cout<<"\n<==================================================================>\n\n";
            cout<<endl<<"enter your choice"<<endl;
            cin >> choice ;
            switch(choice){
            case 1:
                askquestions(name);
                break;
            case 2:
                submitfee();
                break;
            case 3:
                opennssprofile();
                break;
            case 4:
                openyoutube();
                break;
            case 5:
                location();
                break;
            case 6:
                website();
                break;
            case 7:
                bookhostel();
                break;
            default:
                printf("invalid choice");
                exit(0);
            }
        }
        while(1);
        }
        else{
            system("cls");
            cout << "\t\t\t<===========W E L C O M E==========>" << endl;
            cout << "\t\t\t<======== I'M VIRTUAL ASSISTANT =========>" << endl;
            cout << "\t\t\t<========MY NAME IS kashish ===========>" << endl;
            cout << "\t\t\t<======== I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY =======>" << endl;
            cout << "Incorrect Password " << endl;
        }
    } 
    while (1);
}