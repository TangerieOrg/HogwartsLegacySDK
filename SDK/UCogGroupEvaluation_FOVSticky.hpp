#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_FOVSticky : public UCogGroupEvaluation {
public:
    float FOV; // 0x30
    bool bAutoAcceptIfFootprintOverlap; // 0x34
    bool bUseTargetFootprintForFOV; // 0x35
    char pad_36[0x2];
    static UCogGroupEvaluation_FOVSticky* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
