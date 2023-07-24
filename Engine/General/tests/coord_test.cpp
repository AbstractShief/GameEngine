/*File "coord_test.cpp" create by debial, (Пн 24 июл 2023 13:46:20)*/
#include <gtest/gtest.h>
#include "../structure/coord/coord.h"
// Тестирование конструктора и геттеров
TEST(Vector2ITest, ConstructorAndGetter) {
    Vector2I vector(3, 4);
    EXPECT_EQ(vector.x, 3);
    EXPECT_EQ(vector.y, 4);
}
// Тестирование операторов сложения и вычитания
TEST(Vector2ITest, AdditionAndSubtractionOperators) {
    Vector2I vector1(3, 4);
    Vector2I vector2(1, 2);
    Vector2I result1 = vector1 + vector2;
    Vector2I result2 = vector1 - vector2;
    EXPECT_EQ(result1.x, 4);
    EXPECT_EQ(result1.y, 6);
    EXPECT_EQ(result2.x, 2);
    EXPECT_EQ(result2.y, 2);
}
// Тестирование операторов умножения и деления на скаляр
TEST(Vector2ITest, MultiplicationAndDivisionOperatorsByScalar) {
    Vector2I vector(2, 3);
    Vector2I result1 = vector * 2;
    Vector2I result2 = vector / 2;
    EXPECT_EQ(result1.x, 4);
    EXPECT_EQ(result1.y, 6);
    EXPECT_EQ(result2.x, 1);
    EXPECT_EQ(result2.y, 1);
}
// Тестирование метода Module()
TEST(Vector2ITest, ModuleMethod) {
    Vector2I vector(3, 4);
    double module = vector.Module();
    EXPECT_EQ(module, 5);
}
// Тестирование метода Dot()
TEST(Vector2ITest, DotMethod) {
    Vector2I vector1(2, 3);
    Vector2I vector2(4, 5);
    double dotProduct = vector1.Dot(vector2);
    EXPECT_EQ(dotProduct, 23);
}
// Тестирование метода AngleWith()
TEST(Vector2ITest, AngleWithMethod) {
    Vector2I vector1(1, 0);
    Vector2I vector2(0, 1);
    double angle = vector1.AngleWith(vector2);
    EXPECT_DOUBLE_EQ(angle, 0.0);
}
// Тестирование оператора равенства
TEST(Vector2ITest, EqualityOperator) {
    Vector2I vector1(2, 3);
    Vector2I vector2(2, 3);
    Vector2I vector3(4, 5);
    EXPECT_EQ(vector1, vector2);
    EXPECT_FALSE(vector1==vector3);
}
// Тестирование оператора присваивания
TEST(Vector2ITest, AssignmentOperator) {
    Vector2I vector1(2, 3);
    Vector2I vector2(4, 5);
    vector2 = vector1;
    EXPECT_EQ(vector1, vector2);
}
// Тестирование операторов присваивания с вычитанием
TEST(Vector2ITest, AssignmentOperatorsWithSubtraction) {
    Vector2I vector1(5, 7);
    Vector2I vector2(2, 3);
    vector2 -= vector1;
    EXPECT_EQ(vector2.x, -3);
    EXPECT_EQ(vector2.y, -4);
}
// Тестирование метода ToString()
TEST(Vector2ITest, ToStringMethod) {
    Vector2I vector(3, 4);
    const char* result = vector.ToString();
    // Проверяем, что результат соответствует ожидаемой строке
    EXPECT_STREQ(result, "Vector2I x:3 y:4");
    // Удаляем временный массив символов, выделенный в ToString()
    delete[] result;
}
