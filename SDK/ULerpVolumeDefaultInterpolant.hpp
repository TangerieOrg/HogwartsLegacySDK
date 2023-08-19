#pragma once
#include <cstdint>
#include "ULerpVolumeTagInterpolantBase.hpp"
#pragma pack(push, 1)
class ULerpVolumeDefaultInterpolant : public ULerpVolumeTagInterpolantBase {
public:
    static ULerpVolumeDefaultInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
