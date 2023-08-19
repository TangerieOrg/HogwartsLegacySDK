#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
#include "FFlipendoLevelData.hpp"
class UClass;
class AActor;
class UPrimitiveComponent;
struct FVector;
#pragma pack(push, 1)
class AFlipendoSpellTool : public AFireOnceSpellTool {
public:
    TArray<FFlipendoLevelData> LevelDataArray; // 0x870
    float CharacterImpulseScale; // 0x880
    char pad_884[0x4];
    UClass* AOEMunition; // 0x888
    char pad_890[0x8];
    static AFlipendoSpellTool* StaticClass();
    void FlipTarget(AActor* InTargetActor, UPrimitiveComponent* InTargetComp, FVector& ImpactLocation);
}; // Size: 0x898
#pragma pack(pop)
