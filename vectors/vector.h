// creating our own vector class
template<typename T>
class Vector {
    // Data Member
    T *arr;
    int current;
    int maxSize;

    // Methods
    public: 

        Vector ()
        {
            current=0;
            maxSize = 1;
            arr = new T[maxSize];
        }

        // adds the given element at the last of vector
        void push_back(const T num)
        {
            if(current == maxSize) // make a new array with double the size
            {
                T *oldArray = arr;
                maxSize = 2*maxSize;
                arr = new T[maxSize];

                // copy elements from old array
                for(int i=0; i<current; i++)
                    arr[i] = oldArray[i];
                
                // delete old array
                delete [] oldArray;
            }
            arr[current] = num;
            current++;
        }

        // deletes the last element of the vector
        void pop_back()
        {
            if(current >= 0)
                current--;
        }

        //  returns true if the vector is empty
        bool isEmpty() const
        {
            return current == 0;
        }

        //  returns the first element of the vector
        T front() const
        {
            return arr[0];
        }

        //  returns the last element of the vector
        T back() const
        {
            return arr[current-1];
        }

        //  returns the element at the given position
        T at(int i)  const
        {
            return arr[i];
        }

        // returns the size of the vector
        int size() const
        {
            return current;
        }

        // returns the capacity of the vector
        int capacity() const
        {
            return maxSize;
        }

        // can use [] in place of at()
        T operator[](const int i) const{
            return arr[i];
        }
};