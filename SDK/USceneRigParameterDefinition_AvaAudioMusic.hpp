#pragma once
#include <cstdint>
#include "FSceneRigAvaAudioMusicTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition_AvaAudioMusic : public USceneRigParameterDefinition {
public:
    FSceneRigAvaAudioMusicTrackSectionData DefaultEvent; // 0x38
    static USceneRigParameterDefinition_AvaAudioMusic* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
