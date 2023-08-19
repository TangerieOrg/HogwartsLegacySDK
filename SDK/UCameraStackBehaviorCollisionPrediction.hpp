#pragma once
#include <cstdint>
#include "UCameraStackBehaviorCollisionBase.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCollisionPrediction : public UCameraStackBehaviorCollisionBase {
public:
    float ForwardPredictionTime; // 0x210
    float ForwardPredictionStep; // 0x214
    int32_t SweepCountPerUpdate; // 0x218
    float SecondsBetweenSweeps; // 0x21c
    bool bCheckForEyeOverlap; // 0x220
    char pad_221[0x3];
    float BlendExponent; // 0x224
    float MinCollisionInterpSpeed; // 0x228
    float GridCellSize; // 0x22c
    float GridPointThreshold; // 0x230
    float GridDirectionThreshold; // 0x234
    char pad_238[0x80];
    static UCameraStackBehaviorCollisionPrediction* StaticClass();
}; // Size: 0x2b8
#pragma pack(pop)
