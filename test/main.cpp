#define CTEST_MAIN
#define CTEST_COLOR_OK
#include <ctest.h>
#include <foo.h>

char** dos = new char*[8];

int main(int argc, const char** argv)
{
        for (int i = 0; i < 8; i++) {
        dos[i] = new char[8];
        for (int j = 0; j < 8; j++) {
            if (i == 1)
                dos[i][j] = 'p';
            else if (i == 6)
                dos[i][j] = 'P';
            else if ((j == 0 || j == 7) && i == 0)
                dos[i][j] = 'l';
            else if ((j == 0 || j == 7) && i == 7)
                dos[i][j] = 'L';
            else if ((j == 1 || j == 6) && i == 0)
                dos[i][j] = 'k';
            else if ((j == 1 || j == 6) && i == 7)
                dos[i][j] = 'K';
            else if ((j == 2 || j == 5) && i == 0)
                dos[i][j] = 's';
            else if ((j == 2 || j == 5) && i == 7)
                dos[i][j] = 'S';
            else if (j == 4 && i == 0)
                dos[i][j] = 'q';
            else if (j == 4 && i == 7)
                dos[i][j] = 'Q';
            else if (j == 3 && i == 0)
                dos[i][j] = 'f';
            else if (j == 3 && i == 7)
                dos[i][j] = 'F';
            else
                dos[i][j] = '0';
        }
    return ctest_main(argc, argv);
}

CTEST(convert_test, result_test)
{
    // Given
    const char x1[] = "e2-e4";

    // When
    const char* result = convert(x1);

    // Then
    const char* expected = "41-43";
    ASSERT_EQUAL(expected, result);
}

CTEST(elephant_test, result_test)
{
    // Given
    const char x1[] = "50-72";

    // When
    elephant(dos, x1);
    const char result = 's';

    // Then
    const char* expected = dos[2][7];
    ASSERT_EQUAL(expected, result);
}

CTEST(hourse_test, result_test)
{
    // Given
    const char x1[] = "10-22";

    // When
    hourse(dos, x1);
    const char result = 'k';

    // Then
    const char* expected = dos[2][2];
    ASSERT_EQUAL(expected, result);
}

CTEST(king_test, result_test)
{
    // Given
    const char x1[] = "40-50";

    // When
    king(dos, x1);
    const char result = 'k';

    // Then
    const char* expected = dos[0][4];
    ASSERT_EQUAL(expected, result);
}


CTEST(move_test, result_test)
{
    // Given
    const char x1[] = "41-43";

    // When
    move(dos, x1);
    const char result = 'p';

    // Then
    const char* expected = dos[3][4];
    ASSERT_EQUAL(expected, result);
}

CTEST(quin_test, result_test)
{
    // Given
    const char x1[] = "30-63";

    // When
    quin(dos, x1);
    const char result = 'f';

    // Then
    const char* expected = dos[3][6];
    ASSERT_EQUAL(expected, result);
}

CTEST(rook_test, result_test)
{
    // Given
    const char x1[] = "00-03";

    // When
    rook(dos, x1);
    const char result = 'l';

    // Then
    const char* expected = dos[3][0];
    ASSERT_EQUAL(expected, result);
}