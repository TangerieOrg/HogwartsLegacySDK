#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMediaPlayerTrack : uint8_t {
    Audio = 0,
    Caption = 1,
    Metadata = 2,
    Script = 3,
    Subtitle = 4,
    Text = 5,
    Video = 6,
    EMediaPlayerTrack_MAX = 7,
};
#pragma pack(pop)
