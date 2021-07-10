#include <iostream>
/*
    Singleton Class for the Chocolate Boiler.

    lazy evaluated, thread safe and destroyed
    returns a reference rather than a pointer.
*/

namespace ChocOHolic
{
    class ChocolateBoiler
    {
    public:
        // methods of the class 
        void Fill()
        {
            if (IsEmpty())
            {
                m_Empty = false;
                m_Boiled = false;
                std::cout << "Filled the Boiler!\n";
                return;
            }
            std::cout << "!! Issue on Fill !!\n";
        }

        void Drain()
        {
            if (!IsEmpty() && IsBoiled())
            {
                m_Empty = true;
                std::cout << "Draining the boiled milk and chocolate\n";
                return;
            }

            std::cout << "!! Issue on Drain !!\n";
        }

        void Boil()
        {
            if (!IsEmpty() && !IsBoiled())
            {
                m_Boiled = true;   
                std::cout <<"Boiling the milk and chocolate\n";
                return;
            }

            std::cout << "!! Issue on Boil !!\n";
        }

        inline bool IsEmpty()  {return m_Empty;}
        inline bool IsBoiled() {return m_Boiled;}
        // Static way to get an instance of the ChocolateBoiler;
        static ChocolateBoiler& GetInstance() 
        {
            static ChocolateBoiler instance;                      // caruanteed to be destroyed and instantiated on first use.
            return instance;
        }


        // disable various ways that the class can be instantiated.
        ChocolateBoiler(ChocolateBoiler&&)       = delete;        // move  constructor
        ChocolateBoiler(const ChocolateBoiler &) = delete;        // copy constructor
        void operator=(const ChocolateBoiler &)  = delete;        // assignment operator

    private:
        ChocolateBoiler() {};                                     // private constructor
        bool m_Empty{true};
        bool m_Boiled{false};
    };
}
