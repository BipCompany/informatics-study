К сожалению, я не могу напрямую создать и отправить вам PDF-файл, так как работаю только с текстом. Но вы можете **легко превратить любой текст из этого чата в PDF** за пару минут. Вот как это сделать:

### 📄 Как сохранить план в PDF
1. **Выделите и скопируйте** текст моего ответа (или всего диалога).
2. Вставьте его в **Word**, **Google Docs** или **Любой текстовый редактор**.
3. Нажмите «Файл» → «Сохранить как PDF» или «Печать» → выберите «Сохранить как PDF».

Я подготовил для вас **полный и самодостаточный текст роадмапа** – вы можете скопировать его ниже и сразу отправить на печать/сохранение. Там собраны все источники, недельные планы, ссылки и советы из наших обсуждений.

---

## 📘 Полный роадмап по олимпиадному программированию для 9 класса  
**(с июня по декабрь, от призёра региона до победителя/призёра всероса)**

### Цели
- **Исходный уровень:** Призёр регионального этапа ВсОШ (270 баллов из 800).
- **Цель на декабрь:** Победитель регионального этапа (450+ баллов) → выход на заключительный этап.
- **Ежедневная нагрузка:** 2–3 часа (30 мин теория + 1.5–2 ч задачи).

---

## 📅 План по месяцам

### ☀️ Июнь – Продвинутая рекурсия, перебор, битовые маски
**Теория**
- [Лекция 6: Комбинаторный перебор и рекурсия (PDF)](https://informatics.msk.ru/pluginfile.php/252337/mod_resource/content/0/Zanjatie6.Perebor.pdf)
- [E-maxx: Перебор всех подмасок](http://e-maxx.ru/algo/all_submasks)
- [Лекция по meet-in-the-middle (Codeforces)](https://codeforces.com/blog/entry/100576)

**Задачи** (в порядке сложности)
| № | Задача | Источник |
|---|--------|----------|
| 1 | Все перестановки длины N | [informatics №85](https://informatics.msk.ru/mod/statements/view.php?id=16672&chapterid=85) |
| 2 | Разбиение на неубывающие слагаемые | [informatics №91](https://informatics.msk.ru/mod/statements/view.php?id=11934&chapterid=91) |
| 3 | Правильные скобочные последовательности | [informatics №112934](https://informatics.msk.ru/mod/statements/view.php?id=23327&chapterid=112934) |
| 4 | Гирьки (три кучки) | [informatics №3096](https://informatics.msk.ru/mod/statements/view.php?id=16065&chapterid=3096) |
| 5 | Meet-in-the-Middle (CF рейтинг 1600–1800) | Codeforces – тег `meet-in-the-middle` |

---

### 📆 Июль – Продвинутые алгоритмы на массивах  
**Теория**
- [E-maxx: Сортировка подсчётом](http://e-maxx.ru/algo/counting_sort)
- [E-maxx: Бинарный поиск](http://e-maxx.ru/algo/binary_search)
- [Два указателя / Two pointers (статья на habr)](https://habr.com/ru/companies/otus/articles/688058/)

**Задачи**
| Тема | Источники |
|------|------------|
| Сортировки (быстрая, слиянием, подсчётом) | Codeforces 1300–1500 с тегом `sortings` |
| Бинарный поиск по ответу | [acmp №86](https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=3&id_topic=34&id_problem=175) (Кладоискатели) |
| Два указателя, сканирующая прямая | Codeforces 1400–1600 `two pointers`, [acmp №201](https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=50&id_problem=602) (Сжатие координат) |
| Тернарный поиск | Codeforces 1500–1700 `ternary search`, [Timus 1408](https://acm.timus.ru/problem.aspx?space=1&num=1408) |

---

### 🧱 Август – Структуры данных (ключевые)
**Теория**
- [E-maxx: DSU (СНМ)](http://e-maxx.ru/algo/dsu)
- [E-maxx: Дерево отрезков](http://e-maxx.ru/algo/segment_tree)
- [E-maxx: Дерево Фенвика](http://e-maxx.ru/algo/fenwick_tree)
- Видео: Тимофей Хирьянов «Дерево отрезков» (YouTube)

**Задачи**
| Тема | Источники |
|------|------------|
| Стек, очередь, дек – окно максимума | [acmp №128](https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=50&id_problem=608), informatics.msk.ru модули |
| DSU (система непересекающихся множеств) | [acmp №178](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=25&id_topic=174&id_problem=1224), Codeforces 1500–1700 `dsu` |
| Дерево отрезков (RSQ, RMQ, ленивые обновления) | [acmp №190](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=25&id_topic=175&id_problem=1246), [informatics «Дерево отрезков»](https://informatics.msk.ru/mod/statements/view.php?id=364) |
| Дерево Фенвика, Sparse Table | Codeforces 1500–1700 `fenwick tree`, [Timus 1563](https://acm.timus.ru/problem.aspx?space=1&num=1563) |

---

### 🌐 Сентябрь – Графы (полный спектр)
**Теория**
- [E-maxx: BFS/DFS](http://e-maxx.ru/algo/dfs)
- [E-maxx: Алгоритм Дейкстры](http://e-maxx.ru/algo/dijkstra)
- [E-maxx: Форд-Беллман, Флойд](http://e-maxx.ru/algo/ford_bellman)
- [E-maxx: Компоненты сильной связности (Тарьян)](http://e-maxx.ru/algo/strong_connected_components)
- [E-maxx: Мосты и точки сочленения](http://e-maxx.ru/algo/bridge_searching)

**Задачи**
| Тема | Источники |
|------|------------|
| BFS/DFS, топологическая сортировка | [acmp №89](https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=49&id_problem=347), [acmp №91](https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=49&id_problem=349) |
| Кратчайшие пути (Дейкстра + куча) | [acmp №96](https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=49&id_problem=354) |
| Компоненты сильной связности | [Timus 1320](https://acm.timus.ru/problem.aspx?space=1&num=1320) |
| Мосты, точки сочленения | [acmp №181](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=25&id_topic=174&id_problem=1227) |
| Минимальные остовы (Крускал) | [acmp №156](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=24&id_topic=163&id_problem=1093) |

---

### 💎 Октябрь – Динамическое программирование (все типы)
**Теория**
- [informatics.msk.ru – раздел ДП (с 1 по 11 темы)](https://informatics.msk.ru/course/view.php?id=9)
- [cp-algorithms.com – Dynamic programming](https://cp-algorithms.com/dynamic_programming/intro-to-dp.html)
- Курс Петра Калинина (на informatics.msk.ru)

**Задачи**
| Тема | Источники |
|------|------------|
| Одномерное/двумерное ДП (кузнечик, черепашка) | [acmp №27](https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=49&id_problem=285), [acmp №53](https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=49&id_problem=311) |
| Рюкзак 0/1, неограниченный | [acmp №212](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=25&id_topic=176&id_problem=1268) |
| НОП, НВП | [acmp №44](https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=49&id_problem=302), Codeforces 1600–1800 `LCS` |
| ДП по подотрезкам (Interval DP) | Codeforces 1700–2000 `interval dp` |
| ДП на деревьях, ДП по профилю | [acmp №214](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=25&id_topic=176&id_problem=1270), [informatics «ДП по изломанному профилю»](https://informatics.msk.ru/mod/statements/view.php?id=242) |

---

### 🔢 Ноябрь – Теория чисел, комбинаторика, геометрия
**Теория**
- [E-maxx: Решето Эратосфена](http://e-maxx.ru/algo/eratosthenes_sieve)
- [E-maxx: Расширенный алгоритм Евклида](http://e-maxx.ru/algo/extended_euclid_algorithm)
- [E-maxx: Комбинаторика](http://e-maxx.ru/algo/combinatorics)
- [E-maxx: Вычислительная геометрия (база)](http://e-maxx.ru/algo/geometry)

**Задачи**
| Тема | Источники |
|------|------------|
| НОД/НОК, решето, факторизация | [acmp №135](https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=49&id_problem=393), [acmp №242](https://acmp.ru/asp/do/index.asp?main=task&id_course=2&id_section=21&id_topic=49&id_problem=500) |
| Комбинаторика (сочетания, перестановки, включения-исключения) | [acmp «Комбинаторика»](https://acmp.ru/asp/do/index.asp?main=cat&cat=34), Codeforces 1700–1900 `combinatorics` |
| Геометрия: векторы, пересечение отрезков | [acmp №233](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=24&id_topic=164&id_problem=1112), [acmp №241](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=24&id_topic=164&id_problem=1120) |
| Выпуклая оболочка (Грэм, Эндрю) | [Timus 1255](https://acm.timus.ru/problem.aspx?space=1&num=1255), [acmp №90](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=24&id_topic=164&id_problem=627) |

---

### 🧵 Декабрь – Строки, потоки и итоговая практика
**Теория**
- [E-maxx: Полиномиальное хеширование](http://e-maxx.ru/algo/string_hashes)
- [E-maxx: Префикс-функция, Z-функция](http://e-maxx.ru/algo/prefix_function)
- [E-maxx: Бор (trie)](http://e-maxx.ru/algo/trie)
- [E-maxx: Алгоритм Ахо-Корасик (базово)](http://e-maxx.ru/algo/aho_corasick)
- [E-maxx: Потоки. Алгоритм Эдмондса-Карпа](http://e-maxx.ru/algo/edmonds_karp)

**Задачи**
| Тема | Источники |
|------|------------|
| Хеширование строк, префикс-функция | Codeforces 1600–1800 `hashing`, [informatics «Строки»](https://informatics.msk.ru/mod/statements/view.php?id=241) |
| Бор (trie) | [acmp №188](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=25&id_topic=175&id_problem=1244), Codeforces 1700–1900 `trie` |
| Паросочетания (алгоритм Куна) | [acmp №210](https://acmp.ru/asp/do/index.asp?main=task&id_course=3&id_section=25&id_topic=176&id_problem=1266), [Timus 1106](https://acm.timus.ru/problem.aspx?space=1&num=1106) |

**Итоговые контесты (декабрь)**
- Решить **муниципальный этап ВсОШ** за последние 3 года (ваш регион) – по 1 контесту в неделю.
- **Codeforces Div. 3 / Div. 2** – 2 виртуальных раунда в неделю.
- Повторить все структуры данных и алгоритмы по чек-листу:
  - DSU, дерево отрезков, Фенвик
  - BFS, DFS, Дейкстра, Форд-Беллман, Флойд
  - Основные ДП (рюкзак, НОП, НВП)
  - Решето, НОД, комбинаторика
  - Хеширование, префикс-функция

---

## 🔁 Советы по насмотренности
- **Ежедневно:** 1 лёгкая задача (CF 1400), 2 по текущей теме, 1 сложная (CF 1900), 1 старая на повторение.
- **Если не решили за 40 минут** → читаем разбор и переписываем код без подглядываний.
- **После каждой задачи** просмотреть 2–3 чужих решения (лучших по времени/памяти) на Codeforces/acmp.
- **Вести таблицу ошибок** (тема, причина, как исправили).

## 🗃️ Полный список источников (единым списком)
| Тип | Ресурсы |
|-----|---------|
| **Базы задач** | [acmp.ru](https://acmp.ru), [informatics.msk.ru](https://informatics.msk.ru), [Timus Online Judge](https://acm.timus.ru), [Codeforces](https://codeforces.com/problemset) |
| **Теория на русском** | [e-maxx.ru](http://e-maxx.ru), лекции Тимофея Хирьянова (YouTube), курс П. Калинина (informatics) |
| **Теория на английском** | [cp-algorithms.com](https://cp-algorithms.com) |
| **Сборники подборок** | GitHub: YarTsin (acmp задач), Gholamrezadar (CF разбивка) |

---

## ❓ Реально ли выйти на всерос?
С вашими 270 баллами и регулярными занятиями (2–3 ч/день) выйти на **победителя регионального этапа (450+)** – **вполне реально**. Призёр заключительного этапа в 9 классе – редкий случай, но не невозможный. Даже если вы не возьмёте диплом всероса в этом году, вы:
- получите бесценный опыт участия в финале,
- заложите фундамент для 10–11 классов,
- сможете претендовать на призёра всероса в следующем сезоне.

---

## 📌 Как сохранить этот текст в PDF
1. **Выделите всё** от начала до конца.
2. **Скопируйте** (Ctrl+C / Cmd+C).
3. Откройте **Word**, **Google Docs** или **Блокнот** (можно даже в браузере).
4. **Вставьте** (Ctrl+V).
5. Нажмите **Файл → Сохранить как PDF** (или через печать: Ctrl+P → выбрать «Сохранить как PDF»).

Если захотите добавить свои заметки или навигацию, поправьте документ перед сохранением. Удачи на олимпиадах! Вы уже доказали, что умеете побеждать – теперь дело за практикой и системой.
