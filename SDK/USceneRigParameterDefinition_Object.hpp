#pragma once
#include <cstdint>
#include "USceneRigParameterDefinition.hpp"
class UObjectProvider;
#pragma pack(push, 1)
class USceneRigParameterDefinition_Object : public USceneRigParameterDefinition {
public:
    UObjectProvider* DefaultObject; // 0x38
    bool EvaluateOnce; // 0x40
    char pad_41[0x7];
    static USceneRigParameterDefinition_Object* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
