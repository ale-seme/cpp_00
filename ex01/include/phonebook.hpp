
class phonebook{
private:
    char *contacts[8];

public:
    phonebook(){};
    phonebook(char *contact)
    {
        contacts[0] = contact;
    }
};

class   contact{
private:
    char *first_name;
    char *last_name;
    char *nickname;
    char *phone_number;
    char *darkest_secret;
};