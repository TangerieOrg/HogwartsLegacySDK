#pragma once
#include <cstdint>
#include "FSceneRigAkAudioRTPCTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_AkAudioRTPC : public USceneRigParameter {
public:
    FSceneRigAkAudioRTPCTrackSectionData Value; // 0x38
    static USceneRigParameter_AkAudioRTPC* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
