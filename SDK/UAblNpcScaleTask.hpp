#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UAblNpcScaleTask : public UAblAbilityTask {
public:
    float ScaleStart; // 0x70
    float ScaleEnd; // 0x74
    bool bScaleToPreviousValue; // 0x78
    bool bRestoreScaleAtTaskEnd; // 0x79
    bool bUseCurve; // 0x7a
    char pad_7b[0x5];
    UCurveFloat* Curve; // 0x80
    static UAblNpcScaleTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
