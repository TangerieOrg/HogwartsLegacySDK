#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UPackageStatsCaptureSettings : public UDataAsset {
public:
    TArray<FString> RawPackages; // 0x30
    static UPackageStatsCaptureSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
