#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FLerpVolumesInterpolants.hpp"
#include "UDataAsset.hpp"
class ULerpVolumeInterpolant;
class ULerpVolumeFinalInterpolant;
#pragma pack(push, 1)
class ULerpVolumesLibrary : public UDataAsset {
public:
    ECollisionChannel VolumeCollisionChannel; // 0x30
    char pad_31[0x7];
    FLerpVolumesInterpolants Interpolants; // 0x38
    TArray<ULerpVolumeInterpolant*> DefaultInterpolants; // 0x218
    float DefaultInterpolantsPriority; // 0x228
    char pad_22c[0x4];
    TArray<ULerpVolumeFinalInterpolant*> FinalInterpolants; // 0x230
    static ULerpVolumesLibrary* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
