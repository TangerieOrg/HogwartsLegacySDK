#pragma once
#include <cstdint>
#include "UGeometryCacheCodecBase.hpp"
#pragma pack(push, 1)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase {
public:
    int32_t DummyProperty; // 0x38
    char pad_3c[0x4];
    static UGeometryCacheCodecRaw* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
