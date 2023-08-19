#pragma once
#include <cstdint>
#include "FConversationPreset.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UConversationPresets : public UDataAsset {
public:
    TArray<FConversationPreset> Presets; // 0x30
    static UConversationPresets* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
