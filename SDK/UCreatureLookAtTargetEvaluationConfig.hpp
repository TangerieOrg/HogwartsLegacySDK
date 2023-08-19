#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UCreatureLookAtTargetEvaluation;
#pragma pack(push, 1)
class UCreatureLookAtTargetEvaluationConfig : public UDataAsset {
public:
    float ThresholdScore; // 0x30
    char pad_34[0x4];
    TArray<UCreatureLookAtTargetEvaluation*> EvaluationArray; // 0x38
    static UCreatureLookAtTargetEvaluationConfig* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
