#pragma once
#include <cstdint>
#include "USceneRigStage_ParameterValue.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneRigStage_TransformValue : public USceneRigStage_ParameterValue {
public:
    UTransformProvider* Provider; // 0x28
    static USceneRigStage_TransformValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
