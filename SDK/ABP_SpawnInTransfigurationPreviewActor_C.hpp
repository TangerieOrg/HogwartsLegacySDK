#pragma once
#include <cstdint>
#include "ATransfigurationPreviewActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class AActor;
class ABP_TransfigurationMovementStyle_SpawnIn_C;
#pragma pack(push, 1)
class ABP_SpawnInTransfigurationPreviewActor_C : public ATransfigurationPreviewActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x430
    char pad_438[0x8];
    static ABP_SpawnInTransfigurationPreviewActor_C* StaticClass();
    void BlueprintInitialize0();
    void ObjectConfirmed0(TArray<AActor*>& InNewActors);
    void ExecuteUbergraph_BP_SpawnInTransfigurationPreviewActor(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FVector CallFunc_GetVelocity_ReturnValue, FTransform CallFunc_GetTargetTransform_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue_1, TArray<AActor*>& K2Node_Event_InNewActors, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, ABP_TransfigurationMovementStyle_SpawnIn_C* CallFunc_FinishSpawningActor_ReturnValue, AActor* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1);
}; // Size: 0x440
#pragma pack(pop)
