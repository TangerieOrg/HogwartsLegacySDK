#include "AActor.hpp"
#include "ABP_Plant_HonkingDaffodils_NonForagable_C.hpp"
#include "ABP_WE_HonkingDaffodils_C.hpp"
#include "ABiped_Player.hpp"
#include "AWorldEventActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBP_WorldEvent_DropComponentsToGround_C.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USphereComponent.hpp"
ABP_WE_HonkingDaffodils_C* ABP_WE_HonkingDaffodils_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/HonkingDaffodils/BP_WE_HonkingDaffodils.BP_WE_HonkingDaffodils_C");
    return (ABP_WE_HonkingDaffodils_C*)res;
}
void ABP_WE_HonkingDaffodils_C::BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HonkingDaffodils/BP_WE_HonkingDaffodils.BP_WE_HonkingDaffodils_C.BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_WE_HonkingDaffodils_C::BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HonkingDaffodils/BP_WE_HonkingDaffodils.BP_WE_HonkingDaffodils_C.BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_WE_HonkingDaffodils_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HonkingDaffodils/BP_WE_HonkingDaffodils.BP_WE_HonkingDaffodils_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_WE_HonkingDaffodils_C::ExecuteUbergraph_BP_WE_HonkingDaffodils(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, ABP_Plant_HonkingDaffodils_NonForagable_C* CallFunc_Array_Get_Item, USceneComponent* CallFunc_Array_Get_Item_1, UChildActorComponent* K2Node_DynamicCast_AsChild_Actor_Component, bool K2Node_DynamicCast_bSuccess_2, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABP_Plant_HonkingDaffodils_NonForagable_C* K2Node_DynamicCast_AsBP_Plant_Honking_Daffodils_Non_Foragable, bool K2Node_DynamicCast_bSuccess_3, int32_t CallFunc_Array_Length_ReturnValue_1, ABP_Plant_HonkingDaffodils_NonForagable_C* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HonkingDaffodils/BP_WE_HonkingDaffodils.BP_WE_HonkingDaffodils_C.ExecuteUbergraph_BP_WE_HonkingDaffodils"));
    struct Params_ExecuteUbergraph_BP_WE_HonkingDaffodils {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0xc
        int32_t Temp_int_Array_Index_Variable_1; // 0x10
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x18
        int32_t Temp_int_Array_Index_Variable_2; // 0x1c
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1; // 0x20
        AActor* K2Node_ComponentBoundEvent_OtherActor_1; // 0x28
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1; // 0x30
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1; // 0x38
        bool K2Node_ComponentBoundEvent_bFromSweep; // 0x3c
        char pad_3d[0x3];
        FHitResult K2Node_ComponentBoundEvent_SweepResult; // 0x40
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent; // 0xc8
        AActor* K2Node_ComponentBoundEvent_OtherActor; // 0xd0
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp; // 0xd8
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex; // 0xe0
        char pad_e4[0x4];
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0xe8
        bool K2Node_DynamicCast_bSuccess; // 0xf0
        char pad_f1[0x7];
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1; // 0xf8
        bool K2Node_DynamicCast_bSuccess_1; // 0x100
        char pad_101[0x7];
        TArray<USceneComponent*> CallFunc_GetChildrenComponents_Children; // 0x108
        ABP_Plant_HonkingDaffodils_NonForagable_C* CallFunc_Array_Get_Item; // 0x118
        USceneComponent* CallFunc_Array_Get_Item_1; // 0x120
        UChildActorComponent* K2Node_DynamicCast_AsChild_Actor_Component; // 0x128
        bool K2Node_DynamicCast_bSuccess_2; // 0x130
        char pad_131[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x134
        bool CallFunc_Less_IntInt_ReturnValue; // 0x138
        char pad_139[0x7];
        ABP_Plant_HonkingDaffodils_NonForagable_C* K2Node_DynamicCast_AsBP_Plant_Honking_Daffodils_Non_Foragable; // 0x140
        bool K2Node_DynamicCast_bSuccess_3; // 0x148
        char pad_149[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x14c
        ABP_Plant_HonkingDaffodils_NonForagable_C* CallFunc_Array_Get_Item_2; // 0x150
        int32_t CallFunc_Array_Add_ReturnValue; // 0x158
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x15c
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x160
        char pad_161[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x164
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x168
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x16c
        char pad_16d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x170
    }; // Size: 0x174
    Params_ExecuteUbergraph_BP_WE_HonkingDaffodils params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.K2Node_ComponentBoundEvent_OverlappedComponent_1 = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent_1;
    params.K2Node_ComponentBoundEvent_OtherActor_1 = (AActor*)K2Node_ComponentBoundEvent_OtherActor_1;
    params.K2Node_ComponentBoundEvent_OtherComp_1 = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp_1;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex_1;
    params.K2Node_ComponentBoundEvent_bFromSweep = (bool)K2Node_ComponentBoundEvent_bFromSweep;
    params.K2Node_ComponentBoundEvent_SweepResult = (FHitResult)K2Node_ComponentBoundEvent_SweepResult;
    params.K2Node_ComponentBoundEvent_OverlappedComponent = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent;
    params.K2Node_ComponentBoundEvent_OtherActor = (AActor*)K2Node_ComponentBoundEvent_OtherActor;
    params.K2Node_ComponentBoundEvent_OtherComp = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsBiped_Player_1 = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetChildrenComponents_Children = (TArray<USceneComponent*>)CallFunc_GetChildrenComponents_Children;
    params.CallFunc_Array_Get_Item = (ABP_Plant_HonkingDaffodils_NonForagable_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (USceneComponent*)CallFunc_Array_Get_Item_1;
    params.K2Node_DynamicCast_AsChild_Actor_Component = (UChildActorComponent*)K2Node_DynamicCast_AsChild_Actor_Component;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Plant_Honking_Daffodils_Non_Foragable = (ABP_Plant_HonkingDaffodils_NonForagable_C*)K2Node_DynamicCast_AsBP_Plant_Honking_Daffodils_Non_Foragable;
    params.K2Node_DynamicCast_bSuccess_3 = (bool)K2Node_DynamicCast_bSuccess_3;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Array_Get_Item_2 = (ABP_Plant_HonkingDaffodils_NonForagable_C*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    ProcessEvent(func, &params);
    CallFunc_GetChildrenComponents_Children = params.CallFunc_GetChildrenComponents_Children;
}
