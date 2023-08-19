#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class URPGCondition : public UObject {
public:
    bool ConditionMetWhenTrue; // 0x28
    char pad_29[0x7];
    static URPGCondition* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
