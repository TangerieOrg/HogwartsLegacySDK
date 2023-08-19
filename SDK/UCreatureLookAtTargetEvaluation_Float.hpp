#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UCreatureLookAtTargetEvaluation.hpp"
#pragma pack(push, 1)
class UCreatureLookAtTargetEvaluation_Float : public UCreatureLookAtTargetEvaluation {
public:
    FVector2D ValueRange; // 0x28
    FVector2D MultiplierRange; // 0x30
    static UCreatureLookAtTargetEvaluation_Float* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
