#include <algorithm> // Provides copy function
#include <cassert>   // Provides assert function
#include "my_bag.h"
#include <iostream>
using namespace std;



    void set::insert(const value_type& entry)
    {
        assert(size() < CAPACITY);
        
        data[used] = entry;
        ++used;
        
    }
    
  
    
    bool set::contains(const value_type& target) const
    {
        size_type index;
        
        for(index = 0; index < used; index++)
        {
            if (data[index] == target)
                
                return true;
        }
        return false;
            
    }


    void set::display()
    {
        if (used == 0)
        {
            cout << "The set is empty" << endl;
            
        }
        else
        {
            return display();
        }
    }



