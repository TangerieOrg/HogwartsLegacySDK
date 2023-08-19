#pragma once
#include <cstdint>
#include "UObject.hpp"
class UCameraStackInfluenceHandle;
class UCameraStackVolumePreset;
#pragma pack(push, 1)
class UCameraStackInfluenceManager : public UObject {
public:
    char pad_28[0x30];
    static UCameraStackInfluenceManager* StaticClass();
    static void UnregisterInfluence(UCameraStackInfluenceHandle* InHandle);
    static UCameraStackInfluenceHandle* RegisterInfluence(UCameraStackVolumePreset* InPreset, int32_t Priority, float MaxBlendSpeed);
}; // Size: 0x58
#pragma pack(pop)
