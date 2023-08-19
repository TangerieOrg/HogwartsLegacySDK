#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_Bool.hpp"
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_SceneRigParameter : public UBoolProvider {
public:
    FSceneRigParameterBinding_Bool BoundParameter; // 0x28
    static UBool_SceneRigParameter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
