#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "EMercunaLevelOfDetail.hpp"
#include "FVector.hpp"
class AMercunaNavOctree;
struct FRotator;
#pragma pack(push, 1)
class AMercunaNavVolume : public AVolume {
public:
    AMercunaNavOctree* NavOctree; // 0x280
    bool PreciseBoundaries; // 0x288
    EMercunaLevelOfDetail LOD; // 0x289
    bool FullDetailBuild; // 0x28a
    char pad_28b[0x5];
    TArray<bool> PreciseDirections; // 0x290
    static AMercunaNavVolume* StaticClass();
    void SetSize(FVector Size);
    void SetNavigationRotation(FRotator& Rotation);
    void AddToOctree(AMercunaNavOctree* NavOctree);
}; // Size: 0x2a0
#pragma pack(pop)
