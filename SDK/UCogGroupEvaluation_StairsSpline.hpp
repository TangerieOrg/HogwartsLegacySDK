#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_StairsSpline : public UCogGroupEvaluation {
public:
    float MaxAngleIntoSpline; // 0x30
    float MaxDistanceFromSpline; // 0x34
    static UCogGroupEvaluation_StairsSpline* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
