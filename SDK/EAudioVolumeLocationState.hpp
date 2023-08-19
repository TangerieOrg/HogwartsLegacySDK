#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAudioVolumeLocationState : uint8_t {
    InsideTheVolume = 0,
    OutsideTheVolume = 1,
    EAudioVolumeLocationState_MAX = 2,
};
#pragma pack(pop)
