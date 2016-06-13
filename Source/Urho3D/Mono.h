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
    RefCounted_Delete
};

class Mono
{
public:
    static void Callback(CallbackType type, void* target = 0, void* param1 = 0, void* param2 = 0, void* param3 = 0, void* param4 = 0);
};

}