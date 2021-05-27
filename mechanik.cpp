#include <iostream>

using namespace std;


class Pracownik {
public:
    string imie;
    string nazwisko;
    string nr_telefonu;
    int kod_pracownika;
   
};

class Klient {
public:
    string imie;
    string nazwisko;
    string nr_telefonu;
    int numer_rezerwacji;
public:
    void utworz_klienta(string imie, string nazwisko, string nr_telefonu, int numer_rezerwacji) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->nr_telefonu = nr_telefonu;
        this->numer_rezerwacji = numer_rezerwacji;
    }
};

class Kierownik {
public:
    string imie;
    string nazwisko;
    string nr_telefonu;
    int kod_kierownika;
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
    void dodaj_czesc(string nazwaczesci, string opisczesci, int cenaczesci) {
        nazwa = nazwaczesci;
        opis = opisczesci;
        cena = cenaczesci;
       
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
    void rejestracja_uslugi(string numer_uslugi, string data_oddania_auta, string opis_prac, bool czy_przysluguje_zamienne, bool czy_gotowe, string rodzaj_uslugi) {

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
    void utworzPojazdZamienny(string marka, string model, string nr_rejestracyjny, int rocznik, string nr_vin, string ostatni_przeglad, bool czy_wolny, string data_od, string data_do, int przebieg_początkowy, int przebieg_zwrócony, int id_klienta, string opis, int cena_za_dobe ) {

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

};


void prace_serwisowe() {
    cout << "Podaj kod autoryzacyjny: ";
    int kod;
    cin>>kod;
    bool wynik_logowania = Logowanie(kod);
    if (wynik_logowania == true) {
        cout << "Podaj numer zlecenia: ";
        int numer_zlecenia;
        cin >> numer_zlecenia;
        Usługa usługa = Usługa();
        bool czy_istnieje_usluga = usługa.znajdz_usluge(numer_zlecenia);
        if (czy_istnieje_usluga == true) {
            cout << "Rejestruje prace serwisowe do usługi: " + numer_zlecenia << endl;
            cout << "Czy zostały wykonane dodatkowe naprawy? [T/N]" << endl;
            string ask_naprawy;
            cin >> ask_naprawy;
            if (ask_naprawy == "T" || ask_naprawy == "t" || ask_naprawy == "tak" || ask_naprawy == "TAK") {
                cout << "Podaj opis wykonywanych prac: " << endl;
                string opis_prac_zlecenie;
                cin >> opis_prac_zlecenie;
                usługa.dodaj_opis(opis_prac_zlecenie);
                cout << "Opis został dodany do zlecenia" << endl;
            }else {
                cout << "Nie dodajemy nowych prac" << endl;
            }
            cout << "Czy auto jest już gotowe do odbioru przez klienta [T/N]" << endl;
            string ask_gotowe;
            cin >> ask_gotowe;
            if (ask_gotowe == "T" || ask_gotowe == "t" || ask_gotowe == "tak" || ask_gotowe == "TAK") {
                bool zmianagotowosci = true;
                usługa.zmien_status_gotowosci(zmianagotowosci);
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
}

void zamowienie_czesci() {
    cout << "Podaj kod autoryzacyjny: ";
    int kod;
    cin >> kod;
    bool wynik_logowania = Logowanie(kod);
    string nazwa;
    string opis;
    int cena;
    string numer_zamowienia;

    if (wynik_logowania == true) {
        cout << "Dodawanie części" << endl;
        cout << "Podaj nazwę części: ";
        cin >> nazwa;
        cout << endl;
        cout << "Podaj opis części: " << endl;
        cin >> opis;
        cout << endl;
        cout << "Podaj cenę części" << endl;
        cin >> cena;
        cout << endl;
        Część część = Część();
        część.dodaj_czesc(nazwa, opis, cena);
        cout << "Część została dodana" << endl;
        cout << endl;
        cout << "Czy chcesz dodać część do istniejącego numeru zlecenia? [T/N]" << endl;
        string ask_naprawy;
        cin >> ask_naprawy;
        if (ask_naprawy == "T" || ask_naprawy == "t" || ask_naprawy == "tak" || ask_naprawy == "TAK") {
            cout << "Podaj numer zlecenia" << endl;
            int numer_zlecenia;
            cin >> numer_zlecenia;
            Usługa usługa = Usługa();
            bool czy_istnieje_usluga = usługa.znajdz_usluge(numer_zlecenia);
            if (czy_istnieje_usluga == true) {
                cout << "Część zostanie zapisana jako uzyta do podanej usługi" << endl;
                część.dodaj_do_zamowienia(numer_zlecenia);
            }
            else {
                cout << "Nie ma takiej usługi" << endl;
            }
        }
        else {
            cout << "Część została zapisana ale nie przypisana do żadnego zgłoszenia, kończymy" << endl;
        }
    }
    else {
        cout << "Logowanie błędne "<< endl;    
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

}

void tryb_klienta() {

    cout << "                                                           " << endl;
    cout << "  _____ _____   _____   _  ___    ___ ___ _  _ _____ _     " << endl;
    cout << " |_   _| _ \\ \\ / / _ ) | |/ / |  |_ _| __| \\| |_   _/_\\    " << endl;
    cout << "   | | |   /\\ V /| _ \\ | ' <| |__ | || _|| .` | | |/ _ \\   " << endl;
    cout << "   |_| |_|_\\ |_| |___/ |_|\\_\\____|___|___|_|\\_| |_/_/ \\_\\  " << endl;
    cout << "                                                           " << endl;
    cout << "                                                           " << endl;
}


void menu_glowne() {


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
    int mainmenuchoose;
    cout << "Podaj wybór: ";
    cin >> mainmenuchoose;
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
    default:
        cout << "Nie ma takiej opcji!!!" << endl;
        break;
    }

}

int main()
{
    setlocale(LC_CTYPE, "Polish"); //DODANIE POLSKICH ZNAKÓW DO KONSOLI

    //UTWORZENIE 3 PODSTAWOWYCH POJAZDÓW ZAMIENNYCH
    Pojazd_zamienny pojazd1 = Pojazd_zamienny();
    Pojazd_zamienny pojazd2 = Pojazd_zamienny();
    Pojazd_zamienny pojazd3 = Pojazd_zamienny();
    pojazd1.utworzPojazdZamienny("Audi", "A6", "KRK1234", 2018, "AXDWCEWCWEIU324213", "2021-02-20", true, "", "", 0, 0, 0, "Piękny i dynamiczny", 250);
    pojazd2.utworzPojazdZamienny("BMW", "X6", "KR7JT6", 2016, "NDSLCBWCHEBLC", "2021-03-12", true, "", "", 0, 0, 0, "Przestronny rodzinny SUV", 250);
    pojazd3.utworzPojazdZamienny("Ford", "Mustang", "ST899T", 2020, "DN32U974DN4IU2R", "2020-01-19", true, "", "", 0, 0, 0, "Szybkie sportowe auto", 250);

    //UTWORZENIE PRZYKŁADOWYCH OBIEKTÓW KLAS

    //jeden sposób na pracownika, bez tworzenia niczego w klasie
    Pracownik pracownik1 = Pracownik();
    pracownik1.imie = "Jan";
    pracownik1.nazwisko = "Robotnik";
    pracownik1.nr_telefonu = "666 555 444";
    pracownik1.kod_pracownika = 1234;

    //drugi sposób dzięki któremu będzie wam łatwiej stworzyć, poprzez funkcję dodania
    Klient klient1 = Klient();
    klient1.utworz_klienta("Janek", "Kimono", "654 544 332",1111);



    //ODPALENIE MENU GŁÓWNEGO
    menu_glowne();
}

