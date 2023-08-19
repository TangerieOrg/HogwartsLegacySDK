#pragma once
#include <cstdint>
#include "FAISenseAffiliationFilter.hpp"
#include "UAISenseConfig.hpp"
class UClass;
#pragma pack(push, 1)
class UAISenseConfig_Hearing : public UAISenseConfig {
public:
    UClass* Implementation; // 0x48
    float HearingRange; // 0x50
    float LoSHearingRange; // 0x54
    uint8_t bUseLoSHearing : 1; // 0x58
    uint8_t pad_bitfield_58_1 : 7;
    char pad_59[0x3];
    FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
    static UAISenseConfig_Hearing* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
