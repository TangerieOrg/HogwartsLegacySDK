#pragma once
#include <cstdint>
#include "ERPGModInputTags.hpp"
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ModifyModBlackboardValue : public URPGTriggerEffect_Base {
public:
    ERPGModInputTags Tag; // 0x40
    float ModificationValue; // 0x44
    static URPGTriggerEffect_ModifyModBlackboardValue* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
