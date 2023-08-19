#pragma once
#include <cstdint>
#include "UObject.hpp"
class UAnimBoneCompressionCodec;
#pragma pack(push, 1)
class UAnimBoneCompressionSettings : public UObject {
public:
    TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28
    static UAnimBoneCompressionSettings* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
