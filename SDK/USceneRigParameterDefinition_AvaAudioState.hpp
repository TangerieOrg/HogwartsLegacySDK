#pragma once
#include <cstdint>
#include "FSceneRigAvaAudioStateTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition_AvaAudioState : public USceneRigParameterDefinition {
public:
    FSceneRigAvaAudioStateTrackSectionData DefaultEvent; // 0x38
    char pad_4c[0x4];
    static USceneRigParameterDefinition_AvaAudioState* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
