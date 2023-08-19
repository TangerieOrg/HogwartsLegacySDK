#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_E_Base_C.hpp"
#include "ABP_Sphinx_Puzzle_E_Rock_C.hpp"
#include "ABP_Sphinx_Puzzle_E_Stack_C.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector.hpp"
#include "UBillboardComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UObjectStateComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Sphinx_Puzzle_E_Base_C* ABP_Sphinx_Puzzle_E_Base_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C");
    return (ABP_Sphinx_Puzzle_E_Base_C*)res;
}
void ABP_Sphinx_Puzzle_E_Base_C::OnFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.OnFinished"));
    struct Params_OnFinished {
    }; // Size: 0x0
    Params_OnFinished params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Base_C::SetFlockLocs() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.SetFlockLocs"));
    struct Params_SetFlockLocs {
    }; // Size: 0x0
    Params_SetFlockLocs params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Base_C::LoadSolution(ABP_Sphinx_Puzzle_E_Stack_C* Stack) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.LoadSolution"));
    struct Params_LoadSolution {
        ABP_Sphinx_Puzzle_E_Stack_C* Stack; // 0x0
    }; // Size: 0x8
    Params_LoadSolution params{};
    params.Stack = (ABP_Sphinx_Puzzle_E_Stack_C*)Stack;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Base_C::ReplaceRock(ABP_Sphinx_Puzzle_E_Rock_C* OldRock, ABP_Sphinx_Puzzle_E_Rock_C* NewRock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.ReplaceRock"));
    struct Params_ReplaceRock {
        ABP_Sphinx_Puzzle_E_Rock_C* OldRock; // 0x0
        ABP_Sphinx_Puzzle_E_Rock_C* NewRock; // 0x8
    }; // Size: 0x10
    Params_ReplaceRock params{};
    params.OldRock = (ABP_Sphinx_Puzzle_E_Rock_C*)OldRock;
    params.NewRock = (ABP_Sphinx_Puzzle_E_Rock_C*)NewRock;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Base_C::BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
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
void ABP_Sphinx_Puzzle_E_Base_C::Reveal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.Reveal"));
    struct Params_Reveal {
    }; // Size: 0x0
    Params_Reveal params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Base_C::Rise() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.Rise"));
    struct Params_Rise {
    }; // Size: 0x0
    Params_Rise params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Base_C::FinishLoadSolution() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.FinishLoadSolution"));
    struct Params_FinishLoadSolution {
    }; // Size: 0x0
    Params_FinishLoadSolution params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Base_C::ExecuteUbergraph_BP_Sphinx_Puzzle_E_Base(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_4, int32_t CallFunc_Array_Length_ReturnValue_5, int32_t CallFunc_Array_Length_ReturnValue_6, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, TArray<FVector>& K2Node_MakeArray_Array, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_7, int32_t CallFunc_Array_Length_ReturnValue_8, int32_t CallFunc_Array_Length_ReturnValue_9, int32_t Temp_int_Array_Index_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32_t Temp_int_Array_Index_Variable_3, FVector CallFunc_Array_Get_Item_3, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_3, int32_t Temp_int_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32_t CallFunc_Add_IntInt_ReturnValue_4, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, ABP_Sphinx_Puzzle_E_Rock_C* K2Node_CustomEvent_OldRock, ABP_Sphinx_Puzzle_E_Rock_C* K2Node_CustomEvent_NewRock, ABP_Sphinx_Puzzle_E_Rock_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Rock, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_10, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, FVector CallFunc_GetPhysicsLinearVelocity_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorInt_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, int32_t Temp_int_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_5, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_4, FTimerHandle CallFunc_K2_SetTimer_ReturnValue) {}
void ABP_Sphinx_Puzzle_E_Base_C::SolvedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Base.BP_Sphinx_Puzzle_E_Base_C.SolvedEvent__DelegateSignature"));
    struct Params_SolvedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_SolvedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
