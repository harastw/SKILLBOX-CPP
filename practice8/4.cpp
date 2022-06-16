#include <iostream>
int main()
{
    float fileSize, speed, downloaded = 0, downloadedPersent = 0;
    int timeLeft, i = 0;
    bool checkPassed = 0;
    while (!checkPassed)
    {
        std::cout << "Введите размер файла в мегабайтах и скорость интернет-соединения в мегабайтах в секунду: ";
        std::cin >> fileSize >> speed;
        if (fileSize <= 0 || speed <= 0) std::cout << "Ожидались числа больше нуля\n";
        else checkPassed = 1;
    }
    for (; downloaded < fileSize; i++)
    {
        timeLeft = (int)((fileSize - downloaded) / speed);
        std::cout << "Секунд прошло: " << i << "\nУже Загружено мегабайт: " << downloaded << "\n";
        std::cout << "Загружено в процентах: " << downloadedPersent << "\nОсталось подождать: " <<  timeLeft << "\n\n";
        downloaded += speed;
        downloadedPersent = downloaded * 100 / fileSize;
    }
    std::cout << "Загрузка окончена\nСекунд прошло: " << i << "\nЗагружено мегабайт: " << fileSize << "\nЗагружено в процентах: 100\n";
}