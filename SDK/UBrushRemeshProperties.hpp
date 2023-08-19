#pragma once
#include <cstdint>
#include "URemeshProperties.hpp"
#pragma pack(push, 1)
class UBrushRemeshProperties : public URemeshProperties {
public:
    bool bEnableRemeshing; // 0x70
    char pad_71[0x3];
    int32_t TriangleSize; // 0x74
    int32_t PreserveDetail; // 0x78
    int32_t iterations; // 0x7c
    static UBrushRemeshProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
