#pragma once
#include <cstdint>
#include "UConversationPreset_DistanceProvider.hpp"
#pragma pack(push, 1)
class UConversationPreset_DistanceProvider_Single : public UConversationPreset_DistanceProvider {
public:
    float Distance; // 0x30
    char pad_34[0x4];
    static UConversationPreset_DistanceProvider_Single* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
