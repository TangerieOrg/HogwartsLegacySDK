#pragma once
#include <cstdint>
#include "AInfo.hpp"
#pragma pack(push, 1)
class AGameSession : public AInfo {
public:
    int32_t MaxSpectators; // 0x248
    int32_t MaxPlayers; // 0x24c
    int32_t MaxPartySize; // 0x250
    uint8_t MaxSplitscreensPerConnection; // 0x254
    bool bRequiresPushToTalk; // 0x255
    char pad_256[0x2];
    FName SessionName; // 0x258
    static AGameSession* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
