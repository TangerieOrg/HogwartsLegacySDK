#pragma once
#include <cstdint>
#include "FSceneRigAvaAudioStateTrackSectionData.hpp"
#include "FSceneRigParameterBinding_AvaAudioState.hpp"
#pragma pack(push, 1)
struct FActionParameter_AvaAudioState {
    FSceneRigParameterBinding_AvaAudioState BoundParameter; // 0x0
    FSceneRigAvaAudioStateTrackSectionData DefaultState; // 0x8
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
