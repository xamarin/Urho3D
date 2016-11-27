#pragma once

namespace Urho3D
{

enum CallbackType
{
    Component_OnSceneSet,
    Component_SaveXml,
    Component_LoadXml,
    Component_AttachedToNode,
    Component_OnNodeSetEnabled,

    RefCounted_AddRef,
    RefCounted_Delete,
    
    Log_Write
};

class Mono
{
public:
    static void Callback(CallbackType type, void* target = 0, void* param1 = 0, int param2 = 0, const char* param3 = 0);
};

#if UWP
#define stringdup _strdup
#else
#define stringdup strdup
#endif

}