#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UCapsuleComponent;
class USceneComponent;
struct FHitResult;
class UPrimitiveComponent;
struct FMunitionImpactData;
class UObject;
#pragma pack(push, 1)
class ABP_Protego_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UCapsuleComponent* bLocked; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    static ABP_Protego_C* StaticClass();
    void ReceiveBeginPlay0();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);
    void MunitionImpact(UObject* Caller, FMunitionImpactData& MunitionImpactData);
    void BndEvt__Blocked_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Protego(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
