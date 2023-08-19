#pragma once
#include <cstdint>
#include "ELipsyncFlags.hpp"
#pragma pack(push, 1)
struct FAudioDialogueFlags {
    char pad_0[0x1];
    bool StartPausedUMETA; // 0x1
    bool NoQueuingLimits; // 0x2
    bool SuppressSubtitles; // 0x3
    bool NonSpatialized; // 0x4
    bool UseCinematicPolyphony; // 0x5
    ELipsyncFlags LipsyncFlags; // 0x6
}; // Size: 0x7
#pragma pack(pop)
