#pragma once 

namespace CPP
{
    /*
        Singleton example based on https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
    */

    class Singleton
    {
    public:
        static Singleton& GetInstance() 
        {
            static Singleton instance;  // caruanteed to be destroyed and instantiated on first use.
            return instance;
        }
        Singleton(Singleton&&) = delete;        // move  constructor
        Singleton(const Singleton &) = delete;   // copy constructor
        void operator=(const Singleton &)=delete; // assignment operator

        std::string GetMsg(){return "This is a singleton";}
    private:
        Singleton() {}; // private Constructor, Class can only be instantiated from inside. 

    };

}