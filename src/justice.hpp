#include <iostream>

class justice {
    private:
    int ID;
    std::string lastName;

    public:
    /**
     * Constructor
     * 
     * first: default
     * second: 
     * @param ID a unique identifiers for each justice
     * @param lastName the last name of the justice
     */
    justice();
    justice(int ID, std::string lastName);
};