#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USphereComponent;
class ATargetPoint;
class USceneComponent;
struct FHitResult;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_ResetOnExit_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USphereComponent* Sphere; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    float TriggerScale; // 0x260
    char pad_264[0x4];
    TArray<AActor*> ResetActors; // 0x268
    TArray<FTransform> Locations; // 0x278
    float CompleteResetCueDelay; // 0x288
    bool PlayerTriggers; // 0x28c
    char pad_28d[0x3];
    TArray<ATargetPoint*> StatUpdatedTargetPoints; // 0x290
    FName Stat; // 0x2a0
    int32_t StatValue; // 0x2a8
    char pad_2ac[0x4];
    TArray<FTransform> StatLocations; // 0x2b0
    TArray<FTransform> LocationsTemp; // 0x2c0
    static ABP_ResetOnExit_C* StaticClass();
    bool StatCheck(bool AssignLocations, bool StatCleared, int32_t CallFunc_ReadStat_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void UserConstructionScript0(FVector CallFunc_Conv_FloatToVector_ReturnValue);
    void SwitchOff(AActor* SwitchActor);
    void ReceiveBeginPlay0();
    void BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ResetAll();
    void BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void SwitchOn(AActor* SwitchActor);
    void ExecuteUbergraph_BP_ResetOnExit(int32_t EntryPoint, bool CallFunc_StatCheck_ReturnValue, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, FTransform CallFunc_MakeTransform_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_4, int32_t Temp_int_Array_Index_Variable_1, AActor* K2Node_Event_SwitchActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1);
}; // Size: 0x2d0
#pragma pack(pop)
