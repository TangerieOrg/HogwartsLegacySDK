#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FMercunaNavUsageTypes.hpp"
#include "FVector.hpp"
class AMercunaNavOctree;
#pragma pack(push, 1)
class AMercunaNavModifierVolume : public AVolume {
public:
    bool bEnabled; // 0x280
    char pad_281[0x3];
    float CostMultiplier; // 0x284
    float CostMultipler; // 0x288
    FMercunaNavUsageTypes UsageTypes; // 0x28c
    AMercunaNavOctree* NavOctree; // 0x290
    static AMercunaNavModifierVolume* StaticClass();
    void SetUsageTypes(FMercunaNavUsageTypes& NewUsageTypes);
    void SetSize(FVector Size);
    void SetLocationAndSize(FVector Location, FVector Size);
    void SetLocation(FVector Location);
    void SetEnabled(bool Enabled);
    void SetCostMultiplier(float NewCostMultiplier);
    void AddToOctree(AMercunaNavOctree* NavOctree);
}; // Size: 0x298
#pragma pack(pop)
