#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <ctime>
using namespace std;


//+++++++++++++++++++++++ PERSONNES +++++++++++++++++++++++++++++++++++++++++++++++
class Personne {
    string nom;
    string prenom;
public:
    Persone(){}
    Personne(string nom, string prenom) {
        this->nom = nom;
        this->prenom = prenom;
    }

    string getNom() const {   /// le mot "const" permet de dire au compilateur que cette méthode n'affectera pas l'attribut en question, et donc ceci permettra d'éviter les erreurs éventuelles
        return nom;           ///En somme, l'utilisation de const permet d'ajouter une couche de sécurité en garantissant que certaines méthodes ne modifieront pas l'état de l'objet
    }

    void setNom(string nom) {
        this->nom = nom;
    }

    string getPrenom() const {
        return prenom;
    }

    void setPrenom(string prenom) {
        this->prenom = prenom;
    }

    virtual string toStringU() const {    /// la méthode "virtual" permet de definir une méthode commune entre plusieurs classes dérivées;, dans toute l'appelation de la fonction "toStringU" en ajoutant la lettre U veut dire que cette méthode sert par la suite ) afficher les objets aux utilisateurs
        return "Nom: "+nom +"| Prenom: " +prenom +" ";
    }
    virtual string toStringB() const {    /// Dans toute , cette appelation en ajoutant "B" veut dire "Back-end" et  que cette méthode sera utilisée pour stocker l'objet dans les fichiers de données
        return nom +"| " +prenom ;
    }
};




///+++++++++++++++++++++++ LA CLASSE :    AdherentStagaire +++++++++++++++++++++++++++++++++++++++++++++++

class AdherentStagiaire : public Personne {

    static int compteurAdherent; /// attribut  statique qui peuvent être initialisé à l'extérieur de la classse , qui permet
    string codeAdherent;
    string dateAdhesion;

public:
    AdherentStagiaire(string nom="", string prenom="", string dateAdhesion="") : Personne(nom, prenom) {
        if(codeAdherent.empty()){
        ++compteurAdherent;
        ostringstream ss;
        ss << setfill('0') << setw(4) << compteurAdherent;
        string numStr = ss.str();
        codeAdherent = "Adh_St" + numStr;
        //to_string(++compteurAdherent); /// la focntuion "to_string" permet de convertir d'un type de données en type  string;

        }
        if (dateAdhesion.empty()) {
            time_t now = time(nullptr);
            tm* timeinfo = localtime(&now);
            char buffer[80];
            strftime(buffer, 80, "%d/%m/%Y", timeinfo);
            dateAdhesion = buffer;
        }

        this->dateAdhesion = dateAdhesion;
    }
    AdherentStagiaire_ligne (vector<string> ligne){
         AdherentStagiaire Adh (ligne[1],ligne[2],ligne[3]);
         }

    string getCodeAdherent() const {
        return codeAdherent;
    }

    string getDateAdhesion() const {
        return dateAdhesion;
    }

    void setCodeAdherent(string codeAdherent) {
        this->codeAdherent = codeAdherent;
    }

    void setDateAdhesion(string dateAdhesion) {
        this->dateAdhesion = dateAdhesion;
    }

    string toStringU() const override  {   /// le mot "override" permet de dire au compilateur que c'est une méthode "virtual" qui est déja définie pour la classe mère;
        return "Code Adherent stagiaire : " + codeAdherent + " | " + Personne::toStringU() + " | Date d'adhesion : " + dateAdhesion;
    }
    string toStringB() const override  {   /// le mot "override" permet de dire au compilateur que c'est une méthode "virtual" qui est déja définie pour la classe mère;
        return  codeAdherent + " | " + Personne::toStringB() + " | " + dateAdhesion +";";
    }
};
int AdherentStagiaire::compteurAdherent = 0;






///+++++++++++++++++++++ LA CLASSE    :   Auteur +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
class Auteur : public Personne {
    static int CompteurAuteur;
    string codeAuteur;
    string nationalite;

public:
    Auteur( string nom="", string prenom="", string nationalite="")///ici on utilise des valeurs par défaut pour les paramètres du constructeur,si l'utilisateur ne donne pas les valeurs , il vont être initialisées toutes par defaut  comme ""
            : Personne(nom, prenom) {
            if(codeAuteur.empty()){
                    ++CompteurAuteur;
                    ostringstream ss;
                    ss << setfill('0') << setw(4) << CompteurAuteur;
                    string numStr = ss.str();
                    codeAuteur = "Aut" + numStr;
            }
            else{
                 this->codeAuteur = codeAuteur;
            }
        this->nationalite = nationalite;
    }

    string getCodeAuteur() const {
        return codeAuteur;
    }

    string getNationalite() const {
        return nationalite;
    }

    void setCodeAuteur(string codeAuteur) {
        this->codeAuteur = codeAuteur;
    }

    void setNationalite(string nationalite) {
        this->nationalite = nationalite;
    }

     string toStringU() const override {
        return "| Code Auteur : " + codeAuteur + " | " + Personne::toStringU() +
               " | Nationalité : " + nationalite;
    }
    virtual string toStringB() const override {
        return codeAuteur + " | " + Personne::toStringB() + " | " + nationalite +";";
    }
};
int Auteur::CompteurAuteur=0;





///+++++++++++++++++++++++ La CLASSE :   Livre +++++++++++++++++++++++++++++++++++++++++++++++
class Livre {
    static int  CompteurLivre;
    string CodeL;
    string Titre;
    Auteur A;
    string IntituleTh;
    int NbExemplaire;
    int NbExemplaire_disp;
public:
    Livre() {}
    Livre(string titre, Auteur a,string intituleTh, int nbExemplaire)
        :  Titre(titre), A(a), IntituleTh(intituleTh), NbExemplaire(nbExemplaire), NbExemplaire_disp(nbExemplaire) {
                ++CompteurLivre;
                ostringstream ss;
                ss << setfill('0') << setw(4) << CompteurLivre;
                string numStr = ss.str();
            CodeL="Liv"+ numStr;

    }

    // Accesseurs et modificateurs des champs
    string getCodeL() const { return CodeL; }
    string getTitre() const { return Titre; }
    Auteur getAuteur() const { return A; }
    string getIntituleTh() const { return IntituleTh; }
    int getNbExemplaire() const { return NbExemplaire; }
    int getNbExemplaire_disp() const { return NbExemplaire_disp; }


    void setTitre(string titre) { Titre = titre; }
    void setAuteur(Auteur a) { A = a; }
    void setIntituleTh(string intituleTh) { IntituleTh = intituleTh; }
    void setNbExemplaire(int nbExemplaire) { NbExemplaire = nbExemplaire; }
    void setNbExemplaire_disp(int nbExemplaire_disp) { NbExemplaire_disp = nbExemplaire_disp; }

    bool Disponible() {
        return NbExemplaire_disp > 0;
    }
    string toStringU() const {
        return "Code Livre : " + CodeL + " | Titre : " +Titre + " | Intitule du theme : "+ IntituleTh+"\n" +   " | Nombre d'exemplaire disponible : " + to_string(NbExemplaire_disp) + " | Nom d'auteur  : "+ A.getNom() +" "+  A.getPrenom() + "\n" ;

    }
    string toStringB() const  {
        return  CodeL + " | " +Titre + " |  "+ IntituleTh+  " | " + to_string(NbExemplaire_disp) + " | " + A.getNom() + " | " + A.getPrenom() + ";" ;

    }
};
int Livre::CompteurLivre=0;






/// +++++++++++++++++++++++++ LA CLASSE : Emprunt +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
class Emprunt {
    static int compteurEmp; // compteur pour le numéro d'emprunt
    string NumEmp;
    Livre livre;
    AdherentStagiaire stagiaire;
    string  DateEmp;
    string DateRetour;
    bool etat; // true = en cours d'emprunt, false = livre rendu

public:
    Emprunt(Livre l, AdherentStagiaire s) {
        time_t point;
        if (DateEmp.empty()) {
            time_t now = time(nullptr);
            point=now;
            tm* timeinfo = localtime(&now);
            char buffer[80];
            strftime(buffer, 80, "%d/%m/%Y", timeinfo);
            DateEmp = buffer;
        }
        ++compteurEmp;
        ostringstream ss;
        ss << setfill('0') << setw(4) << compteurEmp;
        string numStr = ss.str();
        NumEmp="Emp"+ numStr;
        livre = l;
        stagiaire = s;
        time_t d=0;
        d = point + (7 * 24 * 60 * 60); // date de retour = date d'emprunt + 7 jours
        tm* timeinfo2 = localtime(&d);
        char buffer2[80];
        strftime(buffer2, 80, "%d/%m/%Y", timeinfo2);
        DateRetour = buffer2;
        etat = true; // le livre est en cours d'emprunt paar défaut
    }

    // accesseurs et modificateurs
    string getNumEmp() const { return NumEmp; }
    Livre getLivre() const { return livre; }
    string getCodeL(){
    return livre.getCodeL();}
    AdherentStagiaire getStagiaire() const { return stagiaire; }
    string getCodeAdherent(){
    return stagiaire.getCodeAdherent();}
    string getDateEmp() const { return DateEmp; }
    string getDateRetour() const { return DateRetour; }


    bool getEtat() const { return etat; }
    void setLivre(Livre l) { livre = l; }
    void setStagiaire(AdherentStagiaire s) { stagiaire = s; }
    void setDateEmp(string date) { DateEmp = date; }
    void setDateRetour(string date) { DateRetour = date; }
    void setEtat(bool etatLivre) { etat = etatLivre; }

    // méthode pour vérifier si un livre est disponible
    bool disponibleLivre() {
        if (livre.getNbExemplaire_disp() > 0) {
            return true;
        }
        else {
            return false;
        }
    }

    // méthode pour afficher l'emprunt
    void afficherEmprunt() {
        cout << "Numero d'emprunt :  " << NumEmp << endl;
        cout << "Livre emprunte :  " << livre.getTitre() << " (Code :  " << livre.getCodeL() << ")" << endl;
        cout << "Adherent stagiaire :  " << stagiaire.getNom() << " " << stagiaire.getPrenom() << " (Code :  " << stagiaire.getCodeAdherent() << ")" << endl;
        cout << "Date d'emprunt :  " << DateEmp;
        cout << "   | Date de retour : " << DateRetour;
        if (etat) {
            cout << "   | Etat :  en cours d'emprunt\n\n" << endl;
        }
        else {
            cout << "   | Etat :  livre rendu \n\n" << endl;
        }
    }
     string  toStringB() const  {
         if(etat)
            {
            return  NumEmp + " | " + livre.getTitre() + " | " + livre.getCodeL() + stagiaire.getNom() + " | " + stagiaire.getPrenom() + " | " +  stagiaire.getCodeAdherent() + " | " + DateEmp+ " | " +DateRetour + " | En cours d'emprunt;";
              }
         else{
            return  NumEmp + " | " + livre.getTitre() + " | "  + livre.getCodeL() + stagiaire.getNom() + " | " + stagiaire.getPrenom() + " | " +  stagiaire.getCodeAdherent() + " | " + DateEmp+ " | " +DateRetour + " | Rendu;";
           }
        }
};

int Emprunt::compteurEmp=0;
///+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Test_Biblio{
    vector <AdherentStagiaire> Liste_AdherentsStagiaires;
    vector<Auteur> vect_aut;
    vector < Livre> Liste_Livres;
    vector <Emprunt> Liste_Emprunts;
        ///    Livre(string titre, Auteur a,string intituleTh, int nbExemplaire)
    public:
    Test_Biblio(vector<AdherentStagiaire>STG,vector<Auteur> vect_Aut,vector<Livre>L,vector<Emprunt>E){
        Liste_AdherentsStagiaires=STG;
        vect_aut=vect_Aut;
        Liste_Livres=L;
        Liste_Emprunts=E;
    }

    void Ajouter_livre (string T,Auteur a,string Th,int nbExemplaire) {
        Livre L (T, a,Th, nbExemplaire);
        Liste_Livres.push_back(L);

    }
///Emprunt(Livre l, AdherentStagiaire s)
    void Ajouter_Emprunt (Livre L,AdherentStagiaire stg) {
        Emprunt E (L, stg);
        Liste_Emprunts.push_back(E);
        int t= L.getNbExemplaire_disp()-1;
        L.setNbExemplaire_disp(t);

    }
    AdherentStagiaire rechercher_Adherent  (string code) const  {  /// cette fonction chercher un adherent par son code et le retourne comme objet si trouvé
        for (int i = 0; i < Liste_AdherentsStagiaires.size(); i++) {
                if(Liste_AdherentsStagiaires[i].getCodeAdherent()==code){
                    return Liste_AdherentsStagiaires[i];
                }
         }
    }
      Auteur  rechercher_Auteur  (string code) const  {  /// cette fonction chercher un adherent par son code et le retourne comme objet si trouvé
        for (int i = 0; i < vect_aut.size(); i++) {
                if(vect_aut[i].getCodeAuteur()==code){
                    return vect_aut[i];
                }
         }
    }
    void Listerlivre  () const {
        for (int i = 0; i < Liste_Livres.size(); i++) {
                cout<<Liste_Livres[i].toStringU()<<endl;
     }
    }
    void Lister_Emprunts_date()   {  ///
         for (int i = 0; i < Liste_Emprunts.size(); i++) {
                if(Liste_Emprunts[i].getEtat()){
                    Liste_Emprunts[i].afficherEmprunt();
                }
        }
    }

    void Sauvgarder_emprunt(string file){
       ofstream fichier(file);
       if (fichier) {
        // Le fichier a été ouvert avec succès
        // Ecriture dans le fichier...
        for (int i = 0; i < Liste_Emprunts.size(); i++)
           {
            fichier << Liste_Emprunts[i].toStringB() << endl;
            }
        }
        else {
        // Le fichier n'a pas pu être ouvert
        cout << "Erreur lors de l'ouverture du fichier" << endl;
       }
    }
};


int main() {
    vector <AdherentStagiaire> Liste_AdherentsStagiaires;
    vector <Auteur> vect_aut;
    vector <Livre> Liste_Livres;
    vector <Emprunt> Liste_Emprunts;

// Initialisation de la classe test_bibliothque
    AdherentStagiaire stg1 ("RIHANNI","Mohamed","22/11/2023");
    AdherentStagiaire stg2 ("AJALE","Saâd","20/11/2023");
    AdherentStagiaire stg3 ("BOUZAFFOUR","Mortada","20/10/2022");
    AdherentStagiaire stg4 ("BOUZAFFOUR2","Mortada2","23/10/2022");

    Auteur Aut1("HUGO", "Victor", "Francais");
    Auteur Aut2("ABOU GHAZALA ", "Talal", "Palestinien");
    Auteur Aut3("YANI","ABRAHAM", "Roumanien");

    Livre Liv1("Livre1", Aut1,"Romanesque" , 10);
    Livre Liv2("Livre2", Aut2,"Romanesque" , 10);
    Livre Liv3("Livre3", Aut3,"Romanesque" , 10);
    Livre Liv4("Livre4", Aut1,"Romanesque" , 10);
    Emprunt Emp1(Liv1, stg3);
    Emprunt Emp2(Liv2, stg2);
    Emprunt Emp3(Liv3, stg1);


    Liste_AdherentsStagiaires.push_back(stg1);
    Liste_AdherentsStagiaires.push_back(stg2);
    Liste_AdherentsStagiaires.push_back(stg3);

    vect_aut.push_back(Aut1);
    vect_aut.push_back(Aut1);
    vect_aut.push_back(Aut1);

    Liste_Livres.push_back(Liv1);
    Liste_Livres.push_back(Liv2);
    Liste_Livres.push_back(Liv3);

    Liste_Emprunts.push_back(Emp1);
    Liste_Emprunts.push_back(Emp2);
    Liste_Emprunts.push_back(Emp3);

    Test_Biblio projet(Liste_AdherentsStagiaires,vect_aut,Liste_Livres,Liste_Emprunts);



    string choix;
    construction1:
    cout << "\t\t=== Gestion des Emprunts ===" << endl << endl;
    cout << "\t1. Ajouter un emprunt" << endl;
    cout << "\t2. Retourner un emprunt" <<endl;
    cout << "\t3. Afficher les emprunts en cours" << endl;
    cout << "\t4. Voir livres disponibles" << endl;
    cout << "\t5. Quitter" << endl <<endl;
    cout << "\nChoix : ";

        int s=0;
        cin >> choix;
        int number;
        string choix2;
        int number2;
        try {
            number = stoi(choix);
       // cout << "La conversion en entier a réussi. Nombre : " << number << endl;
        }
        catch (const exception& e) {
            cout << "Choix invalide !!!" << endl;
        }
        string titre_livre;
        string Code_Adh;
        string code_Adh;
        string code_liv;
        string code_auteur;
        string intitule;
        int nb_exmp=0;
        switch (number) {
            case 1:
                system("cls");
                construction3:
                cout << "Le titre du livre  :" ;
                cin >> titre_livre;
                cout << "Le code_stagiaire: " ;
                cin >> Code_Adh;
                for( int i=0 ; i <Liste_Livres.size();i++){
                        for(int j=0 ;j <Liste_AdherentsStagiaires.size();j++){
                            if(Liste_Livres[i].getTitre()== code_liv && Liste_AdherentsStagiaires[j].getCodeAdherent()==code_Adh){
                                  projet.Ajouter_Emprunt(Liste_Livres[i],Liste_AdherentsStagiaires[j]);
                                  s=1;
                            }
                        }
                }
                if(s==0){
                    construction5:
                    cout<<"\n\n        !!! parametresInvalide  !!!\n\n"<<endl;
                    cout << "             >>> 1 : Re-Entrer les parametres :   "<<endl;
                    cout << "             >>> 0 : Revenir au menu precedent "<<endl;
                    cout << "             >>> :  ";
                    cin >> choix2;
                    try {
                    number2 = stoi(choix2);
                    }
                    catch (const exception& erreur) {
                        goto construction2;
                        }
                    if(number2==0){
                        system("cls");
                        goto construction1;
                    }
                    if(number2==1){
                        //system("cls");
                        goto  construction3;
                    }
                    else{
                        system("cls");
                        goto construction5;
                    }
                }
                break;
            case 2:
                construction7:
                system("cls");
                cout<< "Entrer Code Adherent : ";
                cin>>code_Adh;
                cout<< "\nEntrer code livre : ";
                cin>>code_liv;
                for( int j=0 ; j <Liste_Emprunts.size();j++){
                        if(Liste_Emprunts[j].getCodeL()==code_liv && Liste_Emprunts[j].getCodeAdherent()==code_Adh){
                            Liste_Emprunts[j].afficherEmprunt();
                            s=1;
                        }
                    }
                if(s==0){
                    cout<<" Erreur livre ou Adherent introuvable "<<endl;
                    cout << "\n            >>> 1 : Ressayer "<<endl;
                    cout << "\n            >>> 2 : Revenir au menu precedent "<<endl;
                    cout << "\n            >>> 0 : Quitter "<<endl;
                    construction6:
                    cout << "             >>> :  ";
                    cin >> choix2;
                    try {
                    number2 = stoi(choix2);
                    }
                    catch (const exception& erreur) {
                        goto construction6;
                        }
                    if(number2==1){
                        goto construction7;
                    }
                    if(number2==2){
                        system("cls");
                        goto construction1;
                    }
                    if(number2==0){
                        system("cls");
                        projet.Sauvgarder_emprunt("Emprunt.txt"); /// sauvegarder les emprunts en fin de traitement;
                        system("exit");
                    }
                }
                break;
            case 3:
                system("cls");
                cout << "       +++++ Historique des emprunts ne cours ++++++  \n" ;
                for( int j=0 ; j <Liste_Emprunts.size();j++){
                        Liste_Emprunts[j].afficherEmprunt();
                        }
                /// test du code Adh;
                cout << "\n\n\n             >>> 0 : Revenir au menu precedent "<<endl;
                construction2:
                    cout << "             >>> :  ";
                    cin >> choix2;
                    try {
                    number2 = stoi(choix2);
                    }
                    catch (const exception& erreur) {
                        goto construction2;
                        }
                    if(number2==0){
                        system("cls");
                        goto construction1;
                    }
                    else{
                        system("cls");
                        system("exit");
                        projet.Sauvgarder_emprunt("Emprunt.txt"); /// sauvegarder les emprunts en fin de traitement;
                    }
                break;
             case 4:
                system("cls");
                cout << "Nous avons un ensemble de livres de differents themes, à votre disposition : \n\n " << endl;
                cout << "     ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << endl;
                projet.Listerlivre();
                cout << "\n\n\n             >>> 0 : Revenir au menu precedent "<<endl;
                    cout << "             >>> :  ";
                    cin >> choix2;
                    try {
                    number2 = stoi(choix2);
                    }
                    catch (const exception& erreur) {
                        goto construction2;
                        }
                    if(number2==0){
                        system("cls");
                        goto construction1;
                    }
                    else{
                        system("cls");
                        goto construction2;
                    }
                break;
             case 5:

                system("cls");
                cout << "\t\t\t Aurevoir !!!!!!! " ;
                break;

             default:
                cout << "Choix invalide !!!" << endl;
                goto construction1;
        }
        return 0;
}

