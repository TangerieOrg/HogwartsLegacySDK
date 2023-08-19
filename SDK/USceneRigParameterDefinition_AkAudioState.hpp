#pragma once
#include <cstdint>
#include "FSceneRigAkAudioStateTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition_AkAudioState : public USceneRigParameterDefinition {
public:
    FSceneRigAkAudioStateTrackSectionData DefaultEvent; // 0x38
    static USceneRigParameterDefinition_AkAudioState* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
