#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_Int.hpp"
#include "UIntProvider.hpp"
#pragma pack(push, 1)
class UInt_SceneRigParameter : public UIntProvider {
public:
    FSceneRigParameterBinding_Int BoundParameter; // 0x28
    static UInt_SceneRigParameter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
