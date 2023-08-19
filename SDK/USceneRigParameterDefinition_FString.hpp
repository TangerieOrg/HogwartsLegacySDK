#pragma once
#include <cstdint>
#include "USceneRigParameterDefinition.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition_FString : public USceneRigParameterDefinition {
public:
    FString DefaultValue; // 0x38
    static USceneRigParameterDefinition_FString* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
