#pragma once
#include <cstdint>
#include "UGeometryCacheCodecBase.hpp"
#pragma pack(push, 1)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase {
public:
    char pad_38[0x8];
    static UGeometryCacheCodecV1* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
