# GEMS
Gems C++ (OpenGL)
shared_ptr - использовались в функциях с циклами, а также в структуре игрового поля, для того чтобы избежать утечек памяти. 
Виртуальные функции использовались для производных классов, в частности для отрисовки элементов поля, а также в одном из моментов, когда я имел доступ только к элементам базового класса (т.к базовый класс ничего не знает о производных классах), но мне нужно было достать  элемент производного класса, который хранился в указателе базового. 
В частности: имеется элемент типа shared_ptr <Elem>, в него помещается производный класс reColor, reColor имеет в своей структуре данные о цвете rgb prevColor, в то время как Elem таких данных не имеет и ничего не знает о существовании reColor, но у Elem есть пустая виртуальная функция GetColor(), которая у класса reColor возвращает prevColor. 
Наследование использовалось для поддержки  игрового поля, так как каждый элемент поля является базовым классом Elem, но имеет свои методы, свои свойства и тд.