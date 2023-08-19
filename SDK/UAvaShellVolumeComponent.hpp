#pragma once
#include <cstdint>
#include "UAvaStreamingLevelVolumeComponentBase.hpp"
class ATriggerBox;
#pragma pack(push, 1)
class UAvaShellVolumeComponent : public UAvaStreamingLevelVolumeComponentBase {
public:
    ATriggerBox* VolumeToIntersectAgainsStreamingVolumes; // 0x290
    char pad_298[0x8];
    static UAvaShellVolumeComponent* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
