#pragma once
#include <cstdint>
#include "FRawAnimSequenceTrack.hpp"
#pragma pack(push, 1)
struct FAnimSequenceTrackContainer {
    TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
    TArray<FName> TrackNames; // 0x10
}; // Size: 0x20
#pragma pack(pop)
