#include <iostream>
using namespace std;

int main(){

    string heroName = "Vincent Valentine";
    string heroLevel = "Ferro";
    int heroExperience = 0;
    int experienceToAdd;
    bool continueLoop = true;
    string userResponse = "s";

    while (continueLoop)
    {
        cout << "Digite a experiencia a ser adicionada ao heroi:\n ";
        cin >> experienceToAdd;
        heroExperience += experienceToAdd;
        cout << heroName << " agora tem " << heroExperience << " pontos de experiencia.\n";
        cout << "Deseja adicionar mais experiencia?[s/n] ";
        cin >> userResponse;
        if (userResponse == "s" || userResponse == "S"){
            continue;
        } else if (userResponse == "n" || userResponse == "N"){
           continueLoop = false; 
        } else {
            cout << "Opçao invalida, continuando loop...\n";
        }        
    }

    if (heroExperience < 1000){
        heroLevel = "Ferro";
    } else if (heroExperience >= 1001 && heroExperience < 2000) {
        heroLevel = "Bronze";
    } else if (heroExperience >= 2001 && heroExperience < 5000) {
        heroLevel = "Prata";
    } else if (heroExperience >= 5001 && heroExperience < 7000) {
        heroLevel = "Ouro";
    } else if (heroExperience >= 7001 && heroExperience < 8000) {
        heroLevel = "Platina";
    } else if (heroExperience >= 8001 && heroExperience < 9000) {
        heroLevel = "Ascendente";
    } else if (heroExperience >= 9001 && heroExperience < 10000) {
        heroLevel = "Imortal";
    } else if (heroExperience >= 10001) {
        heroLevel = "Radiante";
    }

    cout << "\nO heroi de nome " << heroName << " esta no nivel de " << heroLevel << "!!";

    return 0;
}