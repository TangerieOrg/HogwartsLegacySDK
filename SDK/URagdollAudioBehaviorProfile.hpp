#pragma once
#include <cstdint>
#include "FRagdollAudioBehaviorLayer.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URagdollAudioBehaviorProfile : public UDataAsset {
public:
    TArray<FRagdollAudioBehaviorLayer> BehaviorLayers; // 0x30
    static URagdollAudioBehaviorProfile* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
