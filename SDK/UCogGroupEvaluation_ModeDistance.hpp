#pragma once
#include <cstdint>
#include "UCogGroupEvaluation_Distance.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_ModeDistance : public UCogGroupEvaluation_Distance {
public:
    float PriorityNearDistance; // 0x38
    float PriorityFarDistance; // 0x3c
    static UCogGroupEvaluation_ModeDistance* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
