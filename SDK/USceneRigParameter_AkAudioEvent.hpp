#pragma once
#include <cstdint>
#include "FSceneRigAkAudioEventTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_AkAudioEvent : public USceneRigParameter {
public:
    FSceneRigAkAudioEventTrackSectionData Value; // 0x38
    static USceneRigParameter_AkAudioEvent* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
