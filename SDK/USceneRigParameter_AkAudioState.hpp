#pragma once
#include <cstdint>
#include "FSceneRigAkAudioStateTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_AkAudioState : public USceneRigParameter {
public:
    FSceneRigAkAudioStateTrackSectionData Value; // 0x38
    static USceneRigParameter_AkAudioState* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
