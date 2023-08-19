#pragma once
#include <cstdint>
#include "USceneRigStage_ParameterValue.hpp"
class UStringProvider;
#pragma pack(push, 1)
class USceneRigStage_StringValue : public USceneRigStage_ParameterValue {
public:
    UStringProvider* Provider; // 0x28
    static USceneRigStage_StringValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
