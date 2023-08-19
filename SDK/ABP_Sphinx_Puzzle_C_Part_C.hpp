#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
#include "E_Platform_Sizes\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSingleAnimationPlayData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class ULocalStencilBoundsHintComponent;
class UObjectStateInfo;
class UAkAudioEvent;
class USceneComponent;
class USkeletalMeshComponent;
class UAkComponent;
class UStaticMeshComponent;
class AActor;
class UObjectStateComponent;
class UBP_ObjectBuoyancyComponent_C;
class UPrimitiveComponent;
class USkinFXComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_C_Part_C : public APhoenixBudgetedActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    ULocalStencilBoundsHintComponent* LocalStencilBoundsHint; // 0x270
    USkeletalMeshComponent* Vine; // 0x278
    UStaticMeshComponent* Activation; // 0x280
    UStaticMeshComponent* Overlap; // 0x288
    UObjectStateComponent* ObjectState; // 0x290
    UStaticMeshComponent* Platform; // 0x298
    USceneComponent* Root; // 0x2a0
    char pad_2a8[0x10];
    E_Platform_Sizes::Type Size; // 0x2b8
    bool bFloating; // 0x2b9
    bool bActivated; // 0x2ba
    char pad_2bb[0x5];
    AActor* Player; // 0x2c0
    char pad_2c8[0x20];
    TArray<void*> PlatformVariants; // 0x2e8
    TArray<void*> OverlapVariants; // 0x2f8
    TArray<void*> ActivationVariants; // 0x308
    char pad_318[0x10];
    bool bMounted; // 0x328
    char pad_329[0x7];
    static ABP_Sphinx_Puzzle_C_Part_C* StaticClass();
    void Activate(bool ACTIVE, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, UAkAudioEvent* Temp_object_Variable, float K2Node_Select_Default, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAkAudioEvent* Temp_object_Variable_1, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool Temp_bool_Variable_1, UAkAudioEvent* K2Node_Select_Default_1, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue);
    void Build(FTransform StencilTransform_Lg, FTransform StencilTransform_Sm, float ExtentModifier, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, FTransform Temp_struct_Variable, UBP_ObjectBuoyancyComponent_C* CallFunc_AddComponent_ReturnValue, FSingleAnimationPlayData K2Node_MakeStruct_SingleAnimationPlayData, FSingleAnimationPlayData K2Node_MakeStruct_SingleAnimationPlayData_1, bool K2Node_SwitchEnum_CmpSuccess, int32_t CallFunc_Conv_ByteToInt_ReturnValue);
    void UserConstructionScript();
    void Success();
    void BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void Reveal();
    void LoadSolution();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_C_Part(int32_t EntryPoint, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, FName CallFunc_SkinFXName_name, FName CallFunc_SkinFXName_name_1, USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent);
    void Flying__DelegateSignature();
    void OnPlatform__DelegateSignature(bool bEntered);
    void SetPlayer__DelegateSignature(AActor* Player);
    void Activated__DelegateSignature();
}; // Size: 0x330
#pragma pack(pop)
