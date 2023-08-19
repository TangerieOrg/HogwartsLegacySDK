#pragma once
#include <cstdint>
#include "ETransformFunction.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class ULoopingTransformComponent : public USceneComponent {
public:
    ETransformFunction ScaleZFunction; // 0x220
    char pad_221[0x3];
    float CurvePeriod; // 0x224
    float CurveAmplitude; // 0x228
    bool bApplyCurveCumulatively; // 0x22c
    char pad_22d[0x3];
    float RandomOffsetMax; // 0x230
    char pad_234[0x4c];
    static ULoopingTransformComponent* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
