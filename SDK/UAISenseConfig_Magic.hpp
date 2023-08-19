#pragma once
#include <cstdint>
#include "FAISenseAffiliationFilter.hpp"
#include "UAISenseConfig.hpp"
#pragma pack(push, 1)
class UAISenseConfig_Magic : public UAISenseConfig {
public:
    float MagicSensingRange; // 0x48
    float LoSMagicSensingRange; // 0x4c
    uint8_t bUseLoSMagicSensing : 1; // 0x50
    uint8_t pad_bitfield_50_1 : 7;
    char pad_51[0x3];
    FAISenseAffiliationFilter DetectionByAffiliation; // 0x54
    static UAISenseConfig_Magic* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
