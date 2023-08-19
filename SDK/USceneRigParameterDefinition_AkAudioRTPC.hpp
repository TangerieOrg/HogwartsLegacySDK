#pragma once
#include <cstdint>
#include "FSceneRigAkAudioRTPCTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition_AkAudioRTPC : public USceneRigParameterDefinition {
public:
    FSceneRigAkAudioRTPCTrackSectionData DefaultEvent; // 0x38
    static USceneRigParameterDefinition_AkAudioRTPC* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
