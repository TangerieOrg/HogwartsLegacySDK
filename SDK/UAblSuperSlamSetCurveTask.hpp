#pragma once
#include <cstdint>
#include "FAblSuperSlamCurveData.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSuperSlamSetCurveTask : public UAblAbilityTask {
public:
    TArray<FAblSuperSlamCurveData> Curves; // 0x70
    static UAblSuperSlamSetCurveTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
