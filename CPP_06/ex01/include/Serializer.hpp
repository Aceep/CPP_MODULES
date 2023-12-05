#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

typedef struct s_data
{
    int     number;
} Data;

class Serializer
{
    private :
            Serializer();
            ~Serializer();
            Serializer(const Serializer& src);
            Serializer& operator=(const Serializer& src);

    public :
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif  // SERIALIZER_HPP