#pragma once
#include <cstdint>
#include "USceneRigStage_ParameterValue.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class USceneRigStage_FloatValue : public USceneRigStage_ParameterValue {
public:
    UFloatProvider* Provider; // 0x28
    static USceneRigStage_FloatValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
