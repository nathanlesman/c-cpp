#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>
#include <cstddef>

class Data
{
    public:
        enum Type
        {
            DOUBLE,
            WORD,
            VALUE,
            NUM_TYPES  // Used for array sizes
        };

    private:
        union DataUnion
        {
            double *u_double;
            std::string u_word;
            size_t u_value;

            DataUnion() {}    // Default constructor
            ~DataUnion() {}   // Default destructor
        };
        
        DataUnion d_union;
        static constexpr size_t ARRAY_SIZE = 10;

        // Destroy functions
        void destroyDouble();
        void destroyWord();
        void destroyValue();

        // Copy functions
        void copyDouble(Data const &other);
        void copyWord(Data const &other);
        void copyValue(Data const &other);

        // Move functions
        void moveDouble(Data &&tmp);
        void moveWord(Data &&tmp);
        void moveValue(Data &&tmp);

        // Swap functions for all combinations
        void swapDoubleDouble(Data &other);
        void swapDoubleWord(Data &other);
        void swapDoubleValue(Data &other);
        void swapWordDouble(Data &other);
        void swapWordWord(Data &other);
        void swapWordValue(Data &other);
        void swapValueDouble(Data &other);
        void swapValueWord(Data &other);
        void swapValueValue(Data &other);

        // Static arrays of member function pointers
        static void (Data::*s_destroy[NUM_TYPES])();
        static void (Data::*s_copy[NUM_TYPES])(Data const &);
        static void (Data::*s_move[NUM_TYPES])(Data &&);
        static void (Data::*s_swap[NUM_TYPES][NUM_TYPES])(Data &);

    public:
        // Constructors
        explicit Data(double *values);        // Takes ownership
        explicit Data(std::string const &str);
        explicit Data(size_t value);

        // Copy constructor with type info
        Data(Data const &other, Type type);

        // Move constructor with type info
        Data(Data &&tmp, Type type) noexcept;

        // Destructor needs type info
        void destroy(Type type);

        // Accessors
        double *getDouble() const;
        std::string const &getWord() const;
        size_t getValue() const;

        // Swap with type info
        void swap(Data &other, Type thisType, Type otherType);
};

#endif
