#pragma once
#include <cstdint>
#include "USceneRigParameterDefinition.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition_Int : public USceneRigParameterDefinition {
public:
    int32_t DefaultValue; // 0x38
    char pad_3c[0x4];
    static USceneRigParameterDefinition_Int* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
