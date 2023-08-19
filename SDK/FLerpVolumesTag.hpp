#pragma once
#include <cstdint>
#include "ELerpVolumesTagValueMode.hpp"
#include "FLerpVolumesInterpolantBase.hpp"
#include "FLerpVolumesTagEntry.hpp"
#pragma pack(push, 1)
struct FLerpVolumesTag : public FLerpVolumesInterpolantBase {
    FLerpVolumesTagEntry DefaultValue; // 0x10
    float AlphaTransition; // 0x28
    bool bForceFullHistory; // 0x2c
    bool bOnlySetDefaultWWiseRTPCIfNotEmpty; // 0x2d
    char pad_2e[0x2];
    TArray<FLerpVolumesTagEntry> History; // 0x30
    ELerpVolumesTagValueMode DefaultValueMode; // 0x40
    ELerpVolumesTagValueMode RTPCValueMode; // 0x41
    ELerpVolumesTagValueMode HermesValueMode; // 0x42
    char pad_43[0x5];
}; // Size: 0x48
#pragma pack(pop)
