#include <stdio.h>

// 1. No Argument Passed and No Return Value
void welcomeMessage() {
    printf("Selamat datang di program pengolahan data siswa!\n");
}

// 2. Argument Passed but No Return Value
void printStudentID(unsigned long long int npm) {
    unsigned long long int square = npm * npm;
    printf("NPM Anda adalah: %llu\n", npm);
    printf("Kuadrat dari NPM Anda adalah: %llu\n", square);
//jika angkanya terlalu banyak, maka akan terjadi error. karena unsigned long long int tidak sanggup menampungnya
}

// 3. No Argument Passed but Return Value
int inputExamScore() {
    int score;
    scanf("%d", &score);
    return score;
}

// 4. Argument Passed and Has Return Value
float calculateFinalScore(int score1, int score2) {
    return (score1 + score2) / 2.0;
}

int main() {
    // Fungsi 1
    welcomeMessage();

    // Fungsi 2
    unsigned long long int npm = 2408007010029; // Ubah ke NPM Anda
    printStudentID(npm);

    // Fungsi 3
    printf("Masukkan nilai uts: ");
    int uts = inputExamScore();
    printf("Masukkan nilai uas: ");
    int uas = inputExamScore();

    // Fungsi 4
    float finalScore = calculateFinalScore(uts, uas);
    printf("Nilai akhir Anda adalah: %.2f\n", finalScore);

    return 0;
}
