#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAnimBoneCompressionCodec : public UObject {
public:
    FString Description; // 0x28
    static UAnimBoneCompressionCodec* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
