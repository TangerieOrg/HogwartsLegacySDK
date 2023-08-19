#pragma once
#include <cstdint>
#include "FCameraStackVolumeOperationSettings.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCameraStackVolumePreset : public UDataAsset {
public:
    TArray<FCameraStackVolumeOperationSettings> VolumeOperations; // 0x30
    char pad_40[0x50];
    static UCameraStackVolumePreset* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
