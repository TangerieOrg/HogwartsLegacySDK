#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_Lock : public UWorldEventCondition {
public:
    FDbSingleColumnInfo Lock; // 0x38
    static UWorldEventCondition_Lock* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
