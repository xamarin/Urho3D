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
    static void Callback(CallbackType type, void* target = nullptr, void* param1 = nullptr, void* param2 = nullptr, void* param3 = nullptr, void* param4 = nullptr);
};

}