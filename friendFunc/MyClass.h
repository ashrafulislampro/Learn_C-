class MyClass{
    public:
        MyClass();
    private:
        int regVar;
    
    friend void someFunc(MyClass &obj);
};