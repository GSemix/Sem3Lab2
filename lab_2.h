#pragma once /* Защита от двойного подключения заголовочного файла */

template <class T>
inline bool getNum (T &num) {
    if (!(std::cin >> num)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        return false;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return true;
}
