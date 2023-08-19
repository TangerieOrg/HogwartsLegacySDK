#pragma once
#include <cstdint>
#include "UObject.hpp"
class UAnimCurveCompressionCodec;
#pragma pack(push, 1)
class UAnimCurveCompressionSettings : public UObject {
public:
    UAnimCurveCompressionCodec* Codec; // 0x28
    static UAnimCurveCompressionSettings* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
