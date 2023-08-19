#pragma once
#include <cstdint>
#include "AWorldEventActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UBP_WorldEvent_DropComponentsToGround_C;
class UChildActorComponent;
class ABP_Plant_HonkingDaffodils_NonForagable_C;
class USphereComponent;
class UPrimitiveComponent;
class AActor;
class USceneComponent;
class ABiped_Player;
#pragma pack(push, 1)
class ABP_WE_HonkingDaffodils_C : public AWorldEventActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x280
    UBP_WorldEvent_DropComponentsToGround_C* DropToGroundComponent; // 0x288
    USphereComponent* SphereTrigger; // 0x290
    UChildActorComponent* Daffodils10; // 0x298
    UChildActorComponent* Daffodils9; // 0x2a0
    UChildActorComponent* Daffodils8; // 0x2a8
    UChildActorComponent* Daffodils7; // 0x2b0
    UChildActorComponent* Daffodils6; // 0x2b8
    UChildActorComponent* Daffodils5; // 0x2c0
    UChildActorComponent* Daffodils4; // 0x2c8
    UChildActorComponent* Daffodils3; // 0x2d0
    UChildActorComponent* Daffodils2; // 0x2d8
    UChildActorComponent* Daffodils1; // 0x2e0
    int32_t Rand; // 0x2e8
    char pad_2ec[0x4];
    TArray<ABP_Plant_HonkingDaffodils_NonForagable_C*> Daffodil_Scene_Components; // 0x2f0
    static ABP_WE_HonkingDaffodils_C* StaticClass();
    void BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WE_HonkingDaffodils(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, ABP_Plant_HonkingDaffodils_NonForagable_C* CallFunc_Array_Get_Item, USceneComponent* CallFunc_Array_Get_Item_1, UChildActorComponent* K2Node_DynamicCast_AsChild_Actor_Component, bool K2Node_DynamicCast_bSuccess_2, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABP_Plant_HonkingDaffodils_NonForagable_C* K2Node_DynamicCast_AsBP_Plant_Honking_Daffodils_Non_Foragable, bool K2Node_DynamicCast_bSuccess_3, int32_t CallFunc_Array_Length_ReturnValue_1, ABP_Plant_HonkingDaffodils_NonForagable_C* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_2);
}; // Size: 0x300
#pragma pack(pop)
