#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UStaticMeshComponent;
class AActor;
#pragma pack(push, 1)
class ABP_OPP_FlourSack_C : public AWorldObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    UStaticMeshComponent* Obj; // 0x2b8
    static ABP_OPP_FlourSack_C* StaticClass();
    void OnHitByOppugnoImpact(AActor* Instigator, AActor* Object);
    void OnOppugnoEnd(AActor* Instigator);
    void OnOppugnoHold(AActor* Instigator);
    void OnOppugnoImpact(AActor* Instigator, AActor* Target, AActor* HitObject);
    void OnOppugnoThrow(AActor* Instigator, AActor* Target, FVector Velocity);
    void OnOppugnoPull(AActor* Instigator);
    void ExecuteUbergraph_BP_OPP_FlourSack(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x2c0
#pragma pack(pop)
