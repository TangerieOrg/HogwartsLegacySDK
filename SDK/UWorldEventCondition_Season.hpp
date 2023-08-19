#pragma once
#include <cstdint>
#include "ESeasonEnum.hpp"
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_Season : public UWorldEventCondition {
public:
    TArray<ESeasonEnum> SeasonsToCheck; // 0x38
    static UWorldEventCondition_Season* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
