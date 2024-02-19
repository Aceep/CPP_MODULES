#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>


template<typename T>
void print(T& s) {
	std::cout << s << '\n';
}

template<class T,size_t N>
size_t length(T a[N]){
    (void)a;
    return N;
}

template <typename T> void iter(T *array, int len, void (*f)(T const &)) 
{
    if (len < 0 || !array || !f)
        return ;
    int lenght = sizeof(&array);
    for (int i = 0; i < len && i < lenght + 1; i++) 
        f(array[i]);
}

template <typename T, typename S>
void iter(T* array, int len, void (*fun)(S&))
{
    if (len <= 0 || !array || !fun)
        return ;
    int lenght = sizeof(&array);
    for (int i = 0; i < len && i < lenght + 1; i++) {
        fun(array[i]);
    }
}
#endif //ITER_HPP