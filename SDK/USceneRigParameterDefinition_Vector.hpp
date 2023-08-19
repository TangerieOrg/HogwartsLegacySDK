#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "USceneRigParameterDefinition.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition_Vector : public USceneRigParameterDefinition {
public:
    FVector DefaultValue; // 0x38
    char pad_44[0x4];
    static USceneRigParameterDefinition_Vector* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
