# Calculator 

## Описание проекта

Данный проект представляет собой консольное приложение-калькулятор, которое позволяет выполнять базовые арифметические операции: сложение, вычитание, умножение и деление. Программа считывает пользовательский ввод, анализирует строку и вычисляет результат.

### Основные файлы проекта

- `main.cpp`: Содержит функцию `main` для запуска программы.
- `calc.h`: Заголовочный файл с описанием класса `Calculation` и вспомогательных функций.
- `calc.cpp`: Реализация всех функций, определённых в `calc.h`.



## Использование

1. **Компиляция**:
   ```bash
   g++ -o calculator main.cpp calc.cpp

2. **Запуск программы**
   ```bash
   ./calculator
   ```

3. **Ввод арифметических выражений**
   Например:
   ```
   5 + 10 * 2 - 3 / 1
   ```
   После ввода программа вычислит результат и отобразит его.

4. **Завершение работы**
   Введите:
   ```
   quit
   ```

---

## Пример работы

### Ввод:
```text
10 + 20 * 3
```

### Вывод:
```text
result 70
```

### Ввод:
```text
quit
```

---

## Возможности

- **Поддержка операций**:
  - Сложение (`+`)
  - Вычитание (`-`)
  - Умножение (`*`)
  - Деление (`/`)
  
- **Обработка ошибок**:
  - Деление на ноль:

  - Некорректный ввод:

  - Лишние или дублирующиеся операторы:
  
  - Некорректное число:
    
  
