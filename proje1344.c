#include <stdio.h>
#include <stdlib.h> 

void karakter_tabanli_toplama_simulasyonu() {
    char a_char, b_char;
    int a_deger, b_deger;
    int toplam;

    // Kurallar
    printf(" Tek Haneli Toplama Simulasyonu \n");
    printf("Kural: Girilen sayilarin toplami 9'u gecemez.\n\n");

    //Kullanicidan alınacak giris istekleri
    printf("1. rakami girin (0-9): ");
    if (scanf(" %c", &a_char) != 1) {
        
        return;
    }

    printf("2. rakami girin (0-9): ");
    if (scanf(" %c", &b_char) != 1) {
        
        return;
    }

    // Hata Mesaji
    if ((a_char < '0' || a_char > '9') || (b_char < '0' || b_char > '9')) {
        printf("\nHATA: Lutfen sadece 0-9 arasında bir rakam girin.\n");
        return;
    }

    // Sayisal degere donusum
    const int SIFIR_KODU = (int)'0';
    a_deger = (int)a_char - SIFIR_KODU;
    b_deger = (int)b_char - SIFIR_KODU;

    // Islem Mesajlari
    printf("\n[Islem] 1. Girdi: Karakter '%c' (ASCII: %d) -> Sayıya Donustur: %d\n",
           a_char, (int)a_char, a_deger);
    printf("[Islem] 2. Girdi: Karakter '%c' (ASCII: %d) -> Sayiya Donustur: %d\n",
           b_char, (int)b_char, b_deger);

    // Toplama Islemi
    toplam = a_deger + b_deger;

    // Kısıtlama ve Sonuc
    const int MAX_DEGER = 9;

    if (toplam > MAX_DEGER) {
        // Hata Mesajı
        printf("\n----------------------------------------------------\n");
        printf("!! SINIR ASILDI: %d + %d = %d\n", a_deger, b_deger, toplam);
        printf("!! HATA: Kural geregi sonuc 9'dan buyuk olamaz.\n");
        printf("----------------------------------------------------\n");
    } else {
        // Basarili Toplama
        char sonuc_char = (char)(toplam + SIFIR_KODU);

        // Sonuc Mesajlari
        printf("\n[Islem] Sayisal Toplam: %d\n", toplam);
        printf("[Sonuc] Toplamin Karakter Hali: '%c' (ASCII Kodu: %d)\n", sonuc_char, (int)sonuc_char);
        printf("Basarili Toplama: %d + %d = %d\n", a_deger, b_deger, toplam);
    }
}

int main() {
    karakter_tabanli_toplama_simulasyonu();
    return 0;
}

