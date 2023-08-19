#pragma once
#include <cstdint>
#include "USceneRigParameterDefinition.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition_Bool : public USceneRigParameterDefinition {
public:
    bool DefaultValue; // 0x38
    char pad_39[0x7];
    static USceneRigParameterDefinition_Bool* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
