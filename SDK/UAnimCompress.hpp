#pragma once
#include <cstdint>
#include "AnimationCompressionFormat.hpp"
#include "UAnimBoneCompressionCodec.hpp"
#pragma pack(push, 1)
class UAnimCompress : public UAnimBoneCompressionCodec {
public:
    uint8_t bNeedsSkeleton : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x3];
    AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
    AnimationCompressionFormat RotationCompressionFormat; // 0x3d
    AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
    char pad_3f[0x1];
    static UAnimCompress* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
