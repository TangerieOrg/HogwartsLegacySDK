#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class URPGTriggerEffect_MultiFX2 : public URPGTriggerEffect_Base {
public:
    TArray<UMultiFX2_Base*> FX2; // 0x40
    char pad_50[0x8];
    static URPGTriggerEffect_MultiFX2* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
