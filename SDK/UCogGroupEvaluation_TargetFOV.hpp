#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_TargetFOV : public UCogGroupEvaluation {
public:
    bool bUsePerceiverFootprintForFOV; // 0x30
    char pad_31[0x7];
    static UCogGroupEvaluation_TargetFOV* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
