#pragma once
#include <cstdint>
#include "FSceneRigAvaAudioStateTrackSectionData.hpp"
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_AvaAudioState : public USceneRigActionState {
public:
    FSceneRigAvaAudioStateTrackSectionData AvaAudioStateData; // 0x50
    char pad_64[0x4];
    static USceneActionState_AvaAudioState* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
