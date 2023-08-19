#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class USceneComponent;
struct FHitResult;
class ABP_Sphinx_Puzzle_C_Platform_C;
class UCapsuleComponent;
class ABP_Sphinx_Puzzle_C_Part_C;
class UPrimitiveComponent;
class UObject;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_C_Manager_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* Scene; // 0x250
    ABP_Sphinx_Puzzle_C_Platform_C* Puzzle; // 0x258
    TArray<ABP_Sphinx_Puzzle_C_Part_C*> Platforms; // 0x260
    AActor* Player; // 0x270
    UCapsuleComponent* PlayerCapsule; // 0x278
    int32_t NumPlatforms; // 0x280
    bool bOnPlatform; // 0x284
    char pad_285[0x3];
    int32_t ActivatedPlatforms; // 0x288
    int32_t TotalPlatforms; // 0x28c
    int32_t NewVar_0; // 0x290
    char pad_294[0x4];
    FHermesBPDelegateHandle SwimmingHandle; // 0x298
    FHermesBPDelegateHandle FlyingStartHandle; // 0x2a8
    FHermesBPDelegateHandle FlyingEndHandle; // 0x2b8
    FHermesBPDelegateHandle MountHandle; // 0x2c8
    FHermesBPDelegateHandle DismountHandle; // 0x2d8
    static ABP_Sphinx_Puzzle_C_Manager_C* StaticClass();
    void ReceiveBeginPlay0();
    void Activated_Event();
    void SetPlayer_Event(AActor* Player);
    void OnPlatform_Event(bool bEntered);
    void PlayerHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);
    void OnSwimmingStart(UObject* Caller);
    void ResetFail();
    void OnBroomFlightStart(UObject* Caller);
    void DeactivateAllPlatforms();
    void OnBroomFlightEnd(UObject* Caller);
    void Flying_Event();
    void CreatureMountComplete(UObject* Caller);
    void CreatureDismountComplete(UObject* Caller);
    void ExecuteUbergraph_BP_Sphinx_Puzzle_C_Manager(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2);
}; // Size: 0x2e8
#pragma pack(pop)
