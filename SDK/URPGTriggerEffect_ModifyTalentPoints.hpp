#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ModifyTalentPoints : public URPGTriggerEffect_Base {
public:
    int32_t TalentPointModification; // 0x40
    char pad_44[0x4];
    static URPGTriggerEffect_ModifyTalentPoints* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
