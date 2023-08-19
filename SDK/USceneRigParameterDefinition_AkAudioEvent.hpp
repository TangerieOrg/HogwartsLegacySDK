#pragma once
#include <cstdint>
#include "FSceneRigAkAudioEventTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition_AkAudioEvent : public USceneRigParameterDefinition {
public:
    FSceneRigAkAudioEventTrackSectionData DefaultEvent; // 0x38
    static USceneRigParameterDefinition_AkAudioEvent* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
