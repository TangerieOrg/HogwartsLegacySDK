#include "AActor.hpp"
#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "ABP_Sphinx_Puzzle_D_Ball_C.hpp"
#include "ABP_Sphinx_Puzzle_D_Part_C.hpp"
#include "ATriggerBox.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EInteractiveState.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UBoxComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMeshComponent.hpp"
void ABP_Sphinx_Puzzle_D_Ball_C::Solved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.Solved"));
    struct Params_Solved {
    }; // Size: 0x0
    Params_Solved params{};
    ProcessEvent(func, &params);
}
ABP_Sphinx_Puzzle_D_Ball_C* ABP_Sphinx_Puzzle_D_Ball_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C");
    return (ABP_Sphinx_Puzzle_D_Ball_C*)res;
}
void ABP_Sphinx_Puzzle_D_Ball_C::UserConstructionScript(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, ATriggerBox* K2Node_DynamicCast_AsTrigger_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult_1, UChildActorComponent* CallFunc_AddComponent_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, ABP_Sphinx_Puzzle_D_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_D_Part, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult; // 0xc
        char pad_94[0x4];
        AActor* CallFunc_Array_Get_Item; // 0x98
        int32_t CallFunc_Array_Length_ReturnValue; // 0xa0
        char pad_a4[0x4];
        ATriggerBox* K2Node_DynamicCast_AsTrigger_Box; // 0xa8
        bool K2Node_DynamicCast_bSuccess; // 0xb0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xb1
        char pad_b2[0x2];
        FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult; // 0xb4
        FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult; // 0x13c
        FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult_1; // 0x1c4
        char pad_24c[0x4];
        UChildActorComponent* CallFunc_AddComponent_ReturnValue; // 0x250
        char pad_258[0x8];
        FTransform CallFunc_K2_GetComponentToWorld_ReturnValue; // 0x260
        ABP_Sphinx_Puzzle_D_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_D_Part; // 0x290
        bool K2Node_DynamicCast_bSuccess_1; // 0x298
    }; // Size: 0x299
    Params_UserConstructionScript params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_K2_AddRelativeRotation_SweepHitResult = (FHitResult)CallFunc_K2_AddRelativeRotation_SweepHitResult;
    params.CallFunc_Array_Get_Item = (AActor*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.K2Node_DynamicCast_AsTrigger_Box = (ATriggerBox*)K2Node_DynamicCast_AsTrigger_Box;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_K2_AddRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_AddRelativeLocation_SweepHitResult;
    params.CallFunc_K2_SetRelativeTransform_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeTransform_SweepHitResult;
    params.CallFunc_K2_SetRelativeTransform_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeTransform_SweepHitResult_1;
    params.CallFunc_AddComponent_ReturnValue = (UChildActorComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_K2_GetComponentToWorld_ReturnValue = (FTransform)CallFunc_K2_GetComponentToWorld_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_D_Part = (ABP_Sphinx_Puzzle_D_Part_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_D_Part;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Ball_C::NotifyCurrentState0(EInteractiveState CurrentObjectState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.NotifyCurrentState"));
    struct Params_NotifyCurrentState {
        EInteractiveState CurrentObjectState; // 0x0
    }; // Size: 0x1
    Params_NotifyCurrentState params{};
    params.CurrentObjectState = (EInteractiveState)CurrentObjectState;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Ball_C::BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Ball_C::NotifyBeginPuzzle0(EInteractiveState State) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.NotifyBeginPuzzle"));
    struct Params_NotifyBeginPuzzle {
        EInteractiveState State; // 0x0
    }; // Size: 0x1
    Params_NotifyBeginPuzzle params{};
    params.State = (EInteractiveState)State;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Ball_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Ball_C::BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_Sphinx_Puzzle_D_Ball_C::BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature"));
    struct Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Ball_C::EndHighlight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.EndHighlight"));
    struct Params_EndHighlight {
    }; // Size: 0x0
    Params_EndHighlight params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Ball_C::PuzzleStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.PuzzleStart"));
    struct Params_PuzzleStart {
    }; // Size: 0x0
    Params_PuzzleStart params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Ball_C::OnResetTrigger(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.OnResetTrigger"));
    struct Params_OnResetTrigger {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnResetTrigger params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Ball_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Ball_C::ExecuteUbergraph_BP_Sphinx_Puzzle_D_Ball(int32_t EntryPoint) {}
