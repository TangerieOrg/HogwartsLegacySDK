#pragma once
#include <cstdint>
#include "UNetDriver.hpp"
#pragma pack(push, 1)
class UIpNetDriver : public UNetDriver {
public:
    uint8_t LogPortUnreach : 1; // 0x760
    uint8_t AllowPlayerPortUnreach : 1; // 0x760
    uint8_t pad_bitfield_760_2 : 6;
    char pad_761[0x3];
    uint32_t MaxPortCountToTry; // 0x764
    char pad_768[0xc];
    uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x774
    uint32_t ServerDesiredSocketSendBufferBytes; // 0x778
    uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x77c
    uint32_t ClientDesiredSocketSendBufferBytes; // 0x780
    char pad_784[0x4];
    double MaxSecondsInReceive; // 0x788
    int32_t NbPacketsBetweenReceiveTimeTest; // 0x790
    float ResolutionConnectionTimeout; // 0x794
    char pad_798[0x38];
    static UIpNetDriver* StaticClass();
}; // Size: 0x7d0
#pragma pack(pop)
