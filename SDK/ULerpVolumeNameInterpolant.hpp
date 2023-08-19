#pragma once
#include <cstdint>
#include "ULerpVolumeTagInterpolantBase.hpp"
#pragma pack(push, 1)
class ULerpVolumeNameInterpolant : public ULerpVolumeTagInterpolantBase {
public:
    FName Value; // 0x30
    static ULerpVolumeNameInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
