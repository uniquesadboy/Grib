#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void readSection1(std::ifstream& file) {
    int section1Length;
    file.read(reinterpret_cast<char*>(&section1Length), sizeof(section1Length));
    std::cout << "======================\n";
    std::cout << "==  Section 1 Data  ==\n";
    std::cout << "======================\n";
    std::cout << "Section 1 length: " << section1Length << "\n";
}

void readSection2(std::ifstream& file) {
    int section2Length;
    file.read(reinterpret_cast<char*>(&section2Length), sizeof(section2Length));
    std::cout << "======================\n";
    std::cout << "==  Section 2 Data  ==\n";
    std::cout << "======================\n";
    std::cout << "Section 2 length: " << section2Length << "\n";

}

void readSection4(std::ifstream& file) {
    int section4Length;
    file.read(reinterpret_cast<char*>(&section4Length), sizeof(section4Length));
    std::cout << "======================\n";
    std::cout << "==  Section 4 Data  ==\n";
    std::cout << "======================\n";
    std::cout << "Section 4 length: " << section4Length << "\n";
}

int main() {
    const char* filename = "all.grib";
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    readSection1(file);
    readSection2(file);
    readSection4(file);

    file.close();
    return 0;
}