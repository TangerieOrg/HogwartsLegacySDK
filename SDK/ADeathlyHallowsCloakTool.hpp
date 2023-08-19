#pragma once
#include <cstdint>
#include "ASpellTool.hpp"
class UMaterialInterface;
class UMultiFX2_Base;
class AActor;
#pragma pack(push, 1)
class ADeathlyHallowsCloakTool : public ASpellTool {
public:
    UMaterialInterface* DisillusionmentMat; // 0x7f0
    TArray<UMultiFX2_Base*> DisillusionmentFX2; // 0x7f8
    bool bSlowWalk; // 0x808
    char pad_809[0x7];
    static ADeathlyHallowsCloakTool* StaticClass();
    void OnDisillusionmentStart();
    void OnDisillusionmentEnd();
    void CasterHealthZero(AActor* InActor);
}; // Size: 0x810
#pragma pack(pop)
