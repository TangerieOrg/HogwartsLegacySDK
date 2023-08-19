#pragma once
#include <cstdint>
#include "UDistribution.hpp"
#pragma pack(push, 1)
class UDistributionVector : public UDistribution {
public:
    uint8_t bCanBeBaked : 1; // 0x30
    uint8_t bIsDirty : 1; // 0x30
    uint8_t bBakedDataSuccesfully : 1; // 0x30
    uint8_t pad_bitfield_30_3 : 5;
    char pad_31[0x7];
    static UDistributionVector* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
