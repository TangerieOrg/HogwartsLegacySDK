#pragma once
#include <cstdint>
#include "EDaysOfTheWeek.hpp"
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_DaysOfTheWeek : public UWorldEventCondition {
public:
    TArray<EDaysOfTheWeek> DaysToCheck; // 0x38
    static UWorldEventCondition_DaysOfTheWeek* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
