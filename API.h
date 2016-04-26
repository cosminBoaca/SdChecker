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

    void visit(int timestamp, int clientId, int storeId, int discount) {}
    void invite(int userWhichInvites, int invitedUser) {}

    int visitsInTimeframe(int startTime, int endTime) {
        return 0;
    }

    int totalDiscountInTimeframe(int startTime, int endTime) {
        return 0;
    }

    // Returneaza un Array cu id-urile user-ilor
    Array<int> usersWithBestBuyToDiscountRate(int K) {
        return Array<int>(0, nullptr);
    }

    int visitsInTimeframeOfStore(int startTime, int endTime, int storeId) {
        return 0;
    }

    Array<int> biggestKDiscounts(int K, int storeId) {
        return Array<int>(0, nullptr);
    }

    Array<double> biggestKClientDistances(int K, int storeId) {
        return Array<double>(0, nullptr);
    }

    // Returneaza un array cu intervalele de timp. Fiecare pair contine startTime, endTime
    Array<pair<int, int>> mostCrowdedKTimeFrames(int K, int storeId) {
        return Array<pair<int, int>>(0, nullptr);
    };

    // Returneaza un array cu dimensiunile grupurilor de utilizatori
    Array<int> distinctGroupsOfUsers() {
        return Array<int>(0, nullptr);
    }

    int userWithMostInvites() {
        return 0;
    }

    // Lungimea celui mai lung de invitatii
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
    };
    // Asta cu zona nu o putem testa automat
};
