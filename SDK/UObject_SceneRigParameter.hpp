#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_Object.hpp"
#include "UObjectProvider.hpp"
#pragma pack(push, 1)
class UObject_SceneRigParameter : public UObjectProvider {
public:
    FSceneRigParameterBinding_Object BoundParameter; // 0x28
    static UObject_SceneRigParameter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
