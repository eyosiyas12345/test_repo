#include<iostream>
#include<list>
using namespace std;

class youtube_channel{
public:
string channelsName;
int numberOfSubcribers;
string ownersName;
list<string>publishedVideos;

youtube_channel(string name, string owner){
    channelsName=name;
    ownersName=owner;
    numberOfSubcribers=0;
}

void GetInfo(){
cout<<"channelsName: "<<channelsName<<endl;
cout<<"ownersName: "<<ownersName<<endl;
cout<<"numberOfSubcribers: "<<numberOfSubcribers<<endl;
cout<<"videos: "<<endl;
for(string videos: publishedVideos){
    cout<<videos<<endl;
}
cout<<endl;
}
};

int main(){
youtube_channel ytchannel("I am christian","Josias");
youtube_channel ytchannel2("I am Muslim","Mohammed");
ytchannel.publishedVideos.push_back("what is Christianity");
ytchannel.publishedVideos.push_back("power of unity");
ytchannel.numberOfSubcribers=10;

ytchannel.GetInfo();
ytchannel2.GetInfo();

return 0;
}