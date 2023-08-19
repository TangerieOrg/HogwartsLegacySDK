#pragma once
#include <cstdint>
#include "ULerpVolumeFinalTagInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeFinalLastValidTagInterpolant : public ULerpVolumeFinalTagInterpolant {
public:
    static ULerpVolumeFinalLastValidTagInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
