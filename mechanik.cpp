#include <iostream>
#include <stdlib.h>
#include <list>
#include <cstddef>
#include <string>

using namespace std;

//SZYMON MICHOŃ

class Pracownik {
public:
    string imie;
    string nazwisko;
    string nr_telefonu;
    int kod_pracownika;
public:
    void utworz_pracownika(string imie, string nazwisko, string nr_telefonu, int kod_pracownika) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->nr_telefonu = nr_telefonu;
        this->kod_pracownika = kod_pracownika;
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

class Część {
public:
    string nazwa;
    string opis;
    int cena;
    int numer_zamowienia;
public:
    void wypisz_czesc() {
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
    void dodaj_opis_do_uslugi(string opisik) {
        opis_prac = opisik;
    }
    void zmien_gotowosc() {
        czy_gotowe = true;
    }
    void wypisz_usluge() {
        cout << "Data oddania auta: " << data_oddania_auta << endl;
        cout << "Opis prac: " << opis_prac << endl;
        cout << "Czy przysługuje zamienne: " << czy_przysługuje_zamienne << endl;
        cout << "Czy gotowe: " << czy_gotowe << endl;
        cout << "Rodzaj usługi: " << rodzaj_usługi << endl;
        cout << "Numer usługi: " << numer_uslugi << endl;
    }
    void rejestracja_uslugi(int numer_uslugi, string data_oddania_auta, string opis_prac, bool czy_przysluguje_zamienne, bool czy_gotowe, string rodzaj_uslugi) {
        this->data_oddania_auta = data_oddania_auta;
        this->opis_prac = opis_prac;
        this->czy_przysługuje_zamienne = czy_przysluguje_zamienne;
        this->czy_gotowe = czy_gotowe;
        this->rodzaj_usługi = rodzaj_uslugi;
        this->numer_uslugi = numer_uslugi;
    }
    bool znajdz_usluge(int numer_zlecenia) {
        if (numer_zlecenia == numer_uslugi) {
            return true;
        }
        else {
            return false;
        }
    }

    bool czy_przysluguje_zamienne(int numer_usl_zamiennej) {
        if (numer_usl_zamiennej == numer_uslugi && czy_przysługuje_zamienne == true) {
            return true;
        }
        else {
            return false;
        }
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
    void utworzPojazdZamienny(string marka, string model, string nr_rejestracyjny, int rocznik, string nr_vin, string ostatni_przeglad, bool czy_wolny, string data_od, string data_do, int przebieg_początkowy, int przebieg_zwrócony, int id_klienta, string opis, int cena_za_dobe) {

        this->marka = marka;
        this->model = model;
        this->nr_rejestracyjny = nr_rejestracyjny;
        this->rocznik = rocznik;
        this->nr_vin = nr_vin;
        this->ostatni_przeglad = ostatni_przeglad;
        this->czy_wolny = czy_wolny;
        this->data_od = data_od;
        this->data_do = data_do;
        this->przebieg_początkowy = przebieg_początkowy;
        this->przebieg_zwrócony = przebieg_zwrócony;
        this->id_klienta = id_klienta;
        this->opis = opis;
        this->cena_za_dobe = cena_za_dobe;
    }
    int ile_przejechano(int przebieg_początkowy, int przebieg_zwrócony) {
        return przebieg_zwrócony - przebieg_początkowy;
    }
    void wypisz_pojazd_zamienny() {
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
    bool wypozycz(int idklienta) {
        if (idklienta == id_klienta && czy_wolny == true) {
            czy_wolny = false;
            return true;
        }
        else {

            return false;
        }
    }
    bool oddaj(int idklienta) {
        if (idklienta == id_klienta && czy_wolny == false) {
            czy_wolny = true;
            return true;
        }
        else {

            return false;
        }
    }
    int cena_za_wypozyczenie() {

    }

};

class Pojazd_klienta {
    string marka;
    string model;
    string nr_rejestracyjny;
    int rocznik;
    string nr_vin;
    string ostatni_przeglad;
    int id_klienta;
public:
    void utworzPojazdKlienta(string marka, string model, string nr_rejestracyjny, int rocznik, string nr_vin, string ostatni_przeglad, int id_klienta) {

        this->marka = marka;
        this->model = model;
        this->nr_rejestracyjny = nr_rejestracyjny;
        this->rocznik = rocznik;
        this->nr_vin = nr_vin;
        this->ostatni_przeglad = ostatni_przeglad;
        this->id_klienta = id_klienta;
    }
};


list <Klient*> lista;
list <Pojazd_zamienny*> pojazdZamiennyLista;
list <Usługa*> usługaLista;
list <Część*> czescLista;

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
        Usługa usługa = Usługa();

        bool czy_sie_nalezy = usługa.czy_przysluguje_zamienne(numer_zamowienia_zastepcze);
        if (czy_sie_nalezy == true) {
            cout << "Auto zastępcze do tej usługi jest przypisane poprawnie" << endl;
            cout << "Wpisz przebieg początkowy: ";
            int przebieg_poczatkowy;
            cin >> przebieg_poczatkowy;
            cout << "Wpisz datę wydania auta: ";
            int data_wydania;
            cin >> data_wydania;
            Pojazd_zamienny zamiennik = Pojazd_zamienny();
            bool wypozyczenie = zamiennik.wypozycz(numer_zamowienia_zastepcze);

            if (wypozyczenie == true) {
                cout << "Auto zostało zaktualizowane jako wynajęte z przypisaną datą wydania auta" << endl;
                cout << "Wydaj kluczki klientowi" << endl;
            }
            else {
                cout << "Nie udało się wypożyczyć auta, może jest ono już wypożyczone?" << endl;
            }

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
        cout << "Podaj numer zamówienia: ";
        Pojazd_zamienny zamiennik = Pojazd_zamienny();
        cout << "Podaj kod klienta: ";
        int kodklienta;
        cin >> kodklienta;
        bool wynik = zamiennik.oddaj(kodklienta);
        if (wynik == true) {
            cout << "Auto zostało zwrócone!" << endl;
        }
        else {
            cout << "Już do takiego zamówienia nie ma przypisanego auta" << endl;
        }
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

