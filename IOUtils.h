//
// Created by boaca on 25/04/16.
//

#ifndef SDCHECKER_CHECKERUTILS_H_H
#define SDCHECKER_CHECKERUTILS_H_H

#include <iostream>
#include <set>
#include <vector>
#include <utility>
using namespace std;

template<class T>
ostream& operator << (ostream& out, const multiset<T>& iterable) {
    out << "(";
    for (const auto& elem : iterable) {
        out << elem << " ";
    }
    out << ")";
    return out;
}

template<class T>
ostream& operator << (ostream& out, const vector<T>& iterable) {
    out << "(";
    for (const auto& elem : iterable) {
        out << elem << " ";
    }
    out << ")";
    return out;
}

template<class K, class V>
istream& operator >> (istream& in, pair<K, V>& p) {
    in >> p.first >> p.second;
    return in;
};

template<class T>
istream& operator >> (istream& in, vector<T>& v) {
    for (auto& elem : v) {
        in >> elem;
    }
    return in;
}

#endif //SDCHECKER_CHECKERUTILS_H_H
