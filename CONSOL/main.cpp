#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <ctime>
using namespace std;

//FONCTION QUI CONVERTIR FROM STR TO INT
int str_to_int(string ch ){
    int n;
     try {
        n= stoi(ch);
                }
    catch (const exception& e) {
            n=-1;
        }
    return n;
  }

/*
void copier_contenu_du_fichier(string file1, string file2){
    ifstream fichier1(file1);
    ofstream fichier2(file2);
    if(fichier1 && fichier2){
        string ligne;
        while (getline(fichier1, ligne)) {
             fichier2<<ligne<<endl;
                    }
    }
    else {
                cout << "Erreur lors de l'ouverture du fichier" << endl;
        }
}

void actualiser_fichier( vector<AdherentStagiaire> Liste_stagiaires){
        ifstream fichier("AdherentStagiaire.txt");
        if (fichier) {
                string ligne;
                while (getline(fichier,ligne)) {
                    string delimiter = "|";
                    istringstream iss(ligne);
                    string token;
                    vector <string> vect;
                    while (getline(iss, token, delimiter[0]))
                    {
                        vect.push_back(token);
                    }
                    ligne={};
                    int s=1;
                    for(int i=0;i<Liste_stagiaires.size();i++){
                        if(Liste_stagiaires[i].getCodeAdherent()==vect[0]){
                             /// ici on doit ecrire ce ligne dans le fichier copie
                             ofstream fichier_copie("AdherentStagiaire_copie.txt");
                                    if (fichier_copie) {
                                        fichier_copie << Liste_stagiaires[i].toStringB();
                                    }
                                    else {
                                        cout << "Erreur lors de l'ouverture du fichier copie " << endl;
                                    }
                                    s=0;
                        }
                    }
                    if(s!=0){
                        ofstream fichier_copie("AdherentStagiaire_copie.txt");
                        if (fichier_copie) {
                                        fichier_copie <<vect[0]<<" | "<<vect[1]<<" | "<< vect[2]<<" | "<< vect[3]<<endl;;
                                    }
                                    else {
                                        cout << "Erreur lors de l'ouverture du fichier copie " << endl;
                                    }
                    }
               }
            }
            else {
                cout << "Erreur lors de l'ouverture du fichier" << endl;
            }
        copier_contenu_du_fichier("AdherentStagiaire_copie.txt","AdherentStagiaire.txt");
}


*/

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
               " | Nationalite : " + nationalite;
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

    void setCodeLivre(string CodeLivre){
        CodeL=CodeLivre;
        }
    void setTitre(string titre) { Titre = titre; }
    void setAuteur(Auteur a) { A = a; }
    void setIntituleTh(string intituleTh) { IntituleTh = intituleTh; }
    void setNbExemplaire(int nbExemplaire) { NbExemplaire = nbExemplaire; }
    void setNbExemplaire_disp(int nbExemplaire_disp) { NbExemplaire_disp = nbExemplaire_disp; }

    bool Disponible() {
        return NbExemplaire_disp > 0;
    }
    string toStringU() const {
        return "Code Livre : " + CodeL + " | Titre : " +Titre + "| code de l'auteur "+ A.getCodeAuteur() +" | Intitule du theme : " + IntituleTh+"| Nom de l'auteur: " + A.getNom() + A.getPrenom()  +"| Nombre d'exmplaire : " +to_string(NbExemplaire)+" | Nombre d'exemplaire disponible : " + to_string(NbExemplaire_disp) +  "\n\n" ;

    }
    string toStringB() const  {
        return  CodeL + "|" +Titre + "|" + A.getNom() +" "+ A.getPrenom()+"|"+ IntituleTh+ "|" +to_string(NbExemplaire) + "|"+ to_string(NbExemplaire_disp)   ;

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
    void  Afficher_Emprunt() const {
        cout << "Num Emp:" << NumEmp <<"|";
        cout << "Code livre:" << livre.getCodeL() << "|Code stagiaire:" << stagiaire.getCodeAdherent() << "|" ;
        cout << "Titre du Livre:" <<livre.getTitre() << "\n|Nom du stagiaire:"<<stagiaire.getNom()<<""<<stagiaire.getPrenom();
        cout << "|Date d'emprunt:" << DateEmp;
        cout << "|Date de retour:" << DateRetour;
        if (etat) {
            cout << "|Etat:en cours d'emprunt\n\n" << endl;
        }
        else {
            cout << "|Etat:livre rendu \n\n" << endl;
        }
    }
     string  toStringB() const {
         if(etat)
            {
            return  NumEmp + "|"+ livre.getCodeL() + "|" + stagiaire.getCodeAdherent()+"|" +livre.getTitre() + "|" + stagiaire.getNom() + " " + stagiaire.getPrenom() + "|" + DateEmp+ "|" +DateRetour + "|En cours d'emprunt";
              }
         else{
            return  NumEmp + "|"+ livre.getCodeL() + "|" + stagiaire.getCodeAdherent()+"|" +livre.getTitre() + "|" + stagiaire.getNom() + " " + stagiaire.getPrenom() + "|" + DateEmp+ "|" +DateRetour + "|Rendu";
           }
        }
};
int Emprunt::compteurEmp=0;


///+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Test_Biblio{
    vector <AdherentStagiaire> Liste_AdherentsStagiaires;
    vector <Auteur> Liste_Auteurs;
    vector < Livre> Liste_Livres;
    vector <Emprunt> Liste_Emprunts;
    public:
    Test_Biblio(vector<AdherentStagiaire>STG,vector<Auteur> vect_Aut,vector<Livre>L,vector<Emprunt>E){
        Liste_AdherentsStagiaires=STG;
        Liste_Auteurs=vect_Aut;
        Liste_Livres=L;
        Liste_Emprunts=E;
    }


/// FONCTION D'AJOUT
    void Ajouter_AdherentStagiaire (string Nom,string Prenom) {
        AdherentStagiaire Adh(Nom,Prenom);
        Liste_AdherentsStagiaires.push_back(Adh);


    }
    void Ajouter_livre (string T,Auteur a,string Th,int nbExemplaire) {
        Livre L (T, a,Th, nbExemplaire);
        Liste_Livres.push_back(L);
    }

        ///Emprunt(Livre l, AdherentStagiaire s)
    void Ajouter_Emprunt (Livre L,AdherentStagiaire stg) {
        int t;
        t= L.getNbExemplaire_disp()-1;
        L.setNbExemplaire_disp(t);
        Emprunt E (L, stg);
        Liste_Emprunts.push_back(E);

    }


  /*  AdherentStagiaire rechercher_Adherent  (string code) const  {  /// cette fonction chercher un adherent par son code et le retourne comme objet si trouvé
        int s=0;
        for (int i = 0; i < Liste_AdherentsStagiaires.size(); i++) {
                if(Liste_AdherentsStagiaires[i].getCodeAdherent()==code){
                    return Liste_AdherentsStagiaires[i];
                    s=1;
                }
         }
        if(s==0){
            AdherentStagiaire Adh_null("A","A","00/00/0000");
            return  Adh_null;
        }
    }
    Auteur  rechercher_Auteur  (string code) const  {  /// cette fonction chercher un adherent par son code et le retourne comme objet si trouvé
        int s=0;
        for (int i = 0; i < vect_aut.size(); i++) {
                if(vect_aut[i].getCodeAuteur()==code){
                    return vect_aut[i];
                    s=1;
                }
         }
        if(s==0){
                 Auteur Aut_null("A","A","Nationalite");
                 return Aut_null;
        }
    }
    Livre  rechercher_Livre  (string code_ou_titre) const  {  /// cette fonction chercher un adherent par son code et le retourne comme objet si trouvé
        int s=0;
        for (int i = 0; i < vect_aut.size(); i++) {
                if(Liste_Livres[i].getCodeL()==code_ou_titre | Liste_Livres[i].getTitre()==code_ou_titre){
                    return Liste_Livres[i];
                    s=1;
                }
         }
        if(s==0){
            Auteur Aut_null("A","A","Nationalite");
             Livre Liv_null("T",Aut_null,"intitule",0);
             return Liv_null;
        }
    }
    */


    void Listerlivre  () const {
        for (int i = 0; i < Liste_Livres.size(); i++) {
                cout<<Liste_Livres[i].toStringU()<<endl;
     }
    }


    void ListerAdherents  () const {
        for (int i = 0; i < Liste_AdherentsStagiaires.size(); i++) {
                cout<<Liste_AdherentsStagiaires[i].toStringU()<<endl;
     }
    }


    void Lister_Emprunts()   {  /// lister emprunts en couors
         for (int i = 0; i < Liste_Emprunts.size(); i++) {
                if(Liste_Emprunts[i].getEtat()){
                    Liste_Emprunts[i].Afficher_Emprunt();
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



    ///++++++++++++++ RECHRCHE ADHERENT STAGIAIRE
    AdherentStagiaire rechercher_Adherent  (string code ) {  /// cette fonction chercher un adherent par son code et le retourne comme objet si trouvé
        int s=0;
        for (int i = 0; i < Liste_AdherentsStagiaires.size(); i++) {
                if(Liste_AdherentsStagiaires[i].getCodeAdherent()==code){
                    return Liste_AdherentsStagiaires[i];
                    s=1;
                }
         }
        if(s==0){
            AdherentStagiaire Adh_null(" "," "," ");
            return  Adh_null;
        }
    }


 /// From file
    AdherentStagiaire rechercher_Adherent_fichier (string code ) {
        string CodeAdh=" ";
        string Nom=" ";
        string Prenom=" ";
        string dateadhesion=" ";
        ifstream fichier("AdherentStagiaire.txt");
            if (fichier) {
                string ligne;
                while (getline(fichier,ligne)) {
                        string delimiter = "|";
                        istringstream iss(ligne);
                        string token;
                        vector <string> vect;
                        while (getline(iss, token, delimiter[0]))
                            {
                            vect.push_back(token);
                        }
                        if(vect[0]==code ){
                                CodeAdh=vect[0];
                                Nom=vect[1];
                                Prenom=vect[2];
                                dateadhesion=vect[3];

                       }
                 }
            }

            else {
                cout << "Erreur lors de l'ouverture du fichier AdherentStagiaire.txt" << endl;
            }
            if(CodeAdh!=" "){
            AdherentStagiaire Ad (Nom,Prenom,dateadhesion);
            Ad.setCodeAdherent(CodeAdh);
            return Ad;
            }
            else{
                AdherentStagiaire Ad (Nom,Prenom,dateadhesion);
                return Ad;
            }
}





/// RECHERCHER  AUTEUR
    Auteur rechercher_Auteur  (string code ) {  /// cette fonction chercher un Auteur par son code et le retourne comme objet si trouvé
        int s=0;
        for (int i = 0; i < Liste_Auteurs.size(); i++) {
                if(Liste_Auteurs[i].getCodeAuteur()==code){
                    return Liste_Auteurs[i];
                    s=1;
                }
         }
        if(s==0){
            Auteur Aut_null(" "," "," ");
            return  Aut_null;
        }
    }

 /// from file
    Auteur rechercher_Auteur_fichier (string code ) {
        string CodeAut=" ";
        string Nom=" ";
        string Prenom=" ";
        string Natio=" ";
        ifstream fichier("Auteur.txt");
            if (fichier) {
                string ligne;
                while (getline(fichier,ligne)) {
                        string delimiter = "|";
                        istringstream iss(ligne);
                        string token;
                        vector <string> vect;
                        while (getline(iss, token, delimiter[0]))
                            {
                            vect.push_back(token);
                        }
                        if(vect[0]==code){
                                CodeAut=vect[0];
                                Nom=vect[1];
                                Prenom=vect[2];
                                Natio=vect[3];

                       }
                 }
            }
            else {
                cout << "Erreur lors de l'ouverture du fichier Auteur.txt" << endl;
            }
            if(CodeAut!=" "){

                Auteur Aut (Nom,Prenom,Natio);
                Aut.setCodeAuteur(CodeAut);
                return Aut;
            }
            else{
                Auteur Aut (Nom,Prenom,Natio);
                return Aut;
            }
     }


  /// REchercher LIvre
     Livre rechercher_Livre  (string code ) {  /// cette fonction chercher un Livre par son code et le retourne comme objet si trouvé
        int s=0;
        for (int i = 0; i < Liste_Livres.size(); i++) {
                if(Liste_Livres[i].getCodeL()==code){
                    return Liste_Livres[i];
                    s=1;
                }
         }
        if(s==0){
            Auteur A (" "," ", " ");
            Livre Liv_null(" ",A," ",-1);
            return  Liv_null;
        }
    }
     Livre rechercher_Livre_Par_Titre  (string T ) {  /// cette fonction chercher un Livre par son code et le retourne comme objet si trouvé
        int s=0;
        for (int i = 0; i < Liste_Livres.size(); i++) {
                if(Liste_Livres[i].getTitre()==T){
                    return Liste_Livres[i];
                    s=1;
                }
         }
        if(s==0){
            Auteur A (" "," ", " ");
            Livre Liv_null(" ",A," ",-1);
            return  Liv_null;
        }
    }
    Livre rechercher_Livre_fichier (string code ) {
        string CodeLivre=" ";
        string T=" ";
        string Theme=" ";
        string Nb_ch= "-1";
        int  Nb=-1;
        ifstream fichier("Livre.txt");
            if (fichier) {
                string ligne;
                while (getline(fichier,ligne)) {
                        string delimiter = "|";
                        istringstream iss(ligne);
                        string token;
                        vector <string> vect;
                        while (getline(iss, token, delimiter[0]))
                            {
                            vect.push_back(token);
                        }
                        if(vect[0]==code ){
                                CodeLivre=vect[0];
                                T=vect[1];
                                Theme=vect[3];
                                Nb_ch=vect[6];
                                Nb=str_to_int(Nb_ch);
                                Livre L (T, rechercher_Auteur_fichier(vect[2]),Theme,Nb);
                                L.setCodeLivre(CodeLivre);
                                return L;

                       }
                 }
            }
            else {
                cout << "Erreur lors de l'ouverture du fichier Livre.txt" << endl;
            }
            if(Nb== -1){
                Auteur  A(" "," "," ");
                Livre L (T,A,Theme,Nb);
                return L;
            }

}
};






int main() {
    vector <AdherentStagiaire> Liste_AdherentsStagiaires;
    vector <Auteur> Liste_Auteurs;
    vector <Livre> Liste_Livres;
    vector <Emprunt> Liste_Emprunts;
/// Initialisation de la classe test_bibliothque

    AdherentStagiaire stg1 ("RIHANNI","Mohamed","22/11/2023");
    AdherentStagiaire stg2 ("AJALE","Saâd","20/11/2023");
    AdherentStagiaire stg3 ("BOUZAFFOUR","Mortada","20/10/2022");
    AdherentStagiaire stg4 ("BOUZAFFOUR2","Mortada2","23/10/2022");

    Auteur Aut1("HUGO", "Victor", "Francais");
    Auteur Aut2("ABOU GHAZALA ", "Talal", "Palestinien");
    Auteur Aut3("YANI","ABRAHAM", "Roumanien");

    Livre Liv1("Livre1", Aut1,"Romanesque" , 10);
    Livre Liv2("Livre2", Aut2,"Romanesque" , 4);
    Livre Liv3("Livre3", Aut3,"Romanesque" , 9);
    Livre Liv4("Livre4", Aut1,"Romanesque" , 11);

    Emprunt Emp1(Liv1, stg1);
    Emprunt Emp2(Liv2, stg1);
    Emprunt Emp3(Liv3, stg2);
/// initialisation des vetor
    Liste_AdherentsStagiaires.push_back(stg1);
    Liste_AdherentsStagiaires.push_back(stg2);
    Liste_AdherentsStagiaires.push_back(stg3);

    Liste_Auteurs.push_back(Aut1);
    Liste_Auteurs.push_back(Aut1);
    Liste_Auteurs.push_back(Aut1);

    Liste_Livres.push_back(Liv1);
    Liste_Livres.push_back(Liv2);
    Liste_Livres.push_back(Liv3);

    Liste_Emprunts.push_back(Emp1);
    Liste_Emprunts.push_back(Emp2);
    Liste_Emprunts.push_back(Emp3);

Test_Biblio projet(Liste_AdherentsStagiaires,Liste_Auteurs,Liste_Livres,Liste_Emprunts);



/// TEST :   Ajouter_livre  et LISTER LIVRE
/*
projet.Listerlivre();
projet.Ajouter_livre("Liv_test",Aut1,"romanesque",50);

cout<<"\n\n +++ Apres_Ajout+++\n\n"<<endl;

projet.Listerlivre();


*/




/// TEST:   Ajouter_Emprunt  et Lister_Emprunt

//
/*
projet.Lister_Emprunts();

cout<<"Nommbre d'ex au debut :" <<Liv1.getNbExemplaire_disp()<<endl;
projet.Ajouter_Emprunt(Liv1,stg4);
cout<<"+++++++++++++"<<endl;
int t;
t=Liv1.getNbExemplaire_disp()-1;
Liv1.setNbExemplaire_disp(t);
projet.Lister_Emprunts();

cout<<"Nombre d'ex apres l'Ajout de l'emprunt :" <<Liv1.getNbExemplaire_disp()<<endl;

*/

/// TEST :   rechercher_Adherent
/*
cout<<"\n\n Lister les adherents : "<<endl;
projet.ListerAdherents();
cout<<" \n\nRecherche d'adherent dont le code est Aut0001: \n"<<endl;
cout<< projet.rechercher_Adherent("Adh_St0001").toStringU()<<"\n\n\n"<<endl;
*/



/// TEST :   Sauvgarder_emprunt() ;

/*
projet.Sauvgarder_emprunt("Emprunt.txt");

*/
/// TEST :    rechercher_Livre

/*
projet.Listerlivre();
cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"<<projet.rechercher_Livre("Liv0002").toStringU()<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
projet.Listerlivre();

*/


/*
Livre A ("rfggg",projet.rechercher_Auteur("Aut0001"),"Intitule_",5);
projet.Listerlivre();
cout<< "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";*/


/// TEST 2 :  AJOUTER  Emprunt
/*
projet.Ajouter_livre("livre_de_test",projet.rechercher_Auteur("Aut0002"),"no_theme_",5);
cout<<"\n EMPRUNTS AVANT: : "<<endl;
projet.Lister_Emprunts();
projet.Ajouter_Emprunt(projet.rechercher_Livre_Par_Titre("livre_de_test"),stg4);
cout<<"\n EMPRUNTS APRES l'AJOUT  : "<<endl;
projet.Lister_Emprunts();

*/

/*
cout<<"\n LIVRES: "<<endl;
projet.Listerlivre();

*/


        return 0;
}

