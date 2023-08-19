#pragma once
#include <cstdint>
#include "FConversationExplicitCameraShot.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UConversationExplicitCameraShots : public UDataAsset {
public:
    TArray<FConversationExplicitCameraShot> CameraShots; // 0x30
    static UConversationExplicitCameraShots* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
