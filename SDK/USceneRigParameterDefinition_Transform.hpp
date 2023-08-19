#pragma once
#include <cstdint>
#include "USceneRigParameterDefinition.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneRigParameterDefinition_Transform : public USceneRigParameterDefinition {
public:
    UTransformProvider* DefaultValue; // 0x38
    static USceneRigParameterDefinition_Transform* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
