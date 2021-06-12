#include <iostream>
#include <stdlib.h>
#include <list>
#include <cstddef>
#include <string>

using namespace std;

//SZYMON MICHOŃ
//TOMASZ PĘCZEK

class Pracownik {
public:
    string imie;
    string nazwisko;
    string nr_telefonu;
    int kod_pracownika;
public:
    void wypisz_pracownika() {
        cout << "-----------------------------------" << endl;
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Numer telefonu: " << nr_telefonu << endl;
        cout << "Kod pracownika: " << kod_pracownika << endl;
    }
};

class Klient {
public:
    string imie;
    string nazwisko;
    string nr_telefonu;
    int numer_rezerwacji;
public:
    void wypisanie_Klienta() {
        cout << "------------------------------------------------------" << endl;
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Numer telefonu: " << nr_telefonu << endl;
        cout << "Numer rezerwacji: " << numer_rezerwacji << endl;

    }
    void utworz_klienta(string imie, string nazwisko, string nr_telefonu, int numer_rezerwacji) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->nr_telefonu = nr_telefonu;
        this->numer_rezerwacji = numer_rezerwacji;
    }
    bool czy_klient_istnieje(int numer) {
        if (numer_rezerwacji == numer) {
            return true;
        }
        else {
            return false;
        }
    }
};

class Kierownik {
public:
    string imie;
    string nazwisko;
    string nr_telefonu;
    int kod_kierownika;
public:
    void utworz_kierownika(string imie, string nazwisko, string nr_telefonu, int kod_kierownika) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->nr_telefonu = nr_telefonu;
        this->kod_kierownika = kod_kierownika;
    }
};

bool Logowanie(int kod_pracownika) {
    if (kod_pracownika == 1234) {
        cout << "Kod poprawny" << endl;
        return true;
    }
    else {
        cout << "Kod niepoprawny" << endl;
        return false;
    }
}

bool Logowanie_kierownika(int kod_kierownika) {
    if (kod_kierownika == 997) {
        cout << "Kod poprawny" << endl;
        return true;
    }
    else {
        cout << "Kod niepoprawny" << endl;
        return false;
    }
}

class Część {
public:
    string nazwa;
    string opis;
    int cena;
    int numer_zamowienia;
public:
    void wypisz_czesc() {
        cout << "------------------------------------------------------" << endl;
        cout << "Nazwa: " << nazwa << endl;
        cout << "Opis: " << opis << endl;
        cout << "Cena: " << cena << endl;
        cout << "Numer zamówienia: " << numer_zamowienia << endl;
    }
    void dodaj_czesc(string nazwaczesci, string opisczesci, int cenaczesci, int numer_zamowienia) {
        this->nazwa = nazwaczesci;
        this->opis = opisczesci;
        this->cena = cenaczesci;
        this->numer_zamowienia = numer_zamowienia;

    }
    void dodaj_czesc_osobno(string nazwaczesci, string opisczesci, int cenaczesci) {
        this->nazwa = nazwaczesci;
        this->opis = opisczesci;
        this->cena = cenaczesci;


    }
    void dodaj_do_zamowienia(int numer_zamowieniaczesci) {
        numer_zamowienia = numer_zamowieniaczesci;
    }
};

class Usługa {
public:
    string data_oddania_auta;
    string opis_prac;
    bool czy_przysługuje_zamienne;
    bool czy_gotowe;
    string rodzaj_usługi;
    int numer_uslugi;
public:
    int zwroc_numer_uslugi() {
        return numer_uslugi;
    }
    bool zwroc_czy_przysluguje_zamienne() {
        return czy_przysługuje_zamienne;
    }
    void dodaj_opis_do_uslugi(string opisik) {
        opis_prac = opisik;
    }
    void zmien_gotowosc() {
        czy_gotowe = true;
    }
    void wypisz_usluge() {
        cout << "------------------------------------------------------" << endl;
        cout << "Data oddania auta: " << data_oddania_auta << endl;
        cout << "Opis prac: " << opis_prac << endl;
        cout << "Czy przysługuje zamienne: " << czy_przysługuje_zamienne << endl;
        cout << "Czy gotowe: ";
        if (czy_gotowe == true) {
            cout << "TAK" << endl;
        }
        else {
            cout << "NIE" << endl;
        }
        
        cout << "Rodzaj usługi: " << rodzaj_usługi << endl;
        cout << "Numer usługi: " << numer_uslugi << endl;
    }

    void dodaj_opis(string dodawany_opis) {
        opis_prac = opis_prac + dodawany_opis;
    }
    void zmien_status_gotowosci(bool deklarowana_gotowosc) {
        czy_gotowe = deklarowana_gotowosc;
    }

};

class Pojazd_zamienny {
public:
    string marka;
    string model;
    string nr_rejestracyjny;
    int rocznik;
    string nr_vin;
    string ostatni_przeglad;
    bool czy_wolny;
    string data_od;
    string data_do;
    int przebieg_początkowy;
    int przebieg_zwrócony;
    int id_klienta;
    string opis;
    int cena_za_dobe;
public:
    int zwroc_id_klienta() {
        return id_klienta;
    }
    void zajmij_auto(int przebieg, string data){
        przebieg_początkowy = przebieg;
        data_od = data;
        czy_wolny = false;
    }
    void zwrot_auto(int przebieg, string data) {
        przebieg_zwrócony = przebieg;
        data_do = data;
        czy_wolny = true;
    }
    int ile_przejechano(int przebieg_początkowy, int przebieg_zwrócony) {
        return przebieg_zwrócony - przebieg_początkowy;
    }
    void wypisz_pojazd_zamienny() {
        cout << "------------------------------------------------------" << endl;
        cout << "Marka tego auta zastępczego to: " << marka << endl;
        cout << "Model tego auta zastępczego to: " << model << endl;
        cout << "Numer rejestracyjny tego auta zastępczego to: " << nr_rejestracyjny << endl;
        cout << "Rocznik tego auta zastępczego to: " << rocznik << endl;
        cout << "Nr vin tego auta zastępczego to: " << nr_vin << endl;
        cout << "Ostatni przegląd tego auta zastępczego to: " << ostatni_przeglad << endl;
        cout << "Czy auto jest wolne: " << czy_wolny << endl;
        cout << "Wypożyczony od: " << data_od << endl;
        cout << "Wypożyczony do: " << data_do << endl;
        cout << "Przebieg początkowy tego auta zastępczego to: " << przebieg_początkowy << endl;
        cout << "Przebieg zwrócony tego auta zastępczego to: " << przebieg_zwrócony << endl;
        cout << " tego auta zastępczego to: " << id_klienta << endl;
        cout << "Opis tego auta zastępczego to: " << opis << endl;
        cout << "Cena za dobę tego auta zastępczego to: " << cena_za_dobe << endl;
    }

};

class Pojazd_klienta {
public:
    string marka;
    string model;
    string nr_rejestracyjny;
    int rocznik;
    string nr_vin;
    string ostatni_przeglad;
    int id_klienta;
public:
    void wypiszPojazdKlienta(){
        cout << "-------------------------------------------------" << endl;
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Numer rejestracyjny: " << nr_rejestracyjny << endl;
        cout << "Rocznik: " << rocznik << endl;
        cout << "Numer VIN: " << nr_vin << endl;
        cout << "Ostatni przegląd: " << ostatni_przeglad;
        cout << "Id klienta: " << id_klienta << endl;
    }
};


list <Klient*> lista;
list <Pojazd_zamienny*> pojazdZamiennyLista;
list <Pojazd_klienta*> pojazKlientaLista;
list <Usługa*> usługaLista;
list <Część*> czescLista;
list <Pracownik*> listaPracownikow;


void utworz_klienta(string imionko, string nazwisko, string num, int numme) {
    Klient* temp = new Klient{ imionko,nazwisko,num,numme };
    lista.push_back(temp);
}
void wypisanie_klientow() {
    for (list<Klient*>::iterator i = lista.begin(); i != lista.end(); i++) {
        (*i)->wypisanie_Klienta();
    }
}

void utworz_czesc(string nazwa, string opis, int cena, int numer_zamowienia) {
    Część* temp = new Część{ nazwa, opis,cena, numer_zamowienia };
    czescLista.push_back(temp);
}
void wypisanie_czesci() {
    for (list<Część*>::iterator i = czescLista.begin(); i != czescLista.end(); i++) {
        (*i)->wypisz_czesc();
    }
}

void utworz_usluge(string data_oddania_auta, string opis_prac, bool czy_przysługuje_zamienne, bool czy_gotowe, string rodzaj_usługi, int numer_uslugi) {
    Usługa* temp = new Usługa{ data_oddania_auta,  opis_prac,  czy_przysługuje_zamienne,  czy_gotowe,  rodzaj_usługi,  numer_uslugi };
    usługaLista.push_back(temp);
}
void wypisanie_uslug() {
    for (list<Usługa*>::iterator i = usługaLista.begin(); i != usługaLista.end(); i++) {
        (*i)->wypisz_usluge();
    }
}
bool znajdz_usluge(int podawanynumer) {
    int var = 0;
    for (list<Usługa*>::iterator i = usługaLista.begin(); i != usługaLista.end(); i++) {
        int zmienna = (*i)->zwroc_numer_uslugi();
        if (zmienna == podawanynumer) {
            cout << "Witaj! Poprawnie znaleziono usługę " << podawanynumer << endl;
            var = var + 1;
            return true;
        }
    }
    if (var == 0) {
        cout << "Nie znaleziono takiej usługi" << endl;
        return false;
    }
}
void dodaj_opis_do_uslugi(int podawanynumer, string opis) {
    int var = 0;
    for (list<Usługa*>::iterator i = usługaLista.begin(); i != usługaLista.end(); i++) {
        int zmienna = (*i)->zwroc_numer_uslugi();
        if (zmienna == podawanynumer) {
            (*i)->dodaj_opis_do_uslugi(opis);
        }
    }
    if (var == 0) {
        cout << "Nie znaleziono takiej usługi" << endl;
        
    }
}
void zmien_gotowosc(int podawanynumer) {
    int var = 0;
    for (list<Usługa*>::iterator i = usługaLista.begin(); i != usługaLista.end(); i++) {
        int zmienna = (*i)->zwroc_numer_uslugi();
        if (zmienna == podawanynumer) {
            (*i)->zmien_gotowosc();
            var = var + 1;
        }
    }
    if (var == 0) {
        cout << "Nie znaleziono takiej usługi" << endl;

    }
}

void utworz_pojazd_zamienny( string marka, string model, string nr_rejestracyjny, int rocznik, string nr_vin, string ostatni_przeglad, bool czy_wolny, string data_od, string data_do, int przebieg_początkowy, int przebieg_zwrócony, int id_klienta, string opis, int cena_za_dobe) {
    Pojazd_zamienny* temp = new Pojazd_zamienny{ marka, model, nr_rejestracyjny, rocznik, nr_vin, ostatni_przeglad, czy_wolny, data_od, data_do, przebieg_początkowy, przebieg_zwrócony, id_klienta, opis, cena_za_dobe };
    pojazdZamiennyLista.push_back(temp);
}
void wypisanie_pojazdow_zamiennych() {
    for (list<Pojazd_zamienny*>::iterator i = pojazdZamiennyLista.begin(); i != pojazdZamiennyLista.end(); i++) {
        (*i)->wypisz_pojazd_zamienny();
    }
}
<<<<<<< Updated upstream
bool czy_przysluguje_zamienne(int podawanynumer) {
    int var = 0;
    for (list<Usługa*>::iterator i = usługaLista.begin(); i != usługaLista.end(); i++) {
        int zmienna = (*i)->zwroc_numer_uslugi();
        if (zmienna == podawanynumer) {
            bool czy = (*i)->zwroc_czy_przysluguje_zamienne();
            if (czy == true) {
                return true;
            }
            else {
                return false;
            }
            var = var + 1;
        }
    }
    if (var == 0) {
        cout << "Nie znaleziono takiej usługi" << endl;
        return false;
    }
}
=======

>>>>>>> Stashed changes
void wypozycz(int podawanynumer, string data, int przebieg) {
    int var = 0;
    for (list<Pojazd_zamienny*>::iterator i = pojazdZamiennyLista.begin(); i != pojazdZamiennyLista.end(); i++) {
        int zmienna = (*i)->zwroc_id_klienta();
        if (zmienna == podawanynumer) {
            (*i)->zajmij_auto(przebieg,data);
            var = var + 1;
        }
    }
    if (var == 0) {
        cout << "Nie znaleziono takiej usługi" << endl;

    }
}
void zwroc(int podawanynumer, string data, int przebieg) {
    int var = 0;
    for (list<Pojazd_zamienny*>::iterator i = pojazdZamiennyLista.begin(); i != pojazdZamiennyLista.end(); i++) {
        int zmienna = (*i)->zwroc_id_klienta();
        if (zmienna == podawanynumer) {
            (*i)->zwrot_auto(przebieg, data);
            var = var + 1;
        }
    }
    if (var == 0) {
        cout << "Nie znaleziono takiej usługi" << endl;

    }
}

void utworz_pojazd_klienta(string marka, string model, string nr_rejestracyjny, int rocznik, string nr_vin, string ostatni_przeglad, int id_klienta) {
    Pojazd_klienta* temp = new Pojazd_klienta{ marka, model, nr_rejestracyjny, rocznik, nr_vin, ostatni_przeglad, id_klienta };
    pojazKlientaLista.push_back(temp);
}
void wypisanie_pojazdow_klientow() {
    for (list<Pojazd_klienta*>::iterator i = pojazKlientaLista.begin(); i != pojazKlientaLista.end(); i++) {
        (*i)->wypiszPojazdKlienta();
    }
}

<<<<<<< Updated upstream
void utworz_pracownika(string imie, string nazwisko, string numer_telefonu, int kod_pracownika) {
    Pracownik* temp = new Pracownik{ imie, nazwisko, numer_telefonu, kod_pracownika };
    listaPracownikow.push_back(temp);
}
=======

>>>>>>> Stashed changes
void wypisz_pracownikow() {
    for (list<Pracownik*>::iterator i = listaPracownikow.begin(); i != listaPracownikow.end(); i++) {
        (*i)->wypisz_pracownika();
    }
}

int cena_za_wypozyczenie(int zadobe, int ilosc_dni) {
    return zadobe * ilosc_dni;
}

<<<<<<< Updated upstream
void logowanie_klienta(int login) {
    //int vartosc = 0;
    //for (int i = 0; i < rozmiarTablicyKlientow; i++) {
    //    if (tablicaKlientow[i].numer_rezerwacji == login) {
    //        cout << "Witaj " << tablicaKlientow[i].imie << endl;
    //        vartosc = vartosc + 1;
    //    }
    //}
    //if (vartosc == 0) {
    //    cout << "Nie znaleziono takiego klienta" << endl;
    //}
}
=======

>>>>>>> Stashed changes


void dodaj_pojazd_zamienny() {
    cout << "Podaj kod kierownika: ";
    int kod;
    cin >> kod;
    bool wynik_logowania = Logowanie_kierownika(kod);
    if (wynik_logowania == true) {
        string marka;
        string model;
        string nr_rejestracyjny;
        int rocznik;
        string nr_vin;
        string ostatni_przeglad;
        bool czy_wolny = true;
        string data_od="";
        string data_do="";
        int przebieg_początkowy;
        int przebieg_zwrócony=0;
        int id_klienta=0;
        string opis;
        int cena_za_dobe;
        cout << "Podaj marke: ";
        cin >> marka;
        cout << "Podaj model: ";
        cin >> model;
        cout << "Podaj numer rejestracyjny: ";
        cin >> nr_rejestracyjny;
        cout << "Podaj rocznik: ";
        cin >> rocznik;
        cout << "Podaj numer vin: ";
        cin >> nr_vin;
        cout << "Podaj ostatni przeglad: ";
        cin >> ostatni_przeglad;
        cout << "Podaj przebieg: ";
        cin >> przebieg_początkowy;
        cout << "Podaj opis: ";
        cin >> opis;
        cout << "Podaj cena za dobe: ";
        cin >> cena_za_dobe;
        utworz_pojazd_zamienny(marka, model, nr_rejestracyjny, rocznik, nr_vin, ostatni_przeglad, czy_wolny, data_od, data_do, przebieg_początkowy, przebieg_zwrócony, id_klienta, opis, cena_za_dobe);
    }
    else {
        cout << "Podałeś nieprawidłowy kod" << endl;
        
    }
}

void prace_serwisowe() {
    cout << "Podaj kod autoryzacyjny: ";
    int kod;
    cin >> kod;
    bool wynik_logowania = Logowanie(kod);
    if (wynik_logowania == true) {
        cout << "Podaj numer zlecenia: ";
        int numer_zlecenia;
        cin >> numer_zlecenia;
        Usługa usługa = Usługa();
        bool czy_istnieje_usluga = znajdz_usluge(numer_zlecenia);
        if (czy_istnieje_usluga == true) {
            cout << "Rejestruje prace serwisowe do usługi: " + numer_zlecenia << endl;
            cout << "Czy zostały wykonane dodatkowe naprawy? [T/N]" << endl;
            string ask_naprawy;
            cin >> ask_naprawy;
            if (ask_naprawy == "T" || ask_naprawy == "t" || ask_naprawy == "tak" || ask_naprawy == "TAK") {
                cout << "Podaj opis wykonywanych prac: " << endl;
                string opis_prac_zlecenie;
                cin >> opis_prac_zlecenie;
                dodaj_opis_do_uslugi(numer_zlecenia, opis_prac_zlecenie);
                cout << "Opis został dodany do zlecenia" << endl;
            }
            else {
                cout << "Nie dodajemy nowych prac" << endl;
            }
            cout << "Czy auto jest już gotowe do odbioru przez klienta [T/N]" << endl;
            string ask_gotowe;
            cin >> ask_gotowe;
            if (ask_gotowe == "T" || ask_gotowe == "t" || ask_gotowe == "tak" || ask_gotowe == "TAK") {
                bool zmianagotowosci = true;
                zmien_gotowosc(numer_zlecenia);
                cout << "Auto gotowe, zadzwoń do klienta aby mógł je odebrać" << endl;

            }
            else {
                cout << "Auto nie zostanie zapisane jako gotowe, kończymy" << endl;
            }
        }
        else {
            cout << "Taka usługa nie istnieje, kończymy" << endl;
        }
    }
    else {
        cout << "Logowanie błędne" << endl;
    }
    wypisanie_uslug();
}

void zamowienie_czesci() {
    cout << "Podaj kod autoryzacyjny: ";
    int kod;
    cin >> kod;
    bool wynik_logowania = Logowanie(kod);


    if (wynik_logowania == true) {
        cout << "Dodawanie części" << endl;
        cout << "Podaj nazwę części: ";
        string nazwa;
        cin >> nazwa;
        cout << endl;
        cout << "Podaj opis części: " << endl;
        string opis;
        cin >> opis;
        cout << endl;
        cout << "Podaj cenę części" << endl;
        int cena;
        cin >> cena;
        cout << endl;
        cout << "Podaj numer zlecenia" << endl;
        int numer_zlecenia;
        cin >> numer_zlecenia;
        //dodaj_czesc(nazwa, opis, cena, numer_zlecenia);
        //wypisz_czesci();
    }
    else {
        cout << "Logowanie błędne " << endl;
    }
}

void wydanie_auta_zastepczego() {
    cout << "Podaj kod autoryzacyjny: ";
    int kod;
    cin >> kod;
    bool wynik_logowania = Logowanie(kod);
    if (wynik_logowania == true) {
        cout << "Podaj numer zamówienia: ";
        int numer_zamowienia_zastepcze;
        cin >> numer_zamowienia_zastepcze;

        bool czy_sie_nalezy  = czy_przysluguje_zamienne(numer_zamowienia_zastepcze);
        if (czy_sie_nalezy == true) {
            cout << "Auto zastępcze do tej usługi jest przypisane poprawnie" << endl;
            cout << "Wpisz przebieg początkowy: ";
            int przebieg_poczatkowy;
            cin >> przebieg_poczatkowy;
            cout << "Wpisz datę wydania auta: ";
            string data_wydania;
            cin >> data_wydania;
            wypozycz(numer_zamowienia_zastepcze,data_wydania,przebieg_poczatkowy);

        }
        else {
            cout << "Do takiego zamówienia nie ma przypisanego auta zastępczego!" << endl;
        }
    }
    else {
        cout << "Logowanie błędne" << endl;
    }
}

void zwrot_auta_zastepczego() {
    cout << "Podaj kod autoryzacyjny: ";
    int kod;
    cin >> kod;
    bool wynik_logowania = Logowanie(kod);
    if (wynik_logowania == true) {
        cout << "Podaj kod klienta: ";
        int kodklienta;
        cin >> kodklienta;
        cout << "Podaj date zwrotu: ";
        string data;
        cin >> data;
        cout << "Podaj zwrócony przebieg: ";
        int przebieg;
        cin >> przebieg;
        zwroc(kodklienta,data,przebieg);
        

    }
    else {
        cout << "Logowanie błędne!" << endl;
    }
}

void oddaj_do_serwisu() {
    cout << "WITAMY W NASZYM SERWISIE !!" << endl;
    cout << "Czy jesteś już naszym klientem? [T/N]: ";
    string isclientchoose;
    cin >> isclientchoose;
    if (isclientchoose == "T" || isclientchoose == "t" || isclientchoose == "tak" || isclientchoose == "TAK") {
        cout << "Podaj swój login: ";
        int clientlogin;
        cin >> clientlogin;
        utworz_klienta("Abdul", "Abduljewicz", "666666666", 1231);
        wypisanie_klientow();
        
    }
    else if (isclientchoose == "N" || isclientchoose == "n" || isclientchoose == "nie" || isclientchoose == "NIE") {
        cout << "Nie jesteś naszym klientem ale chętnie powitamy Cię w naszym gronie!" << endl;
    }
    else {
        cout << "Nie ma takiej możliwości :(" << endl;
    }

}

int menu_glowne() {


    cout << "" << endl;
    cout << " .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .-----------------. .----------------.  .----------------. " << endl;
    cout << "| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |" << endl;
    cout << "| | ____    ____ | || |  _________   | || |     ______   | || |  ____  ____  | || |      __      | || | ____  _____  | || |     _____    | || |  ___  ____   | |" << endl;
    cout << "| ||_   \\  /   _|| || | |_   ___  |  | || |   .' ___  |  | || | |_   ||   _| | || |     /  \\     | || ||_   \\|_   _| | || |    |_   _|   | || | |_  ||_  _|  | |" << endl;
    cout << "| |  |   \\/   |  | || |   | |_  \\_|  | || |  / .'   \\_|  | || |   | |__| |   | || |    / /\\ \\    | || |  |   \\ | |   | || |      | |     | || |   | |_/ /    | |" << endl;
    cout << "| |  | |\\  /| |  | || |   |  _|  _   | || |  | |         | || |   |  __  |   | || |   / ____ \\   | || |  | |\\ \\| |   | || |      | |     | || |   |  __'.    | |" << endl;
    cout << "| | _| |_\\/_| |_ | || |  _| |___/ |  | || |  \\ `.___.'\\  | || |  _| |  | |_  | || | _/ /    \\ \\_ | || | _| |_\\   |_  | || |     _| |_    | || |  _| |  \\ \\_  | |" << endl;
    cout << "| ||_____||_____|| || | |_________|  | || |   `._____.'  | || | |____||____| | || ||____|  |____|| || ||_____|\\____| | || |    |_____|   | || | |____||____| | |" << endl;
    cout << "| |              | || |              | || |              | || |              | || |              | || |              | || |              | || |              | |" << endl;
    cout << "| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |" << endl;
    cout << " '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' " << endl;
    cout << "" << endl;

    cout << "						 __      ____   _____ ___ ___ ___  ____  _____ _____   _____          " << endl;
    cout << "						 \\ \\    / /\\ \\ / / _ )_ _| __| _ \\|_  / |_   _| _ \\ \\ / / _ )  " << endl;
    cout << "						  \\ \\/\\/ /  \\ V /| _ \\| || _||   / / /    | | |   /\\ V /| _ \\  " << endl;
    cout << "						   \\_/\\_/    |_| |___/___|___|_|_\\/___|   |_| |_|_\\ |_| |___/     " << endl;
    cout << "						                                                                      " << endl;
    cout << endl;
    cout << "[1] JESTEM KLIENTEM" << endl;
    cout << "[2] JESTEM PRACOWNIKIEM" << endl;
    cout << "[3] JESTEM KIEROWNIKIEM" << endl;
    cout << "[4] CHCĘ JUŻ WYJŚĆ!" << endl;
    int mainmenuchoose;
    cout << "Podaj wybór: ";
    cin >> mainmenuchoose;
    return mainmenuchoose;

}

void tryb_pracownika() {
    cout << "                                                                                           " << endl;
    cout << "  _____ _____   _____   ___ ___    _   ___ _____      ___  _ ___ _  __   _                 " << endl;
    cout << " |_   _| _ \\ \\ / / _ ) | _ \\ _ \\  /_\\ / __/ _ \\ \\    / / \\| |_ _| |/ /  /_\\       " << endl;
    cout << "   | | |   /\\ V /| _ \\ |  _/   / / _ \\ (_| (_) \\ \\/\\/ /| .` || || ' <  / _ \\        " << endl;
    cout << "   |_| |_|_\\ |_| |___/ |_| |_|_\\/_/ \\_\\___\\___/ \\_/\\_/ |_|\\_|___|_|\\_\\/_/ \\_\\  " << endl;
    cout << "                                                                                           " << endl;
    //MENU PRACOWNIKA
    cout << "[1] Rejestrowanie prac serwisowych" << endl;
    cout << "[2] Zamówienie części" << endl;
    cout << "[3] Wydanie auta zastępczego" << endl;
    cout << "[4] Odbiór auta zastępczego" << endl;
    cout << "[5] Powrót do menu głównego" << endl;
    cout << endl;
    cout << "Twój wybór: ";
    int choose;
    cin >> choose;
    switch (choose) {
    case 1:
        cout << "Rejestrowanie prac serwisowych" << endl;
        prace_serwisowe();
        break;
    case 2:
        cout << "Zamówienie części" << endl;
        zamowienie_czesci();
        break;
    case 3:
        cout << "Wydanie auta zastępczego" << endl;
        wydanie_auta_zastepczego();
    case 4:
        cout << "Odbiór auta zastępczego" << endl;
        zwrot_auta_zastepczego();
        break;
    case 5:
        cout << "Powrót do menu głównego" << endl;
        system("cls");
        break;
    default:
        cout << "Nie ma takiej opcji! Kończymy" << endl;
    }
    //KONIEC MENU PRACOWNIKA
}

void tryb_kierownika() {

    cout << "                                                                              " << endl;
    cout << "  _____ _____   _____   _  _____ ___ ___  _____      ___  _ ___ _  __   _     " << endl;
    cout << " |_   _| _ \\ \\ / / _ ) | |/ /_ _| __| _ \\/ _ \\ \\    / / \\| |_ _| |/ /  /_\\    " << endl;
    cout << "   | | |   /\\ V /| _ \\ | ' < | || _||   / (_) \\ \\/\\/ /| .` || || ' <  / _ \\   " << endl;
    cout << "   |_| |_|_\\ |_| |___/ |_|\\_\\___|___|_|_\\\\___/ \\_/\\_/ |_|\\_|___|_|\\_\\/_/ \\_\\  " << endl;
    cout << "                                                                              " << endl;
    cout << "                                                                              " << endl;
    cout << "[1] Pokaż aktualnie prowadzone prace" << endl;
    cout << "[2] Pokaż wszystkich klientów " << endl;
    cout << "[3] Pokaż pojazdy zamienne " << endl;
    cout << "[4] Pokaż zamówione części" << endl;
    cout << "[5] Pokaż pracowników " << endl;
    cout << "[6] Dodaj pojazd zamienny" << endl;
    cout << "[7] Wróć do menu głównego " << endl;
    int wybor;
    cout << "Podaj wybor: ";
    cin >> wybor;
    switch (wybor) {
    case 1:
        wypisanie_uslug();
        break;
    case 2:
        wypisanie_klientow();
        break;
    case 3:
        wypisanie_pojazdow_zamiennych();
        break;
    case 4:
        wypisanie_czesci();
        break;
    case 5:
        wypisz_pracownikow();
        break;
    case 6:
        dodaj_pojazd_zamienny();
        break;
    case 7:
        system("cls");
        break;
    default:
        cout << "Nie ma takiej opcji" << endl;

    }

}

void tryb_klienta() {

    cout << "                                                           " << endl;
    cout << "  _____ _____   _____   _  ___    ___ ___ _  _ _____ _     " << endl;
    cout << " |_   _| _ \\ \\ / / _ ) | |/ / |  |_ _| __| \\| |_   _/_\\    " << endl;
    cout << "   | | |   /\\ V /| _ \\ | ' <| |__ | || _|| .` | | |/ _ \\   " << endl;
    cout << "   |_| |_|_\\ |_| |___/ |_|\\_\\____|___|___|_|\\_| |_/_/ \\_\\  " << endl;
    cout << "                                                           " << endl;
    cout << "                                                           " << endl;
    cout << "[1] Oddanie pojazdu do serwisu" << endl;
    cout << "[2] Sprawdzenie statusu" << endl;
    cout << "[3] Powrót do menu głównego" << endl;
    int clientmenuchoose;
    cout << "Wybierz: ";
    cin >> clientmenuchoose;
    switch (clientmenuchoose) {
    case 1:
        cout << "Wybrano oddanie pojazdu do serwisu" << endl;
        oddaj_do_serwisu();
        break;
    case 2:
        cout << "Sprawdźmy status Twojej naprawy" << endl;
        break;
    case 3:
        cout << "Powrót do menu głównego" << endl;
        system("cls");
        break;
    default:
        cout << "Nie ma takiej opcji! Kończymy" << endl;
    }
}




int main()
{
    setlocale(LC_CTYPE, "Polish"); //DODANIE POLSKICH ZNAKÓW DO KONSOLI

    //UTWORZENIE PRZYKŁADOWYCH OBIEKTÓW KLAS
   utworz_klienta("Jan", "Heisenberg", "666 555 444", 1111);
   utworz_klienta("Andrzej", "Kliencki", "555 344 123", 1232);

   utworz_usluge("2021-05-26", "Naprawa 1111", true, false, "naprawa", 1111);
   utworz_usluge("2021-05-26", "Naprawa 2222", true, false, "naprawa", 2222);

   utworz_pojazd_zamienny("Audi", "A6", "KRK1234", 2018, "AXDWCEWCWEIU324213", "2021-02-20", true, "", "", 0, 0, 0, "Piękny i dynamiczny", 250);
   utworz_pojazd_zamienny("BMW", "X6", "KR7JT6", 2016, "NDSLCBWCHEBLC", "2021-03-12", true, "", "", 0, 0, 0, "Przestronny rodzinny SUV", 250);
   utworz_pojazd_zamienny("Ford", "Mustang", "ST899T", 2020, "DN32U974DN4IU2R", "2020-01-19", true, "", "", 0, 0, 0, "Szybkie sportowe auto", 250);


    //MENU GŁÓWNE////
    int ilosc = 1;
    do {
        int mainmenuchoose = menu_glowne();
        switch (mainmenuchoose) {
        case 1:
            tryb_klienta();
            break;
        case 2:
            tryb_pracownika();
            break;
        case 3:
            tryb_kierownika();
            break;
        case 4:
            ilosc = 3;
            cout << "Kończymy program" << endl;
            break;
        default:
            cout << "Nie ma takiej opcji!!!" << endl;
            break;
        }
    } while (ilosc < 2);
}

