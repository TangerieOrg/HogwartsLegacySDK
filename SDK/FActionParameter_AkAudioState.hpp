#pragma once
#include <cstdint>
#include "FSceneRigAkAudioStateTrackSectionData.hpp"
#include "FSceneRigParameterBinding_AkAudioState.hpp"
#pragma pack(push, 1)
struct FActionParameter_AkAudioState {
    FSceneRigParameterBinding_AkAudioState BoundParameter; // 0x0
    FSceneRigAkAudioStateTrackSectionData DefaultState; // 0x8
}; // Size: 0x18
#pragma pack(pop)
