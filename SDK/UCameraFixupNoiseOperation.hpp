#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UCameraFixupOperation.hpp"
class UCameraFixupNoiseOperations;
class UFloatProvider;
#pragma pack(push, 1)
class UCameraFixupNoiseOperation : public UCameraFixupOperation {
public:
    uint8_t DrawDebug : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x7];
    FGameplayTagContainer AssetTags; // 0x38
    UCameraFixupNoiseOperations* ExplicitAsset; // 0x58
    UFloatProvider* XPositionProvider; // 0x60
    UFloatProvider* YPositionProvider; // 0x68
    UFloatProvider* ZPositionProvider; // 0x70
    UFloatProvider* PitchAngleProvider; // 0x78
    UFloatProvider* YawAngleProvider; // 0x80
    UFloatProvider* RollAngleProvider; // 0x88
    static UCameraFixupNoiseOperation* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
