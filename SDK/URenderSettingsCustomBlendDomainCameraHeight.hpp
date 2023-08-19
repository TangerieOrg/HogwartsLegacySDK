#pragma once
#include <cstdint>
#include "EWorldBaseHeightAffect.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainCameraHeight : public URenderSettingsCustomBlendDomain {
public:
    float StartHeightMeters; // 0x28
    float FullHeightMeters; // 0x2c
    EWorldBaseHeightAffect Base; // 0x30
    char pad_31[0x7];
    static URenderSettingsCustomBlendDomainCameraHeight* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
