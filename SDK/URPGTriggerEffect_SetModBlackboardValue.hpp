#pragma once
#include <cstdint>
#include "ERPGModInputTags.hpp"
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_SetModBlackboardValue : public URPGTriggerEffect_Base {
public:
    ERPGModInputTags Tag; // 0x40
    float Value; // 0x44
    static URPGTriggerEffect_SetModBlackboardValue* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
