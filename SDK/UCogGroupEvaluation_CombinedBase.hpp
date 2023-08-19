#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_CombinedBase : public UCogGroupEvaluation {
public:
    float FOV; // 0x30
    float NearDistance; // 0x34
    float FarDistance; // 0x38
    float NearHeightUp; // 0x3c
    float NearHeightDown; // 0x40
    float FarHeightUp; // 0x44
    float FarHeightDown; // 0x48
    char pad_4c[0x4];
    static UCogGroupEvaluation_CombinedBase* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
