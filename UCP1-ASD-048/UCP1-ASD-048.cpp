// 1.	Jelaskan bagaimana algoritma Insertion Sort membandingkan serta menukar elemen-elemen?
// jawab: cara Insertion Sort membandingkan serta menukar elemen-elemennya adalah dengan membagi 
// menjadi dua bagian: sorted list (mulai dari index 0) dan unsorted list (mulai dari index 1 sampai seterusnya). setelah sudah terbagi, 
// pindahkan index pertama ke bagian sorted list (lihat nilai index nya,
// jika nilai index 1 lebih dari nilai index 0, maka taruh di belakang index 0,
// jika nilai index 1 kurang dari nilai 0, maka taruh nilai index 1 di depan index 0)
// nilai index akan sesuai dengan urutannya, misal nilai index 1 tadi lebih kecil
// maka nilai index menjadi index 0, lanjut bandingkan index 2 dan seterusnya sampai semua nilai tersortir (urut)

// 2.	Jelaskan bagaimana algoritma Selection Sort membandingkan serta menukar elemen-elemen?
// jawab: cara algoritma selection sort membandingkan dan menukar elemen elemennya adalah dengan 
// mencari nilai paling kecil pada array, lalu menukar nilai paling kecil ke index paling kecil
//misal nilai minimum pertama berada di index 3, maka nilai dari index 3 akan ditukar dengan 
// nilai dari index 0, begitu seterusnya sampai semua nilai sudah tersortir dan urut (urut)


//3. Dalam algorithma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan? Jelaskan!
// cara mengetahui jumlah langkah yang dilakukan adalah menggunakan rumus (n-1)
// n merupakan jumlah data yang akan disortir, misal jumlah data yang akan di sortir ada 6,
// maka akan ada 5 kali langkah (pass)





#include <iostream>
using namespace std;

int olip[48];
int n, j, min_index, i, temp;

void input() {      
    while (true) {
        cout << "Masukan banyaknya olip pada array: ";    
        cin >> n;       
        if (n <= 48)    
            break;
        else {          
            cout << "\nOlip dapat mempunyai maksimal 48 elemen.\n";    
        }
    }
    cout << endl;                               
    cout << "=====================" << endl;  
    cout << "Masukan Elemen Olip" << endl;     
    cout << "=====================" << endl;  

    for (int i = 0; i < n; i++) {   
        cout << "Data ke-" << (i + 1) << ": ";  
        cin >> olip[i];                   
    }
}

void InsertionSort() {
    for (i = 1; i <= n - 1; i++) { //step 1: 

        temp = olip[i]; //step 2

        j = i - 1; //step 3

        while (j >= 0 && olip[j] > temp) //step 4 
        {
            olip[j + 1] = olip[j];            //step 4 a
            j--;                            // step 4b
        }
        olip[j + 1] = temp;      //step 5
    }
}

void display() {
    cout << endl;
    cout << "==================================" << endl;
    cout << "Element Olip yang telah tersusun" << endl;
    cout << "==================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << olip[j];
        if (j < n - 1) {
            cout << " ---> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main()
{
    input();
    InsertionSort();
    display();
    system("pause");

    return 0;
}

