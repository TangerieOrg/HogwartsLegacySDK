#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_Vector.hpp"
#include "UVectorProvider.hpp"
#pragma pack(push, 1)
class UVector_SceneRigParameter : public UVectorProvider {
public:
    FSceneRigParameterBinding_Vector BoundParameter; // 0x28
    static UVector_SceneRigParameter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
