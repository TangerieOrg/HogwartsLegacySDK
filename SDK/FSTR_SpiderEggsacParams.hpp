#pragma once
#include <cstdint>
#include "E_BabySpiderType\Type.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FSTR_SpiderEggsacParams {
    E_BabySpiderType::Type SpiderType_15_20B5C604451B271CF661E5BE1F4FE3ED; // 0x0
    char pad_1[0x3];
    float ActivationRadius_5_31F2AAFB40CE3BED93FE1795043B0810; // 0x4
    float ProximityRadius_7_FE0689DB4C43FF53E7873D914890B4B0; // 0x8
    FVector2D SpawnRange_23_FC5837A7491E26AB26E9D991D5261BBE; // 0xc
    float BurstTime_32_D541ED17455BCDB0490CEBBD57248A19; // 0x14
    float ForceBurstTime_35_860E186B4AAE42D62435E99D10BACF23; // 0x18
    float ExplodeDamage_21_AE5BE192453813AA447F73B5FBB9EA16; // 0x1c
    float ExplodeRadius_26_FF43500E4E299620245CDB9CF19863E9; // 0x20
    float NearbyRadius_28_EDA8264247F26F9771762CB209D65BB3; // 0x24
    float NearbyAlertTime_30_E7A89D5C4E6CFDAB74C31EB6AF48DE86; // 0x28
}; // Size: 0x2c
#pragma pack(pop)
