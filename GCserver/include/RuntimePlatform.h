#ifndef RUNTIMEPLATFORM_H
#define RUNTIMEPLATFORM_H


class RuntimePlatform
{
    public:
        enum
        {
            WINDOWS = 0,
            LINUX,
            OSX,
        };

    RuntimePlatform& getPlatform();
    protected:
    private:
};



#endif // RUNTIMEPLATFORM_H
