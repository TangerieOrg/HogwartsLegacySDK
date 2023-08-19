#pragma once
#include <cstdint>
#include "FSceneRigAvaAudioStateTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_AvaAudioState : public USceneRigParameter {
public:
    FSceneRigAvaAudioStateTrackSectionData Value; // 0x38
    char pad_4c[0x4];
    static USceneRigParameter_AvaAudioState* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
