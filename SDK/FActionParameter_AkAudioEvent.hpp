#pragma once
#include <cstdint>
#include "FSceneRigAkAudioEventTrackSectionData.hpp"
#include "FSceneRigParameterBinding_AkAudioEvent.hpp"
#pragma pack(push, 1)
struct FActionParameter_AkAudioEvent {
    FSceneRigParameterBinding_AkAudioEvent BoundParameter; // 0x0
    FSceneRigAkAudioEventTrackSectionData DefaultEvent; // 0x8
}; // Size: 0x28
#pragma pack(pop)
