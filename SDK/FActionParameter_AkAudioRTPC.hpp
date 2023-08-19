#pragma once
#include <cstdint>
#include "FSceneRigAkAudioRTPCTrackSectionData.hpp"
#include "FSceneRigParameterBinding_AkAudioRTPC.hpp"
#pragma pack(push, 1)
struct FActionParameter_AkAudioRTPC {
    FSceneRigParameterBinding_AkAudioRTPC BoundParameter; // 0x0
    FSceneRigAkAudioRTPCTrackSectionData DefaultRTPC; // 0x8
}; // Size: 0x20
#pragma pack(pop)
