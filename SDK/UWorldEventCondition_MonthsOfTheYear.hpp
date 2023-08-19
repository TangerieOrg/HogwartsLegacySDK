#pragma once
#include <cstdint>
#include "EMonthsOfTheYear.hpp"
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_MonthsOfTheYear : public UWorldEventCondition {
public:
    TArray<EMonthsOfTheYear> MonthsToCheck; // 0x38
    static UWorldEventCondition_MonthsOfTheYear* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
