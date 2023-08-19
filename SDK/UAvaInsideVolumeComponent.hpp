#pragma once
#include <cstdint>
#include "FInsideVolumeDistanceField.hpp"
#include "FInsideVolumeOptionsMask.hpp"
#include "FIntVector.hpp"
#include "USceneComponent.hpp"
class UAvaInsideVolumeLightClippingComponent;
#pragma pack(push, 1)
class UAvaInsideVolumeComponent : public USceneComponent {
public:
    uint8_t bVisibleInside : 1; // 0x220
    uint8_t bIgnoreForProbeLighting : 1; // 0x220
    uint8_t bIgnoreForAudio : 1; // 0x220
    uint8_t bIgnoreForStreaming : 1; // 0x220
    uint8_t bIgnoreForGame : 1; // 0x220
    uint8_t bIgnoreForWeather : 1; // 0x220
    uint8_t bIgnoreForWindMask : 1; // 0x220
    uint8_t pad_bitfield_220_7 : 1;
    char pad_221[0x3];
    FInsideVolumeOptionsMask CachedOptionsMask; // 0x224
    uint8_t bMakeDistanceField : 1; // 0x228
    uint8_t pad_bitfield_228_1 : 7;
    char pad_229[0x3];
    FIntVector DistanceFieldResolution; // 0x22c
    FInsideVolumeDistanceField DistanceField; // 0x238
    uint8_t FXMask; // 0x250
    char pad_251[0x7];
    UAvaInsideVolumeLightClippingComponent* LightClippingComponent; // 0x258
    char pad_260[0x50];
    static UAvaInsideVolumeComponent* StaticClass();
    void CacheBrush();
}; // Size: 0x2b0
#pragma pack(pop)
