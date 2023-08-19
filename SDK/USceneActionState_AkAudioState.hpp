#pragma once
#include <cstdint>
#include "FSceneRigAkAudioStateTrackSectionData.hpp"
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_AkAudioState : public USceneRigActionState {
public:
    FSceneRigAkAudioStateTrackSectionData AkAudioStateData; // 0x50
    static USceneActionState_AkAudioState* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
