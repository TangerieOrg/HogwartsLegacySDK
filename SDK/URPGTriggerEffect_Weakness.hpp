#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_Weakness : public URPGTriggerEffect_Base {
public:
    float Duration; // 0x40
    char pad_44[0x4];
    static URPGTriggerEffect_Weakness* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
