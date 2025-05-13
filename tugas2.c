#include <stdio.h>

// 1. No Argument Passed and No Return Value
void welcomeMessage() {
    printf("Selamat datang di program pengolahan data siswa!\n");
}

// 2. Argument Passed but No Return Value
void printStudentID(int npm) {
    int square = npm * npm;
    printf("NPM Anda adalah: %d\n", npm);
    printf("Kuadrat dari NPM Anda adalah: %d\n", square);
}

// 3. No Argument Passed but Return Value
int inputExamScore() {
    int score;
    printf("Masukkan nilai ujian: ");
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
    int npm = 2408007010029; // Ganti dengan NPM Anda
    printStudentID(npm);

    // Fungsi 3
    int uts = inputExamScore();
    int uas = inputExamScore();

    // Fungsi 4
    float finalScore = calculateFinalScore(uts, uas);
    printf("Nilai akhir Anda adalah: %.2f\n", finalScore);

    return 0;
}
