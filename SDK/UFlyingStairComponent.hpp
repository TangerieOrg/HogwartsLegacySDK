#pragma once
#include <cstdint>
#include "UStaticMeshComponent.hpp"
class USkeletalMeshComponent;
class UAnimSequence;
#pragma pack(push, 1)
class UFlyingStairComponent : public UStaticMeshComponent {
public:
    char pad_510[0x20];
    float TimeBeforeDemolitionWhenUnused; // 0x530
    int32_t IndexForAutomaticChainBuilding; // 0x534
    USkeletalMeshComponent* BuildingStairMesh; // 0x538
    UAnimSequence* BuildingStairAnim; // 0x540
    UAnimSequence* BuildingStairAnimCounter; // 0x548
    USkeletalMeshComponent* DemolishingStairMesh; // 0x550
    UAnimSequence* DemolishingStairAnim; // 0x558
    UAnimSequence* DemolishingStairAnimCounter; // 0x560
    bool bPlayPartOfAnim; // 0x568
    char pad_569[0x27];
    static UFlyingStairComponent* StaticClass();
    bool NeedsToBeBuilt();
    bool IsBuilt();
    void Demolish();
    void Build();
}; // Size: 0x590
#pragma pack(pop)
