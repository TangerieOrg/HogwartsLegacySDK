#pragma once
#include <cstdint>
#include "FSceneRigAvaAudioMusicTrackSectionData.hpp"
#include "FSceneRigParameterBinding_AvaAudioMusic.hpp"
#pragma pack(push, 1)
struct FActionParameter_AvaAudioMusic {
    FSceneRigParameterBinding_AvaAudioMusic BoundParameter; // 0x0
    FSceneRigAvaAudioMusicTrackSectionData DefaultEvent; // 0x8
}; // Size: 0x20
#pragma pack(pop)
