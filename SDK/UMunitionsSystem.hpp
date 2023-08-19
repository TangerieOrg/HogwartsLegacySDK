#pragma once
#include <cstdint>
#include "UObject.hpp"
class AMunitionType_Base;
class AActor;
class UClass;
class APawn;
struct FVector;
struct FMunitionToInstigatorData;
struct FMunitionImpactData;
#pragma pack(push, 1)
class UMunitionsSystem : public UObject {
public:
    TArray<AMunitionType_Base*> MunitionList; // 0x28
    static UMunitionsSystem* StaticClass();
    static AMunitionType_Base* SpawnMunition(UClass* MunitionClass, AActor* MunitionOwner, APawn* Instigator, FVector& SourcePos);
    static void SetMunitionImpactFailed();
    static void SendSpellMadeContact(UObject* Owner, UObject* Caller, FMunitionImpactData& miData);
    static void SendMunitionImpactDamage(UObject* Owner, UObject* Caller, FMunitionImpactData& miData);
    static bool SendMunitionImpactCombined(UObject* Owner, UObject* Caller, FMunitionImpactData& miData);
    static void SendMunitionImpact(UObject* Owner, UObject* Caller, FMunitionImpactData& miData);
    static void MunitionToInstigator(UObject* Owner, UObject* Caller, FMunitionToInstigatorData& mtoIData);
    static void DestroySpawnedMunition(AMunitionType_Base* Munition);
}; // Size: 0x38
#pragma pack(pop)
