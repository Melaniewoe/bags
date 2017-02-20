#ifndef WOE_SET_H
#define WOE_SET_H
#include <cstdlib>  // Provides size_t


    class set
    {
    public:
        // TYPEDEFS and MEMBER CONSTANTS
        typedef int value_type;
        typedef size_t size_type;
        static const size_type CAPACITY = 30;
        
        // CONSTRUCTOR
        set( ) { used = 0; }
    
        
        // MODIFICATION MEMBER FUNCTIONS
        void insert(const value_type& entry);
        void operator +=(const set& addend);
        void display();
        void remove(const value_type& elem);
       
        
        // CONSTANT MEMBER FUNCTIONS
        size_type size( ) const { return used; }
        bool contains(const value_type& target) const;
        void print() const; // prints the elements of the set
        
        
    private:
        value_type data[CAPACITY];  // The array to store items
        size_type used;             // How much of array is used
    };



#endif
