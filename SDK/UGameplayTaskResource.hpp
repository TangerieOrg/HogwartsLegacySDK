#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGameplayTaskResource : public UObject {
public:
    int32_t ManualResourceID; // 0x28
    int8_t AutoResourceID; // 0x2c
    char pad_2d[0x3];
    uint8_t bManuallySetID : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x7];
    static UGameplayTaskResource* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
