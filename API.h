#include <iostream>
using namespace std;

template<typename T>
struct Array {
    int resultSize;
    T* resultData;

    Array(int resultSize, T* resultData) :
        resultSize(resultSize), resultData(resultData) {}
};

class Service {
public:
    void createUser(int id, double homeX, double homeY) {}
    void createStore(int id, double storeX, double storeY) {}

    // discount = -1 daca userul nu a cumparat nimic si, astfel nu s-a acordat discount
    void visit(int timestamp, int clientId, int storeId, int discount) {}
    void invite(int userWhichInvites, int invitedUser) {}

    // numar de vizite in intervalul (startTime, endTime)
    int visitsInTimeframe(int startTime, int endTime) {
        return 0;
    }

    // discount total in intervalul (startTime, endTime)
    int totalDiscountInTimeframe(int startTime, int endTime) {
        return 0;
    }

    // Returneaza un Array de k elemente cu id-urile user-ilor
    // Buy to discount rate se calculeaza in felul urmator
    // buy = numarul de vizite in care user-ul a cumparat ceva (discount > 0)
    // total = discount-ul total pe care utilizatorul la primit (excluzand vizitele cu discount = -1)
    // buyToDiscountRate = buy / total
    Array<int> usersWithBestBuyToDiscountRate(int K) {
        return Array<int>(0, nullptr);
    }

    // numar de vizite in intervalul (startTime, endTime) pentru magazinul storeId
    int visitsInTimeframeOfStore(int startTime, int endTime, int storeId) {
        return 0;
    }

    // cele mai mari discount-uri acordate in magazinul storeId
    Array<int> biggestKDiscounts(int K, int storeId) {
        return Array<int>(0, nullptr);
    }

    // cele mai mari distante de la care vin clientii la magazinul storeId
    Array<double> biggestKClientDistances(int K, int storeId) {
        return Array<double>(0, nullptr);
    }

    // Returneaza un array cu index-ul zilelor cele mai aglomerate
    // Index-ul unei zile este timestamp / (24 * 3600)
    // In cazul in care 2 zile au acelasi numar de vizite 
    // in output va trebuie sa apara prima cea care are indicele mai mic
    Array<int> mostCrowdedKDays(int K, int storeId) {
        return Array<int>(0, nullptr);
    }

    // Returneaza un array cu dimensiunile grupurilor de utilizatori
    Array<int> distinctGroupsOfUsers() {
        return Array<int>(0, nullptr);
    }

    // Id-ul userului care a invitat cei mai multi utilizatori
    // Daca sunt doi cu aceeasi valoare, se va intoarce id-ul minim
    int userWithMostInvites() {
        return 0;
    }

    // Lungimea celui mai lung lant de invitatii
    // Lungimea lantului se masoara ca numar de invitatii
    // A invita B => Lungime 1
    // A invita B, B invita C => Lungime 2
    int longestInvitesChainSize() {
        return 0;
    }

    // Id-urile grupurilor cu cele mai multe invitatii overall
    // Id-ul unui grup se considera minimul id-urilor utilizatorilor din acel grup
    Array<int> topKGroupsWithMostVisitsOverall(int K) {
        return Array<int>(0, nullptr);
    }

    // O lista de perechi de forma (idGrup, numarMediuDeVizite)
    // Id-ul unui grup se considera minimul id-urilor utilizatorilor din acel grup
    Array<pair<int, double>> averageVisitsPerUser() {
        return Array<pair<int, double>>(0, nullptr);
    }

    // Returneaza latitudine si longitudine pentru locatia recomandata pentru un nou magazin
    pair<double, double> newStoreCoordinates() {
        return pair<double, double>(0,0);
    }
};
