#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGameSessionSettings : public UObject {
public:
    int32_t MaxSpectators; // 0x28
    int32_t MaxPlayers; // 0x2c
    uint8_t bRequiresPushToTalk : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x7];
    static UGameSessionSettings* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
