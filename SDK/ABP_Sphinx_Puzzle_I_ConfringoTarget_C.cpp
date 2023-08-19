#include "AActor.hpp"
#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "ABP_Sphinx_Puzzle_I_ConfringoTarget_C.hpp"
#include "ABP_Sphinx_Puzzle_I_Manager_C.hpp"
#include "ABP_Sphinx_Puzzle_I_Part_C.hpp"
#include "ASpellTool.hpp"
#include "EInteractiveState.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_Sphinx_Confringo_Target.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "USpellToolRecord.hpp"
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::Solved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.Solved"));
    struct Params_Solved {
    }; // Size: 0x0
    Params_Solved params{};
    ProcessEvent(func, &params);
}
ABP_Sphinx_Puzzle_I_ConfringoTarget_C* ABP_Sphinx_Puzzle_I_ConfringoTarget_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C");
    return (ABP_Sphinx_Puzzle_I_ConfringoTarget_C*)res;
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::NotifyBeginPuzzle0(EInteractiveState State) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.NotifyBeginPuzzle"));
    struct Params_NotifyBeginPuzzle {
        EInteractiveState State; // 0x0
    }; // Size: 0x1
    Params_NotifyBeginPuzzle params{};
    params.State = (EInteractiveState)State;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::Build0(int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FSTR_Sphinx_Confringo_Target CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, UChildActorComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABP_Sphinx_Puzzle_I_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_I_Part, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Array_Add_ReturnValue, ABP_Sphinx_Puzzle_I_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_I_Manager, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.Build"));
    struct Params_Build {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t CallFunc_Array_Length_ReturnValue; // 0xc
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x10
        char pad_11[0xf];
        FSTR_Sphinx_Confringo_Target CallFunc_Array_Get_Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x60
        char pad_64[0x4];
        UChildActorComponent* CallFunc_AddComponent_ReturnValue; // 0x68
        bool CallFunc_Less_IntInt_ReturnValue; // 0x70
        char pad_71[0x7];
        ABP_Sphinx_Puzzle_I_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_I_Part; // 0x78
        bool K2Node_DynamicCast_bSuccess; // 0x80
        char pad_81[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x84
        ABP_Sphinx_Puzzle_I_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_I_Manager; // 0x88
        bool K2Node_DynamicCast_bSuccess_1; // 0x90
    }; // Size: 0x91
    Params_Build params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FSTR_Sphinx_Confringo_Target)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_AddComponent_ReturnValue = (UChildActorComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_I_Part = (ABP_Sphinx_Puzzle_I_Part_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_I_Part;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_I_Manager = (ABP_Sphinx_Puzzle_I_Manager_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_I_Manager;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.OnHitBySpell"));
    struct Params_OnHitBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FHitResult Hit; // 0x20
        FVector ImpactDirection; // 0xa8
    }; // Size: 0xb4
    Params_OnHitBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.OnAffectedBySpell"));
    struct Params_OnAffectedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x10
        USpellToolRecord* SpellToolRecord; // 0x20
        FName SpellType; // 0x28
        FGameplayTagContainer Impact; // 0x30
        FHitResult Hit; // 0x50
        FVector ImpactDirection; // 0xd8
    }; // Size: 0xe4
    Params_OnAffectedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.OnAffectedBySpellEnd"));
    struct Params_OnAffectedBySpellEnd {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
    }; // Size: 0x40
    Params_OnAffectedBySpellEnd params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.OnOverlappedBySpell"));
    struct Params_OnOverlappedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
        FVector MunitionLocation; // 0x40
    }; // Size: 0x4c
    Params_OnOverlappedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.MunitionLocation = (FVector)MunitionLocation;
    ProcessEvent(func, &params);
    MunitionLocation = params.MunitionLocation;
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature"));
    struct Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::NotifyCurrentState0(EInteractiveState CurrentObjectState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.NotifyCurrentState"));
    struct Params_NotifyCurrentState {
        EInteractiveState CurrentObjectState; // 0x0
    }; // Size: 0x1
    Params_NotifyCurrentState params{};
    params.CurrentObjectState = (EInteractiveState)CurrentObjectState;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::PuzzleStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_ConfringoTarget.BP_Sphinx_Puzzle_I_ConfringoTarget_C.PuzzleStart"));
    struct Params_PuzzleStart {
    }; // Size: 0x0
    Params_PuzzleStart params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_ConfringoTarget_C::ExecuteUbergraph_BP_Sphinx_Puzzle_I_ConfringoTarget(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, int32_t Temp_int_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_AutoSaveGameData_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_6, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_4, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_3, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_2, AActor* K2Node_Event_Instigator_1, AActor* K2Node_Event_Instigator, EInteractiveState K2Node_Event_CurrentObjectState, EInteractiveState K2Node_Event_state, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, ABP_Sphinx_Puzzle_I_Part_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, ABP_Sphinx_Puzzle_I_Part_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, ABP_Sphinx_Puzzle_I_Part_C* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, ABP_Sphinx_Puzzle_I_Part_C* CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3) {}
