# Курсы 1С (задание 131)

## Постановка задачи

Программа получает на вход:

1. Таблицу зависимостей курсов

2. Приоритеты для курсов 2-го уровня

3. Выбранные курсы 3-го и 5-го уровней

4. Минимальное число курсов, которое нужно закрыть в каждом семестре

Программа должна вывести список курсов, которые следует выбрать. Они должны удовлетворять описанными выше условиям.

Выбранных курсов должно быть как можно меньше.

Если минимальное количество набирается несколькими различными списками курсов, то среди них выберите с максимальной суммой приоритетов.

## Сборка проекта

```bash
mkdir build
cd build
cmake ..
make
```
