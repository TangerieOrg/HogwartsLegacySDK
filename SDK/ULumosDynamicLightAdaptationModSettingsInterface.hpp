#pragma once
#include <cstdint>
#include "FLerpVolumesScalarName.hpp"
#include "UDynamicLightAdaptationModSettingsInterface.hpp"
#pragma pack(push, 1)
class ULumosDynamicLightAdaptationModSettingsInterface : public UDynamicLightAdaptationModSettingsInterface {
public:
    FLerpVolumesScalarName AdjustBaseEV; // 0x28
    FLerpVolumesScalarName OutdoorsDayTimeEVBoost; // 0x30
    FLerpVolumesScalarName MaxEV; // 0x38
    FLerpVolumesScalarName MinEV; // 0x40
    FLerpVolumesScalarName StartCutoffMaxEV; // 0x48
    FLerpVolumesScalarName StartCutoffMinEV; // 0x50
    static ULumosDynamicLightAdaptationModSettingsInterface* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
