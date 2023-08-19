#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_E_Rock_C.hpp"
#include "ABP_Sphinx_Puzzle_E_Stack_C.hpp"
#include "APawn.hpp"
#include "APlayerCameraManager.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObjectStateComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UScheduler.hpp"
ABP_Sphinx_Puzzle_E_Stack_C* ABP_Sphinx_Puzzle_E_Stack_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C");
    return (ABP_Sphinx_Puzzle_E_Stack_C*)res;
}
void ABP_Sphinx_Puzzle_E_Stack_C::GetLastTimeRockAffectedBySpell(ABP_Sphinx_Puzzle_E_Rock_C* Rock, float& LastTimeAffected, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSizeSquared_ReturnValue, float CallFunc_VSizeSquared_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsBeingAffectedBySpells_ReturnValue, bool CallFunc_IsValid_ReturnValue, UScheduler* CallFunc_Get_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.GetLastTimeRockAffectedBySpell"));
    struct Params_GetLastTimeRockAffectedBySpell {
        ABP_Sphinx_Puzzle_E_Rock_C* Rock; // 0x0
        float LastTimeAffected; // 0x8
        char pad_c[0x4];
        APawn* CallFunc_GetPlayerPawn_ReturnValue; // 0x10
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x18
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x24
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x30
        FVector CallFunc_Subtract_VectorVector_ReturnValue_1; // 0x3c
        float CallFunc_VSizeSquared_ReturnValue; // 0x48
        float CallFunc_VSizeSquared_ReturnValue_1; // 0x4c
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x50
        bool CallFunc_Less_FloatFloat_ReturnValue_1; // 0x51
        char pad_52[0x6];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x58
        bool CallFunc_BooleanOR_ReturnValue; // 0x60
        bool CallFunc_IsBeingAffectedBySpells_ReturnValue; // 0x61
        bool CallFunc_IsValid_ReturnValue; // 0x62
        char pad_63[0x5];
        UScheduler* CallFunc_Get_ReturnValue; // 0x68
        float CallFunc_GetTotalSeconds_ReturnValue; // 0x70
    }; // Size: 0x74
    Params_GetLastTimeRockAffectedBySpell params{};
    params.Rock = (ABP_Sphinx_Puzzle_E_Rock_C*)Rock;
    params.LastTimeAffected = (float)LastTimeAffected;
    params.CallFunc_GetPlayerPawn_ReturnValue = (APawn*)CallFunc_GetPlayerPawn_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Subtract_VectorVector_ReturnValue_1 = (FVector)CallFunc_Subtract_VectorVector_ReturnValue_1;
    params.CallFunc_VSizeSquared_ReturnValue = (float)CallFunc_VSizeSquared_ReturnValue;
    params.CallFunc_VSizeSquared_ReturnValue_1 = (float)CallFunc_VSizeSquared_ReturnValue_1;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue_1 = (bool)CallFunc_Less_FloatFloat_ReturnValue_1;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_IsBeingAffectedBySpells_ReturnValue = (bool)CallFunc_IsBeingAffectedBySpells_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UScheduler*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetTotalSeconds_ReturnValue = (float)CallFunc_GetTotalSeconds_ReturnValue;
    ProcessEvent(func, &params);
    LastTimeAffected = params.LastTimeAffected;
}
void ABP_Sphinx_Puzzle_E_Stack_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Stack_C::AffectedBySpell(UPrimitiveComponent* HitComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.AffectedBySpell"));
    struct Params_AffectedBySpell {
        UPrimitiveComponent* HitComp; // 0x0
    }; // Size: 0x8
    Params_AffectedBySpell params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Stack_C::DampRocks(bool bDamp, bool bOppugno, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Select_Default, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_GetLinearDamping_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.DampRocks"));
    struct Params_DampRocks {
        bool bDamp; // 0x0
        bool bOppugno; // 0x1
        char pad_2[0x2];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        float Temp_float_Variable; // 0x10
        float Temp_float_Variable_1; // 0x14
        bool Temp_bool_Variable; // 0x18
        char pad_19[0x3];
        float K2Node_Select_Default; // 0x1c
        ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        int32_t CallFunc_Array_Add_ReturnValue; // 0x2c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x30
        bool CallFunc_Array_Contains_ReturnValue; // 0x31
        bool CallFunc_Not_PreBool_ReturnValue; // 0x32
        bool CallFunc_ActorHasTag_ReturnValue; // 0x33
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x34
        char pad_35[0x3];
        float CallFunc_GetLinearDamping_ReturnValue; // 0x38
        bool CallFunc_BooleanAND_ReturnValue; // 0x3c
        char pad_3d[0x3];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x40
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x44
    }; // Size: 0x45
    Params_DampRocks params{};
    params.bDamp = (bool)bDamp;
    params.bOppugno = (bool)bOppugno;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_float_Variable = (float)Temp_float_Variable;
    params.Temp_float_Variable_1 = (float)Temp_float_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (float)K2Node_Select_Default;
    params.CallFunc_Array_Get_Item = (ABP_Sphinx_Puzzle_E_Rock_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_ActorHasTag_ReturnValue = (bool)CallFunc_ActorHasTag_ReturnValue;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_GetLinearDamping_ReturnValue = (float)CallFunc_GetLinearDamping_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Stack_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Stack_C::Start__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.Start__DelegateSignature"));
    struct Params_Start__DelegateSignature {
    }; // Size: 0x0
    Params_Start__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Stack_C::EndSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.EndSpell"));
    struct Params_EndSpell {
    }; // Size: 0x0
    Params_EndSpell params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Stack_C::DisableFlocking() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.DisableFlocking"));
    struct Params_DisableFlocking {
    }; // Size: 0x0
    Params_DisableFlocking params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Stack_C::ReplaceRock(ABP_Sphinx_Puzzle_E_Rock_C* OldRock, ABP_Sphinx_Puzzle_E_Rock_C* NewRock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.ReplaceRock"));
    struct Params_ReplaceRock {
        ABP_Sphinx_Puzzle_E_Rock_C* OldRock; // 0x0
        ABP_Sphinx_Puzzle_E_Rock_C* NewRock; // 0x8
    }; // Size: 0x10
    Params_ReplaceRock params{};
    params.OldRock = (ABP_Sphinx_Puzzle_E_Rock_C*)OldRock;
    params.NewRock = (ABP_Sphinx_Puzzle_E_Rock_C*)NewRock;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Stack_C::OppugnoEvent(UPrimitiveComponent* HitComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.OppugnoEvent"));
    struct Params_OppugnoEvent {
        UPrimitiveComponent* HitComp; // 0x0
    }; // Size: 0x8
    Params_OppugnoEvent params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Stack_C::CheckRockStackReset() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.CheckRockStackReset"));
    struct Params_CheckRockStackReset {
    }; // Size: 0x0
    Params_CheckRockStackReset params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Stack_C::ExecuteUbergraph_BP_Sphinx_Puzzle_E_Stack(int32_t EntryPoint, bool Temp_bool_IsClosed_Variable) {}
