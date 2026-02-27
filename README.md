# Raylib C++ Project

Простой проект на C++ с использованием библиотеки [raylib](https://www.raylib.com/).

## Требования

### macOS (Apple Silicon/Intel)
Установите `raylib` через Homebrew:
```bash
brew install raylib
```

### Linux (Ubuntu/Debian)
Установите `raylib` через пакетный менеджер:
```bash
sudo apt install libraylib-dev
```

### Windows
1. Скачайте библиотеку с [официального сайта](https://www.raylib.com/) или используйте [vcpkg](https://github.com/microsoft/vcpkg):
   ```bash
   vcpkg install raylib
   ```
2. Настройте пути в `Makefile` (укажите свои пути к заголовочным файлам и библиотекам).

## Сборка и запуск

Проект использует `Makefile` для сборки. **Внимание:** `Makefile` на macOS настроен под пути Homebrew (`/opt/homebrew`). Если вы используете другую ОС, создайте свой `Makefile` с правильными путями.

### Команды:
*   `make` — скомпилировать проект.
*   `make run` — скомпилировать и запустить.
*   `make clean` — очистить временные файлы.

## Структура проекта
*   `main.cpp` — основной файл с кодом.
*   `Makefile` — настройки сборки (игнорируется git для совместимости между ОС).
*   `.gitignore` — исключает системные файлы и настройки редактора.

---
Удачи в разработке!
