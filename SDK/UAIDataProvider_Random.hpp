#pragma once
#include <cstdint>
#include "UAIDataProvider_QueryParams.hpp"
#pragma pack(push, 1)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams {
public:
    float Min; // 0x40
    float Max; // 0x44
    uint8_t bInteger : 1; // 0x48
    uint8_t pad_bitfield_48_1 : 7;
    char pad_49[0x7];
    static UAIDataProvider_Random* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
