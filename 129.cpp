#include <iostream>
int main(){
    using namespace std; setlocale(0,"");
    char ru, en; int r,e,v;
    cout<<"[ + ] Переводчик"<< endl<<"[ 1 ] Русские слова"<<endl<<"[ 2 ] Английские слова"<<endl<<"[ 3 ] Выйти"<<endl;
    cout <<"Выберете язык: "; cin>>v;
    switch(v){
        {case 1: cout<<"Переводчик “Список русских слов”"<<endl;
            cout<<"[1] Коробка\n"<<"[2] Вода\n"<<"[3] Кукла\n"<<"[4] Стена\n"<<"[5] Квартира\n"<<"[6] Дождь\n"<<"[7] Блокнот\n"<<"[8] Золушка\n"<<"[9] Звезда\n"<<"[10] Небо\n"<<"[11] Очки\n"<<"[12] Часы\n"<<"[13] Бутылка\n"<<"[14] Глина\n"<<"[15] Одеяло\n";
            cout<<"Выберете слово: ";}cin>>r;
                switch(r){
                    case 1:cout<<"Коробка - Box"; break;
                    case 2:cout<<"Вода - Water"; break;
                    case 3:cout<<"Кукла - Doll"; break;
                    case 4:cout<<"Стена - Wall"; break;
                    case 5:cout<<"Квартира - Flat"; break;
                    case 6:cout<<"Дождь - Rain"; break;
                    case 7:cout<<"Блокнот - Notepad"; break;
                    case 8:cout<<"Золушка - Cinderella"; break;
                    case 9:cout<<"Звезда - Star"; break;
                    case 10:cout<<"Небо - Sky"; break;
                    case 11:cout<<"Очки - Glasses"; break;
                    case 12:cout<<"Часы - Watch"; break;
                    case 13:cout<<"Бутылка - Bottle"; break;
                    case 14:cout<<"Глина - Clay"; break;
                    case 15:cout<<"Одеяло - Blanket"; break;
                    default:cout<<"Такого слова нет!";
                }exit(0);
        {case 2: cout<<"Переводчик “Список английских слов”"<<endl;
            cout<<"[1] Box\n"<<"[2] Water\n"<<"[3] Doll\n"<<"[4] Well\n"<<"[5] Flat\n"<<"[6] Rain\n"<<"[7] Notepad\n"<<"[8] Cinderella\n"<<"[9] Star\n"<<"[10] Sky\n"<<"[11] Glasses\n"<<"[12] Watch\n"<<"[13] Bottle\n"<<"[14] Clay\n"<<"[15] Blanket\n";
            cout<<"Выберете слово: ";}cin>>e;
                switch(e){
                    case 1:cout<<"Box - Коробка"; break;
                    case 2:cout<<"Water - Вода"; break;
                    case 3:cout<<"Doll - Кукла"; break;
                    case 4:cout<<"Wall - Стена"; break;
                    case 5:cout<<"Flat - Квартира -"; break;
                    case 6:cout<<"Rain - Дождь"; break;
                    case 7:cout<<"Notepad - Блокнот"; break;
                    case 8:cout<<"Cinderella - Золушка"; break;
                    case 9:cout<<"Star - Звезда"; break;
                    case 10:cout<<"Sky - Небо"; break;
                    case 11:cout<<"Glasses - Очки"; break;
                    case 12:cout<<"Watch - Часы"; break;
                    case 13:cout<<"Bottle - Бутылка"; break;
                    case 14:cout<<"Clay - Глина"; break;
                    case 15:cout<<"Blanket - Одеяло"; break;
                    default:cout<<"Такого слова нет!";
                }exit(0);
        default:cout<<"Выход";
        }exit(0);
    int _; cin>> _;
    
}
