#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_LocationSchedule : public UWorldEventCondition {
public:
    FDbSingleColumnInfo LocationID; // 0x38
    static UWorldEventCondition_LocationSchedule* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
