// Rename.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<int> pages;
    for (int i = 0; i < n; i++) {
        int p;
        std::cin >> p;
        std::cin.ignore();
        pages.push_back(p);
    }

    std::sort(pages.begin(), pages.end());

    // Comma separated ordered list of pages with consecutive pages printed as pn-pm
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            std::cout << ",";
        }

        int start = pages[i];
        int end = pages[i];

        while (i + 1 < n && pages[i + 1] - pages[i] == 1) {
            end = pages[i + 1];
            i++;
        }

        if (start == end) {
            std::cout << start;
        }
        else {
            std::cout << start << "-" << end;
        }
    }

    std::cout << std::endl;

    return 0;
}
