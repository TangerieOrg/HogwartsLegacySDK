#pragma once
#include <cstdint>
#include "UObject.hpp"
class URPGCondition;
#pragma pack(push, 1)
class URPGTriggerEffect_Base : public UObject {
public:
    TArray<URPGCondition*> Conditions; // 0x28
    char pad_38[0x8];
    static URPGTriggerEffect_Base* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
