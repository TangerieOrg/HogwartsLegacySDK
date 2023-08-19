#pragma once
#include <cstdint>
#include "EAkAudioSessionCategory.hpp"
#include "EAkAudioSessionMode.hpp"
#pragma pack(push, 1)
struct FAkAudioSession {
    EAkAudioSessionCategory AudioSessionCategory; // 0x0
    uint32_t AudioSessionCategoryOptions; // 0x4
    EAkAudioSessionMode AudioSessionMode; // 0x8
}; // Size: 0xc
#pragma pack(pop)
