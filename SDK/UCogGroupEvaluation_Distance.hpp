#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_Distance : public UCogGroupEvaluation {
public:
    float NearDistance; // 0x30
    float FarDistance; // 0x34
    static UCogGroupEvaluation_Distance* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
