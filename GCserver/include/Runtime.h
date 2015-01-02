#ifndef RUNTIME_H
#define RUNTIME_H


class Runtime
{
    public:
        Runtime();
        virtual ~Runtime();

        enum Platform
        {
            WINDOWS = 0,
            LINUX,
            OSX,
        }p;
        Platform getPlatform();
    protected:
    private:
};

#endif // RUNTIME_H
