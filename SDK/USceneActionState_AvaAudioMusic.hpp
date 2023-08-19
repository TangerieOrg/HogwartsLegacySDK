#pragma once
#include <cstdint>
#include "FSceneRigAvaAudioMusicTrackSectionData.hpp"
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_AvaAudioMusic : public USceneRigObjectActionState {
public:
    FSceneRigAvaAudioMusicTrackSectionData AvaAudioMusicData; // 0x70
    static USceneActionState_AvaAudioMusic* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
