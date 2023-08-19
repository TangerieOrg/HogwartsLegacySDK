#pragma once
#include <cstdint>
#include "USceneRigStage_ParameterValue.hpp"
class UBoolProvider;
#pragma pack(push, 1)
class USceneRigStage_BoolValue : public USceneRigStage_ParameterValue {
public:
    UBoolProvider* Provider; // 0x28
    static USceneRigStage_BoolValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
