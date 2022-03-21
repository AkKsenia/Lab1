#include "library.h"
#include "menu.h"

typedef struct square_matrix {
    int size_of_matrix;
    int type_of_elements;
    void* pointer_object;//pointer without type
} matrix;

typedef struct complex_number {//implementation of complex numbers
    int real;
    int imaginary;
} complex;



int* put_numbers_from_string_to_array(char* numbers, const int kol_vo_of_chosen)
{
    int* numb = NULL;
    numb = (int*)malloc(kol_vo_of_chosen * sizeof(int));
    istringstream flow(numbers);//converting stream elements (symbols) to numbers
    for (int i = 0; i < kol_vo_of_chosen; ++i)
        flow >> numb[i];
    return numb;
    free(numb);
}



void show_the_matrix(matrix* m, int type_of_elements) {
    for (int i = 0; i < m->size_of_matrix; i++) {
        for (int j = 0; j < m->size_of_matrix; j++) {
            if (m->type_of_elements == 1) {
                printf("%d  ", *((int*)m->pointer_object + (i *ter_object = malloc(sizeof(int) * size_of_matrix * size_of_matrix);
    m->type_of_elements = type_of_elements;
    m->size_of_matrix = size_of_matrix;
    for (int i = 0; i < m->size_of_matrix; i++) {
        for (int j = 0; j < m->size_of_matrix; j++) {
            if (type_of_elements == 1) {
                if (way_of_filling == '1') {
                    printf("Enter %dx%d matrix element: ", i, j);
                    scanf("%d", (int*)m->pointer_object + (i * m->size_of_matrix) + j);
                } else *((int*)m->pointer_object + (i * m->size_of_matrix) + j) = rand();
            }
            else if (way_of_filling == '1') {
                printf("Enter %dx%d matrix element in the format [a b], where a and b are the real and imaginary parts of the complex number (a +bi): ", i, j);
                scanf("%d %d", &(((complex*)m->pointer_object + (i * m->size_of_matrix) + j)->real), &(((complex*)m->pointer_object + (i * m->size_of_matrix) + j)->imaginary));
            }
            else {
                ((complex*)m->pointer_object + (i * m->size_of_matrix) + j)->real = rand();
                ((complex*)m->pointer_object + (i * m->size_of_matrix) + j)->imaginary = rand();
            }   
        }
    }
    return m;
    free(m->pointer_object);
    delete[]m;
}
matrix* fill_the_matrices(matrix* square_matrix[], int kol_vo_of_matrices) {
    char c0, c1, c2;
    int size_of_matrix;
    for (int i = 0; i < kol_vo_of_matrices; i++) {
        cout << i + 1 << ":\n";
        do {
            menu1();
            cin >> c0;
            cin.ignore(1024, '\n');
            cout << endl;
            switch (c0) {
            case '1':
                cout << "Enter the size of the future square matrix: ";
                cin >> size_of_matrix;
                           square_matrix[i] = fill_the_matrix(1, size_of_matrix, c2);
                break;
            default: cout << "Incorrectly selected number! Try to enter it again!\n"; cout << endl;
            }
        } while ((c0 != '1') && (c0 != '2'));
    }
    return *square_matrix;
}



matrix* multiplication_of_two_matrices(matrix* a, matrix* b) {
    int sum_real = 0;
    int sum_imaginary = 0;
    int sum = 0;
    int size = a->size_of_matrix;
    matrix* m = new matrix[size];
    m->pointer_object = malloc(sizeof(int) * size * size);
    m->size_of_matrix = size;
    if (a->type_of_elements == b->type_of_elements) {
        m->type_of_elements = a->type_of_elements;
        if (a->type_of_elements == 1) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    for (int r = 0; r < size; r++) {
                        sum = sum + (*((int*)acomplex*)a->pointer_object + (i * size) + r)->imaginary * ((complex*)b->pointer_object + (r * size) + j)->real);
                    }
                    ((complex*)m->pointer_object + (i * size) + j)->real = sum_real;
                    ((complex*)m->pointer_object + (i * size) + j)->imaginary = sum_imaginary;
                    sum_real = 0;
                    sum_imaginary = 0;
                }
            }
        }
    }
    else if (a->type_of_elements == 1) {
        m->type_of_elements = b->type_of_elements;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                for (int r = 0; r < size; r++) {
                    sum_real = sum_real + (*((int*)a->pointer_object + (i * size) + r) * ((complex*)b->pointer_object + (r * size) + j)->real);
                    sum_imaginary = sum_imaginary + (*((int*)a->pointer_object + (i * size) + r) * ((complex*)b->pointer_object + (r * size) + j)->imaginary);
                }
                ((complex*)m->pointer_object + (i * size) + j)->real = sum_real;
                ((complex*)m->pointer_object + (i * size) + j)->imaginary = sum_imaginary;
                sum_real = 0;
                sum_imaginary = 0;
            }
        }
    }
    else {
        m->type_of_elements = a->type_of_elements;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                for (int r = 0; r < size; r++) {
                    sum_real = sum_real + (((complex*)a->pointer_object + (i * size) + r)->real * *((int*)b->pointer_object + (r * size) + j));
                    sum_imaginary = sum_imaginary + (((complex*)a->pointer_object + (i * size) + r)->imaginary * *((int*)b->pointer_object + (r * size) + j));
                }
e = square_matrix[numbers1[0] - 1]->size_of_matrix;
        matrix* multiplication = new matrix[size];
        multiplication = square_matrix[numbers1[0] - 1];
        for (int j = 1; j < kol_vo_of_chosen; j++) {
            if (multiplication->size_of_matrix == (square_matrix[numbers1[j] - 1]->size_of_matrix)) {
                multiplication = multiplication_of_two_matrices(multiplication, square_matrix[numbers1[j] - 1]);
            }
            else {
                flag = 1;
                break;
            }
        }
        if (flag != 1) {
            show_the_matrix(multiplication, multiplication->type_of_elements);
            cout << "\n" << endl;
        }
        else cout << "The sizes of some of the matrices you entered do not match. Please try to make a different choice!\n" << endl;
        delete[]multiplication;
    }
    else { cout << "Matrices with some numbers do not exist. Please be careful!\n" << endl; }
    delete[]numbers1;
}



void multiply_by_number(matrix* square_matrix[], int kol_vo_of_matrices) {
    int number, index;
    cout << "With which matrix do you plan to perform this action? Enter her number: ";
    while (!(cin >> index) || (index < 1) || ((index > kol_vo_of_matrices))) {
        cout << "Input error!\n";
        cout << "With which matrix do you plan to perform this action? Enter her number: ";
    }
    printf("\n");
    cout << "Enter the number by which you plan to multiply the matrix: ";
    cin >> number;
    printf("\n");
    int size = square_matrix[index - 1]->size_of_matrix;
    matrix* m = new matrix[size];
    m->pointer_object = malloc(sizeof(int) * size * size);
    m->type_of_elements = square_matrix[index - 1]->type_of_elements;
    m->size_of_matrix = size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (square_matrix[indint i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (a->type_of_elements == b->type_of_elements) {
                m->type_of_elements = a->type_of_elements;
                if (a->type_of_elements == 1) {
                    *((int*)m->pointer_object + (i * size) + j) = *((int*)a->pointer_object + (i * size) + j) + *((int*)b->pointer_object + (i * size) + j);
                }
                else {
                    ((complex*)m->pointer_object + (i * size) + j)->real = ((complex*)a->pointer_object + (i * size) + j)->real + ((complex*)b->pointer_object + (i * size) + j)->real;
                    ((complex*)m->pointer_object + (i * size) + j)->imaginary = ((complex*)a->pointer_object + (i * size) + j)->imaginary + ((complex*)b->pointer_object + (i * size) + j)->imaginary;
                }

            }
            elst);
    delete[]m;
}
void sum_of_matrices(matrix* square_matrix[], char* numbers, int kol_vo_of_matrices, int kol_vo_of_chosen) {//wrong-wrong!!!
    int flag = 0;
    int flag1 = 0;
    int o = 0;
    int* numbers1 = new int[kol_vo_of_chosen];
    numbers1 = put_numbers_from_string_to_array(numbers, kol_vo_of_chosen);
    for (int i = 0; i < kol_vo_of_chosen; i++) {
        for (int k = 0; k < kol_vo_of_matrices; k++) {
            if (numbers1[i] - 1 == k) {
                ++o;
            }
        }
        if (o == 0) {
            flag1 = 1;
        }
        o = 0;
    }
    if (flag1 != 1) {
        int size = square_matrix[numbers1[0] - 1]->size_of_matrix;
        matrix* sum = new matrix[size];
        sum = square_matrix[numbers1[0] - 1];
        for (int j = 1; j < kol_vo_of_chosen; j++) {
            if (sum->size_of_matrix == (square_matrix[numbers1[j] - 1]->size_of_matrix)) {
                sum = sum_of_two_matrices(sum, square_matrix[numbers1[j] - 1]);
            }
            else {
                flag = 1;
                break;
            }
        }
        if (flag != 1) {
            show_the_matrix(sum, sum->type_of_elements);
            cout << "\n" << endl;
        }
        else cout << "The sizes of some of the matrices you entered do not match. Please try to make a different choice!\n" << endl;
        delete[]sum;
    }
    else { cout << "Matrices with some numbers do not exist. Please be careful!\n" << endl; }
    delete[]numbers1;
}



int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    cout << "Be careful when entering the appropriate numbers or symbols!" << endl;
    cout << endl;
    int flag = 0, lighthouse = 0;
    int kol_vo_of_chosen;
    cout << "***Square matrices***\n";
    int kol_vo_of_matrix, helper;
    cout << "Enter the number of matrices you in   ++lighthouse;
            break;
        case '2':
            do {
                menu3();
                cin >> c1;
                cin.ignore(1024, '\n');
                cout << endl;
                switch (c1) {
                case '1':
                    printf("\n");
                    if (kol_vo_of_matrix >= 2) {
                        cout << "You have entered more than one matrix. How many of them do you want to add up? Specify the quantity: ";
                        while (!(cin >> kol_vo_of_chosen) || (kol_vo_of_chosen < 2) || ((kol_vo_of_chosen > kol_vo_of_matrix))) {
                            cout << "Input error!\n";
                            cout << "You have entered more than one matrix. How many of them do you want to add up? Specify the quantity: ";
                        }
                        cin.ignore(1024, '\n');
                        cout << endl;
                        cout <             cout << "Input error!\n";
                            cout << "You have entered more than one matrix. How many of them do you want to add up? Specify the quantity: ";
                        }
                        cin.ignore(1024, '\n');
                        cout << endl;
                        cout << "Which ones do you want to multiply? Enter their numbers separated by a space: ";
                        cin.getline(numbers, 100);
                        cout << endl;
                        multiplication_of_matrices(&set_of_matrices, numbers, kol_vo_of_matrix, kol_vo_of_chosen);
                    }
                    else {
                        cout << "You have created only one matrix, to perform this action, you must have at least two. Fix the situation as soon as possible!\n" << endl;
                    }
                    break;
                case '3':
                    printf("\n");
                    multiply_by_number(&set_of_matrices, kol_vo_of_matrix);
                    break;
                default: cout << "Incorrect menu item!\n";
                }
            } while ((c1 != '1') && (c1 != '2') && (c1 != '3'));
            flag = 0;
            ++lighthouse;
            break;
        default: flag = 0; cout << "Incorrect menu item!\n";
        }
    } while (1 == 1);
    delete[]set_of_matrices;
    delete[]numbers;
    return 0;
} m->size_of_matrix) + j));//*(s+i)=s[i]
            }
            else {
                printf("%d + ", ((complex*)m->pointer_object + (i * m->size_of_matrix) + j)->real);
                printf("%di ", ((complex*)m->pointer_object + (i * m->size_of_matrix) + j)->imaginary);
            }
        }
        printf("\n");
    }
}
void show_the_set_of_matrices(matrix* square_matrix[], int kol_vo_of_matrices) {
    system("cls");
    for (int i t << "Enter the size of the future square matrix: ";
                cin >> size_of_matrix;
                cout << endl;
                menu2();
                while (!(cin >> c2) || (c2 != '1') && (c2 != '2')) {
                    cout << endl;
                    cout << "Incorrectly selected number! Try to enter it again!\n";
                    cout << endl;
                    menu2();
                }
                cout << endl;
  ->pointer_object + (i * size) + r)) * (*((int*)b->pointer_object + (r * size) + j));
                    }
                    *((int*)m->pointer_object + (i * size) + j) = sum;
                    sum = 0;
                }
            }
        }
        else {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    for (int r = 0; r < size; r++) {
                        sum_real = sum_real + (((ag1 = 0;
    int o = 0;
    int* numbers1 = new int[kol_vo_of_chosen];
    numbers1 = put_numbers_from_string_to_array(numbers, kol_vo_of_chosen);
    for (int i = 0; i < kol_vo_of_chosen; i++) {
        for (int k = 0; k < kol_vo_of_matrices; k++) {
            if (numbers1[i] - 1 == k) {
                ++o;
            }
        }
        if (o == 0) {
            flag1 = 1;
        }
        o = 0;
    }
    if (flag1 != 1) {
        int sizex - 1]->type_of_elements == 1) {
                *((int*)m->pointer_object + (i * size) + j) = *((int*)square_matrix[index - 1]->pointer_object + (i * size) + j) * number;
            }
            else {
                ((complex*)m->pointer_object + (i * size) + j)->real = ((complex*)square_matrix[index - 1]->pointer_object + (i * size) + j)->real * number;
                ((complex*)m->pointer_object + (i * size) + j)->imaginary = ((complex* m->type_of_elements = a->type_of_elements;
                ((complex*)m->pointer_object + (i * size) + j)->real = ((complex*)a->pointer_object + (i * size) + j)->real + *((int*)b->pointer_object + (i * size) + j);
                ((complex*)m->pointer_object + (i * size) + j)->imaginary = ((complex*)a->pointer_object + (i * size) + j)->imaginary;
            }
        }
    }
    return m;
    free(m->pointer_objectend to create: ";
    while (!(cin >> kol_vo_of_matrix) || (kol_vo_of_matrix <= 0)) {
        cout << "Input error!\n";
        cout << "Enter the number of matrices you intend to create: ";
    }
    cout << endl;
    matrix* set_of_matrices = new matrix[kol_vo_of_matrix];
    char* numbers = new char[100];
    char c, c1;
    do {
        while (flag != 1) {
            menu();
            cin >> c;
            cin.ignore(1024, '\n');
            cout << endl;
            if ((c == '2') && (lighthouse == 0)) { cout << "You have not created any matrix, correct the situation as soon as possible!\n" << endl; }
            else { flag = 1; }
        }
        switch (c) {
        case '1':
            system("cls");
            set_of_matrices = fill_the_matrices(&set_of_matrices, kol_vo_of_matrix);
            show_the_set_of_matrices(&set_of_matrices, kol_vo_of_matrix);
            flag = 0;
         < "Which ones do you want to add up? Enter their numbers separated by a space: ";
                        cin.getline(numbers, 100);
                        cout << endl;
                        sum_of_matrices(&set_of_matrices, numbers, kol_vo_of_matrix, kol_vo_of_chosen);
                    }
                    else {
                        cout << "You have created only one matrix, to perform this action, you must have at least two. Fix the situation as soon as possible!\n" << end     menu2();
                while (!(cin >> c1) || (c1 != '1') && (c1 != '2')) {
                    cout << endl;
                    cout << "Incorrectly selected number! Try to enter it again!\n";
                    cout << endl;
                    menu2();
                }
                cout << endl;
                square_matrix[i] = fill_the_matrix(1, size_of_matrix, c1);
                break;
            case '2':
                coucomplex*)a->pointer_object + (i * size) + r)->real * ((complex*)b->pointer_object + (r * size) + j)->real) - (((complex*)a->pointer_object + (i * size) + r)->imaginary * ((complex*)b->pointer_object + (r * size) + j)->imaginary);
                        sum_imaginary = sum_imaginary + (((complex*)a->pointer_object + (i * size) + r)->real * ((complex*)b->pointer_object + (r * size) + j)->imaginary) + (((                ((complex*)== 1) {
                m->type_of_elements = b->type_of_elements;
                ((complex*)m->pointer_object + (i * size) + j)->real = *((int*)a->pointer_object + (i * size) + j) + ((complex*)b->pointer_object + (i * size) + j)->real;
                ((complex*)m->pointer_object + (i * size) + j)->imaginary = ((complex*)b->pointer_object + (i * size) + j)->imaginary;
            }
            else {
               l;
                    }
                    break;
                case '2':
                    printf("\n");
                    if (kol_vo_of_matrix >= 2) {
                        cout << "You have entered more than one matrix. How many of them do you want to add up? Specify the quantity: ";
                        while (!(cin >> kol_vo_of_chosen) || (kol_vo_of_chosen < 2) || ((kol_vo_of_chosen > kol_vo_of_matrix))) {
               = 0; i < kol_vo_of_matrices; i++) {
        cout << i + 1 << " " << "Square matrix:\n";
        show_the_matrix(square_matrix[i], square_matrix[i]->type_of_elements);
        cout << "----------------------------------------------------------";
        cout << endl;
    }
    cout << endl;
}



matrix* fill_the_matrix(int type_of_elements, int size_of_matrix, char way_of_filling) {
    matrix* m = new matrix[size_of_matrix];
    m->poin   cout << endl;
           m->pointer_object + (i * size) + j)->real = sum_real;
                ((complex*)m->pointer_object + (i * size) + j)->imaginary = sum_imaginary;
                sum_real = 0;
                sum_imaginary = 0;
            }
        }
    }
    return m;
    free(m->pointer_object);
    delete[]m;
}
void multiplication_of_matrices(matrix* square_matrix[], char* numbers, int kol_vo_of_matrices, int kol_vo_of_chosen) {
    int flag = 0;
    int fl)square_matrix[index - 1]->pointer_object + (i * size) + j)->imaginary * number;
            }
        }
    }
    show_the_matrix(m, m->type_of_elements);
    printf("\n");
    free(m->pointer_object);
    delete[]m;
}



matrix* sum_of_two_matrices(matrix* a, matrix* b) {
    int size = a->size_of_matrix;
    matrix* m = new matrix[size];
    m->pointer_object = malloc(sizeof(int) * size * size);
    m->size_of_matrix = size;
    for (e if (a->type_of_elements 
