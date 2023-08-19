#pragma once
#include <cstdint>
#include "EAudioVolumeLocationState.hpp"
#include "FSoundSubmixSendInfo.hpp"
#pragma pack(push, 1)
struct FAudioVolumeSubmixSendSettings {
    EAudioVolumeLocationState ListenerLocationState; // 0x0
    EAudioVolumeLocationState SourceLocationState; // 0x1
    char pad_2[0x6];
    TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
}; // Size: 0x18
#pragma pack(pop)
