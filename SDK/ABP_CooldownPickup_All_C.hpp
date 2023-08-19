#pragma once
#include <cstdint>
#include "ACooldownPickup.hpp"
#include "EEnvironment\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
class UNiagaraComponent;
struct FHitResult;
class USphereComponent;
class UCapsuleComponent;
class UAkComponent;
class UObject;
class AActor;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_CooldownPickup_All_C : public ACooldownPickup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x318
    UNiagaraComponent* VFX_NS_CooldownPickup_All; // 0x320
    USphereComponent* Sphere; // 0x328
    UCapsuleComponent* Capsule; // 0x330
    UAkComponent* NewVar_0; // 0x338
    EEnvironment::Type Environment; // 0x340
    bool AutoSelectLoot; // 0x341
    char pad_342[0x16];
    bool BouncePlayed; // 0x358
    char pad_359[0x7];
    AActor* PickedupActor; // 0x360
    float Speed; // 0x368
    float Acceleration; // 0x36c
    AActor* PlayerOverlapping; // 0x370
    static ABP_CooldownPickup_All_C* StaticClass();
    void UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, float CallFunc_RandomFloatInRangeFromStream_ReturnValue);
    void BndEvt__BP_CooldownPickup_All_Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);
    void ReceiveBeginPlay();
    void BndEvt__BP_CooldownPickup_Red_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ShowNonCinematicElements(UObject* Caller);
    void HideNonCinematicElements(UObject* Caller);
    void BndEvt__BP_CooldownPickup_All_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void FinisherCast(UObject* Caller);
    void OnResetRecycle0();
    void ExecuteUbergraph_BP_CooldownPickup_All(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void onBagEmpty__DelegateSignature();
}; // Size: 0x378
#pragma pack(pop)
