#include "pch.h"
#include "CppUnitTest.h"
#include "../program/program.cpp"
#include "../program/menu.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod2)
        {
            int k_actual = 0;
            int k_expected = 4;
            matrix* a = new matrix[2];
            a->pointer_object = malloc(sizeof(int) * 2 * 2);
            a->type_of_elements = 1;
            a->size_of_matrix = 2;
            *((int*)a->pointer_object + (0 * a->size_of_matrix) + 0) = 1;
            *((int*)a->pointer_object + (0 * a->size_of_matrix) + 1) = 2;
            *((int*)a->pointer_object + (1 * a->size_of_matrix) + 0) = 3;
            *((int*)a->pointer_object + (1 * a->size_of_matrix) + 1) = 4;
            matrix* b = new matrix[2];
            b->pointer_object = malloc(sizeof(int) * 2 * 2);
            b->type_of_elements = 1;
            b->size_of_matrix = 2;
            *((int*)b->pointer_object + (0 * b->size_of_matrix) + 0) = 1;
            *((int*)b->pointer_object + (0 * b->size_of_matrix) + 1) = 0;
            *((int*)b->pointer_object + (1 * b->size_of_matrix) + 0) = 0;
            *((int*)b->pointer_object + (1 * b->size_of_matrix) + 1) = 2;
            matrix* expected = new matrix[2];
            expected->pointer_object = malloc(sizeof(int) * 2 * 2);
            expected->type_of_elements = 1;
            expected->size_of_matrix = 2;
            *((int*)expected->pointer_object + (0 * expected->size_of_matrix) + 0) = 1;
            *((int*)expected->pointer_object + (0 * expected->size_of_matrix) + 1) = 4;
            *((int*)expected->pointer_object + (1 * expected->size_of_matrix) + 0) = 3;
            *((int*)expected->pointer_object + (1 * expected->size_of_matrix) + 1) = 8;
            matrix* actual = multiplication_of_two_matrices(a, b);
            for (int i = 0; i < expected->size_of_matrix; i++) {
                for (int j = 0; j < expected->size_of_matrix; j++) {
                    if ((*((int*)expected->pointer_object + (i * expected->size_of_matrix) + j)) == *((int*)actual->pointer_object + (i * actual->size_of_matrix) + j)) {
                        ++k_actual;
                    }
                }
            }
            Assert::AreEqual(k_expected, k_actual);
        }
    };
}
