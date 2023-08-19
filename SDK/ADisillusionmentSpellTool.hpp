#pragma once
#include <cstdint>
#include "ASpellTool.hpp"
#include "EStandardManagedPriority.hpp"
class UMaterialInterface;
class UMultiFX2_Base;
class UObject;
class AActor;
#pragma pack(push, 1)
class ADisillusionmentSpellTool : public ASpellTool {
public:
    UMaterialInterface* DisillusionmentMat; // 0x7f0
    TArray<UMultiFX2_Base*> DisillusionmentFX2; // 0x7f8
    TArray<UMultiFX2_Base*> FailedFX2; // 0x808
    TArray<UMultiFX2_Base*> EndMuzzleFX2; // 0x818
    bool bSlowWalk; // 0x828
    char pad_829[0x7];
    TArray<FString> TalentStrings; // 0x830
    int32_t Level; // 0x840
    char pad_844[0x14];
    static ADisillusionmentSpellTool* StaticClass();
    void OnDisillusionmentStart();
    void OnDisillusionmentEnd();
    bool DeactivateDisillusionment(EStandardManagedPriority Priority, UObject* InInstigator);
    void CasterHealthZero(AActor* InActor);
    bool ActivateDisillusionment(EStandardManagedPriority Priority, UObject* InInstigator);
}; // Size: 0x858
#pragma pack(pop)
