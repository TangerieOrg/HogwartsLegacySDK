#pragma once
#include <cstdint>
#include "ETimeDilationTarget\Type.hpp"
#include "UAblAbilityTask.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UAblTimeDilationTask : public UAblAbilityTask {
public:
    ETimeDilationTarget::Type TimeDilationTarget; // 0x70
    char pad_71[0x7];
    UCurveFloat* TimeDilationCurve; // 0x78
    float TimeDilation; // 0x80
    float EaseInDuration; // 0x84
    bool bCounterWorld; // 0x88
    bool bEndTaskOnReactionDone; // 0x89
    bool bTestAgainstWorldTime; // 0x8a
    char pad_8b[0x5];
    static UAblTimeDilationTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
