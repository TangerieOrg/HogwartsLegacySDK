#include "ABP_GlowBugSwarm_C.hpp"
#include "ABP_InstancedFlock_C.hpp"
#include "BP_GlowBugSwarm_State\Type.hpp"
#include "FFlockingParametersAdjustable.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
void ABP_GlowBugSwarm_C::Show_State(BP_GlowBugSwarm_State::Type Swarm_State, bool Enabled, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Conv_FloatToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GlowBugSwarm.BP_GlowBugSwarm_C.Show State"));
    struct Params_Show_State {
        BP_GlowBugSwarm_State::Type Swarm_State; // 0x0
        bool Enabled; // 0x1
        char pad_2[0x6];
        FString CallFunc_GetDisplayName_ReturnValue; // 0x8
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x28
        float CallFunc_GetRealTimeSeconds_ReturnValue; // 0x38
        char pad_3c[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x40
        FString CallFunc_Conv_FloatToString_ReturnValue; // 0x50
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x60
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x70
        FString CallFunc_Concat_StrStr_ReturnValue_4; // 0x80
    }; // Size: 0x90
    Params_Show_State params{};
    params.Swarm_State = (BP_GlowBugSwarm_State::Type)Swarm_State;
    params.Enabled = (bool)Enabled;
    params.CallFunc_GetDisplayName_ReturnValue = (FString)CallFunc_GetDisplayName_ReturnValue;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_GetRealTimeSeconds_ReturnValue = (float)CallFunc_GetRealTimeSeconds_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Conv_FloatToString_ReturnValue = (FString)CallFunc_Conv_FloatToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.CallFunc_Concat_StrStr_ReturnValue_4 = (FString)CallFunc_Concat_StrStr_ReturnValue_4;
    ProcessEvent(func, &params);
}
ABP_GlowBugSwarm_C* ABP_GlowBugSwarm_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/BP_GlowBugSwarm.BP_GlowBugSwarm_C");
    return (ABP_GlowBugSwarm_C*)res;
}
void ABP_GlowBugSwarm_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GlowBugSwarm.BP_GlowBugSwarm_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_GlowBugSwarm_C::SpeedChange(BP_GlowBugSwarm_State::Type NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GlowBugSwarm.BP_GlowBugSwarm_C.SpeedChange"));
    struct Params_SpeedChange {
        BP_GlowBugSwarm_State::Type NewState; // 0x0
    }; // Size: 0x1
    Params_SpeedChange params{};
    params.NewState = (BP_GlowBugSwarm_State::Type)NewState;
    ProcessEvent(func, &params);
}
void ABP_GlowBugSwarm_C::ExecuteUbergraph_BP_GlowBugSwarm(int32_t EntryPoint, FFlockingParametersAdjustable Temp_struct_Variable, BP_GlowBugSwarm_State::Type K2Node_CustomEvent_NewState, BP_GlowBugSwarm_State::Type Temp_byte_Variable, FFlockingParametersAdjustable K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GlowBugSwarm.BP_GlowBugSwarm_C.ExecuteUbergraph_BP_GlowBugSwarm"));
    struct Params_ExecuteUbergraph_BP_GlowBugSwarm {
        int32_t EntryPoint; // 0x0
        FFlockingParametersAdjustable Temp_struct_Variable; // 0x4
        BP_GlowBugSwarm_State::Type K2Node_CustomEvent_NewState; // 0x60
        BP_GlowBugSwarm_State::Type Temp_byte_Variable; // 0x61
        char pad_62[0x2];
        FFlockingParametersAdjustable K2Node_Select_Default; // 0x64
    }; // Size: 0xc0
    Params_ExecuteUbergraph_BP_GlowBugSwarm params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_struct_Variable = (FFlockingParametersAdjustable)Temp_struct_Variable;
    params.K2Node_CustomEvent_NewState = (BP_GlowBugSwarm_State::Type)K2Node_CustomEvent_NewState;
    params.Temp_byte_Variable = (BP_GlowBugSwarm_State::Type)Temp_byte_Variable;
    params.K2Node_Select_Default = (FFlockingParametersAdjustable)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void ABP_GlowBugSwarm_C::NewEventDispatcher_0__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_GlowBugSwarm.BP_GlowBugSwarm_C.NewEventDispatcher_0__DelegateSignature"));
    struct Params_NewEventDispatcher_0__DelegateSignature {
    }; // Size: 0x0
    Params_NewEventDispatcher_0__DelegateSignature params{};
    ProcessEvent(func, &params);
}
