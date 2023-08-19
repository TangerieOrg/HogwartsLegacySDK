#pragma once
#include <cstdint>
#include "FSceneRigAkAudioRTPCTrackSectionData.hpp"
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_AkAudioRTPC : public USceneRigObjectActionState {
public:
    char pad_70[0x8];
    FSceneRigAkAudioRTPCTrackSectionData AkAudioRTPCData; // 0x78
    static USceneActionState_AkAudioRTPC* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
