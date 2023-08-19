#pragma once
#include <cstdint>
#include "UAnimSequencerInstance.hpp"
class UAnimAsset_TickAssetPlayerProxy;
#pragma pack(push, 1)
class USceneRigAnimInstance : public UAnimSequencerInstance {
public:
    char pad_2c0[0x1b0];
    UAnimAsset_TickAssetPlayerProxy* TickAssetPlayerProxy; // 0x470
    char pad_478[0x8];
    static USceneRigAnimInstance* StaticClass();
}; // Size: 0x480
#pragma pack(pop)
