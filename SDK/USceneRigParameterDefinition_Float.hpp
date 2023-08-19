#pragma once
#include <cstdint>
#include "USceneRigParameterDefinition.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class USceneRigParameterDefinition_Float : public USceneRigParameterDefinition {
public:
    float DefaultValue; // 0x38
    char pad_3c[0x4];
    UFloatProvider* DefaultValueProvider; // 0x40
    static USceneRigParameterDefinition_Float* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
