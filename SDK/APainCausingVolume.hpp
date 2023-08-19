#pragma once
#include <cstdint>
#include "APhysicsVolume.hpp"
class UClass;
class AController;
#pragma pack(push, 1)
class APainCausingVolume : public APhysicsVolume {
public:
    uint8_t bPainCausing : 1; // 0x290
    uint8_t pad_bitfield_290_1 : 7;
    char pad_291[0x3];
    float DamagePerSec; // 0x294
    UClass* DamageType; // 0x298
    float PainInterval; // 0x2a0
    uint8_t bEntryPain : 1; // 0x2a4
    uint8_t BACKUP_bPainCausing : 1; // 0x2a4
    uint8_t pad_bitfield_2a4_2 : 6;
    char pad_2a5[0x3];
    AController* DamageInstigator; // 0x2a8
    char pad_2b0[0x8];
    static APainCausingVolume* StaticClass();
}; // Size: 0x2b8
#pragma pack(pop)
