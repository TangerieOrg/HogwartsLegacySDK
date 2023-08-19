#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_Float.hpp"
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_SceneRigParameter : public UFloatProvider {
public:
    FSceneRigParameterBinding_Float BoundParameter; // 0x28
    static UFloat_SceneRigParameter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
