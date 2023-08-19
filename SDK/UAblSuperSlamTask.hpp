#pragma once
#include <cstdint>
#include "FAblSuperSlamCurveData.hpp"
#include "UAblAbilityTask.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class UAblSuperSlamTask : public UAblAbilityTask {
public:
    TArray<FAblSuperSlamCurveData> Curves; // 0x70
    TArray<UMultiFX2_Base*> HitFx; // 0x80
    static UAblSuperSlamTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
