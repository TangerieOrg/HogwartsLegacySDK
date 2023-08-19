#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWLightProbesVolumeComponent;
#pragma pack(push, 1)
class AWLightProbesVolume : public AInfo {
public:
    UWLightProbesVolumeComponent* LightProbesVolumeComponent; // 0x248
    static AWLightProbesVolume* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
