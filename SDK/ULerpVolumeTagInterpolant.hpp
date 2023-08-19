#pragma once
#include <cstdint>
#include "ULerpVolumeTagInterpolantBase.hpp"
#pragma pack(push, 1)
class ULerpVolumeTagInterpolant : public ULerpVolumeTagInterpolantBase {
public:
    FString Value; // 0x30
    FName CachedNameValue; // 0x40
    static ULerpVolumeTagInterpolant* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
