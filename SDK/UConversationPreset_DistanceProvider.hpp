#pragma once
#include <cstdint>
#include "EConversationPreset_ProximityType.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UConversationPreset_DistanceProvider : public UObject {
public:
    bool Enabled; // 0x28
    EConversationPreset_ProximityType Proximity; // 0x29
    bool Force; // 0x2a
    char pad_2b[0x5];
    static UConversationPreset_DistanceProvider* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
