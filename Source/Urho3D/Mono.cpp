#include "Mono.h"

namespace Urho3D
{

typedef void(*MonoNativeCallback)(CallbackType, void*, void*, int, const char*);
MonoNativeCallback nativeCallback;

extern "C"
#ifdef _MSC_VER
__declspec(dllexport)
#endif
void RegisterMonoNativeCallbacks(MonoNativeCallback callback)
{
    nativeCallback = callback;
}

void Mono::Callback(CallbackType type, void * target, void * param1, int param2, const char * param3)
{
    if (nativeCallback)
        nativeCallback(type, target, param1, param2, param3);
}

}