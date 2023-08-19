#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_Direct : public UTransformProvider {
public:
    char pad_28[0x8];
    FTransform Transform; // 0x30
    static UTransform_Direct* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
