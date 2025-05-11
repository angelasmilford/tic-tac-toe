#include <iostream>
using namespace std;

int main(){
    cout << "What Pacific Islander are you?";
    
    string islander;
    cin >> islander;
    
    //Pacific greetings
    if(islander == "Palauan"){
        cout << "Alii! \n";
    }else if(islander == "Fijian"){
        cout << "Bula vinaka! \n";
    }else if(islander == "Samoan" || islander == "American Samoan"){
        cout << "Talofa lava!";
    }else if(islander == "Nauruan"){
        cout << "Ekamowir omo!";
    }else if(islander == "Ni-Vanuatu" || islander == "Vanuatuan"){
        cout << "Halo!";
    }else if(islander == "Cook Islander"){
        cout << "Kia orana!";
    }else if(islander == "I-Kiribati"){
        cout << "Mauri!";
    }else if(islander == "New Caledonian"){
        cout << "Bwëcu!";
    }else if(islander == "Hawaiian"){
        cout << "Aloha!";
    }else if(islander == "Guamanian"){
        cout << "Håfa adai!";
    }else if(islander == "Solomon Islander" || islander == "Solomonese"){
        cout << "Halo olaketa!";
    }else if(islander == "Tongan"){
        cout << "Malo e lelei!";
    }else if(islander == "Marshallese"){
        cout << "Iakwe!";
    }else if(islander == "Papua New Guinean" || islander == "Papuan"){
        cout << "Hai!";
    }else if(islander == "Tahitian" || islander == "French Polynesian"){
        cout << "Ia ora na!";
    }else if(islander == "Chuukese"){
        cout << "Ran annim!";
    }else if(islander == "Tokelauan"){
        cout << "Malo ni!";
    }else if(islander == "Tuvaluan"){
        cout << "Talofa!";
    }else if (islander == "Niuean"){
        cout << "Fakaalofa lahi atu";
    }else if(islander == "Wallisian" || islander == "Futunan"){
        cout << "Malo te ma\'uli!";
    }else if(islander == "Rapa Nuiean"){
        cout << "Iorana!";
    }else if(islander == "Pohnpeian"){
        cout << "Kaselehlie!";
    }else if(islander == "Yapese"){
        cout << "Ma!";
    }else if(islander == "Kosraean"){
        cout << "Len wo!";
    }else if(islander == "Maori"){
        cout << "Kia ora!";
    }else if(islander == ""){
        cout << "!";
    }
    else{
        cout << "Tell the truth. Where are you from?";
    }

    string actualRace;
    cin >> actualRace;

    cout << "That's awesome to hear!";
}