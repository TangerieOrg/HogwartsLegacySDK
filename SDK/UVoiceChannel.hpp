#pragma once
#include <cstdint>
#include "UChannel.hpp"
#pragma pack(push, 1)
class UVoiceChannel : public UChannel {
public:
    char pad_68[0x10];
    static UVoiceChannel* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
