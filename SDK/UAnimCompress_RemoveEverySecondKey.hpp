#pragma once
#include <cstdint>
#include "UAnimCompress.hpp"
#pragma pack(push, 1)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress {
public:
    int32_t MinKeys; // 0x40
    uint8_t bStartAtSecondKey : 1; // 0x44
    uint8_t pad_bitfield_44_1 : 7;
    char pad_45[0x3];
    static UAnimCompress_RemoveEverySecondKey* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
