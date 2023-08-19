#pragma once
#include <cstdint>
#include "AActor.hpp"
class UPackageStatsCaptureSettings;
class UWorldStructureDescGenerator;
#pragma pack(push, 1)
class APackagesStatsFetchLevelController : public AActor {
public:
    UPackageStatsCaptureSettings* PackageStatsCaptureSettings; // 0x248
    char pad_250[0x90];
    UWorldStructureDescGenerator* WorldStructureGenerator; // 0x2e0
    char pad_2e8[0x18];
    static APackagesStatsFetchLevelController* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
