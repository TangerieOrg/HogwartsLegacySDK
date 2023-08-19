#pragma once
#include <cstdint>
class USceneComponent;
class USoundAttenuation;
class USoundEffectSourcePresetChain;
#pragma pack(push, 1)
struct FVoiceSettings {
    USceneComponent* ComponentToAttachTo; // 0x0
    USoundAttenuation* AttenuationSettings; // 0x8
    USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
}; // Size: 0x18
#pragma pack(pop)
