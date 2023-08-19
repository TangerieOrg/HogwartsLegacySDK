#pragma once
#include <cstdint>
#include "FSceneRigAkAudioEventTrackSectionData.hpp"
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_AkAudioEvent : public USceneRigObjectActionState {
public:
    char pad_70[0x8];
    FSceneRigAkAudioEventTrackSectionData AkAudioEventData; // 0x78
    char pad_98[0x18];
    static USceneActionState_AkAudioEvent* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
