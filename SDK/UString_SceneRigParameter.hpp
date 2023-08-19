#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_FString.hpp"
#include "UStringProvider.hpp"
#pragma pack(push, 1)
class UString_SceneRigParameter : public UStringProvider {
public:
    FSceneRigParameterBinding_FString BoundParameter; // 0x28
    static UString_SceneRigParameter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
