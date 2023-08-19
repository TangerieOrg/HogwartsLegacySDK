#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class USphereComponent;
class USceneComponent;
struct FHitResult;
class USkeletalMeshComponent;
class UNiagaraComponent;
class UStaticMeshComponent;
class UAkComponent;
class ABP_Sphinx_Puzzle_A_GlowBugs_C;
class AActor;
class UObjectStateComponent;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_A_Crystal_C : public APhoenixBudgetedActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    USphereComponent* OverlapSphere; // 0x270
    UNiagaraComponent* Particles; // 0x278
    USkeletalMeshComponent* Vine; // 0x280
    UAkComponent* Ak_BP_Sphinx_Puzzle_A_Crystal; // 0x288
    UObjectStateComponent* ObjectState; // 0x290
    UStaticMeshComponent* SM_LumosBase; // 0x298
    USceneComponent* DefaultSceneRoot; // 0x2a0
    TArray<ABP_Sphinx_Puzzle_A_GlowBugs_C*> Glowbugs; // 0x2a8
    char pad_2b8[0x10];
    bool bCompleted; // 0x2c8
    char pad_2c9[0x7];
    TArray<void*> Meshes; // 0x2d0
    TArray<UMaterialInstance*> Materials; // 0x2e0
    int32_t MeshNum; // 0x2f0
    char pad_2f4[0x4];
    AActor* CurGlowBug; // 0x2f8
    UMaterialInstanceDynamic* MatBase; // 0x300
    UMaterialInstanceDynamic* MatCrystal; // 0x308
    static ABP_Sphinx_Puzzle_A_Crystal_C* StaticClass();
    void Build(int32_t Mesh, int32_t CallFunc_Clamp_ReturnValue);
    void UserConstructionScript();
    void PuzzleSolved();
    void ReceiveBeginPlay();
    void Grabbed_Event();
    void Dropped_Event();
    void Reveal();
    void LoadSolution();
    void BndEvt__BP_Sphinx_Puzzle_A_Crystal_OverlapSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Sphinx_Puzzle_A_Crystal(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue);
    void Complete__DelegateSignature(FVector Location);
}; // Size: 0x310
#pragma pack(pop)
