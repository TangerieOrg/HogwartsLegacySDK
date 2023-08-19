#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_FOV : public UCogGroupEvaluation {
public:
    float FOV; // 0x30
    bool bAutoAcceptIfFootprintOverlap; // 0x34
    bool bUseTargetFootprintForFOV; // 0x35
    bool bIgnoreForSticky; // 0x36
    char pad_37[0x1];
    static UCogGroupEvaluation_FOV* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
