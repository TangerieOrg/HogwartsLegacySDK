#pragma once
#include <cstdint>
#include "USceneRigStage_ParameterValue.hpp"
class UIntProvider;
#pragma pack(push, 1)
class USceneRigStage_IntValue : public USceneRigStage_ParameterValue {
public:
    UIntProvider* Provider; // 0x28
    static USceneRigStage_IntValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
