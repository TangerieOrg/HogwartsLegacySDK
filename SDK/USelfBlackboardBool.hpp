#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfBlackboardBool : public UQualifierConsideration {
public:
    FName BlackboardKeyName; // 0x28
    static USelfBlackboardBool* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
