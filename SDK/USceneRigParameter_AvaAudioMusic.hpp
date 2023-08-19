#pragma once
#include <cstdint>
#include "FSceneRigAvaAudioMusicTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_AvaAudioMusic : public USceneRigParameter {
public:
    FSceneRigAvaAudioMusicTrackSectionData Value; // 0x38
    static USceneRigParameter_AvaAudioMusic* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
