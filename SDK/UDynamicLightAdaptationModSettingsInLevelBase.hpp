#pragma once
#include <cstdint>
#include "ELightAdapatationEVModOp.hpp"
#include "FLerpVolumesLevelName.hpp"
#include "UDynamicLightAdaptationModSettingsInterface.hpp"
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsInLevelBase : public UDynamicLightAdaptationModSettingsInterface {
public:
    FLerpVolumesLevelName LevelName; // 0x28
    bool bSearchFullLevelNames; // 0x30
    ELightAdapatationEVModOp ModOp; // 0x31
    char pad_32[0x6];
    static UDynamicLightAdaptationModSettingsInLevelBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
