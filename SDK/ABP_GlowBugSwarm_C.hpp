#pragma once
#include <cstdint>
#include "ABP_InstancedFlock_C.hpp"
#include "BP_GlowBugSwarm_State\Type.hpp"
#include "FFlockingParametersAdjustable.hpp"
#include "FPointerToUberGraphFrame.hpp"
#pragma pack(push, 1)
class ABP_GlowBugSwarm_C : public ABP_InstancedFlock_C {
public:
    char pad_700[0x10];
    FFlockingParametersAdjustable IdleParams; // 0x710
    FFlockingParametersAdjustable CapturedParams; // 0x76c
    FFlockingParametersAdjustable ActivatingTargetParams; // 0x7c8
    FFlockingParametersAdjustable RetreatParams; // 0x824
    BP_GlowBugSwarm_State::Type Current_State; // 0x880
    char pad_881[0x3];
    float StateBlendTimeSeconds; // 0x884
    char pad_888[0x8];
    static ABP_GlowBugSwarm_C* StaticClass();
    void Show_State(BP_GlowBugSwarm_State::Type Swarm_State, bool Enabled, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Conv_FloatToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4);
    void ReceiveBeginPlay0();
    void SpeedChange(BP_GlowBugSwarm_State::Type NewState);
    void ExecuteUbergraph_BP_GlowBugSwarm(int32_t EntryPoint, FFlockingParametersAdjustable Temp_struct_Variable, BP_GlowBugSwarm_State::Type K2Node_CustomEvent_NewState, BP_GlowBugSwarm_State::Type Temp_byte_Variable, FFlockingParametersAdjustable K2Node_Select_Default);
    void NewEventDispatcher_0__DelegateSignature();
}; // Size: 0x890
#pragma pack(pop)
