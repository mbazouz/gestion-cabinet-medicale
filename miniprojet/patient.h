typedef struct dates DATES;
struct dates
{
    int mois;
    int jour;
    int annee;
};


typedef struct Patient Patient;
struct Patient
{
    char nom[20];
    char prenom[20];
    DATES nv_date;
    DATES date_naissance;
    DATES rdv;
    long carte_identite;
};


