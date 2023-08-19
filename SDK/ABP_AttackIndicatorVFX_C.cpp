#include "AActor.hpp"
#include "ABP_AttackIndicatorVFX_C.hpp"
#include "APlayer_AttackIndicator.hpp"
#include "FMultiFX2Handle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPokeNiagaraFXBool.hpp"
#include "FPokeNiagaraFXFloat.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "USceneComponent.hpp"
ABP_AttackIndicatorVFX_C* ABP_AttackIndicatorVFX_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/BP_AttackIndicatorVFX.BP_AttackIndicatorVFX_C");
    return (ABP_AttackIndicatorVFX_C*)res;
}
void ABP_AttackIndicatorVFX_C::ReceivePerfectParry0(FMultiFX2Handle InParraybleFX2Handle, FMultiFX2Handle InPerfectParryFX2Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_AttackIndicatorVFX.BP_AttackIndicatorVFX_C.ReceivePerfectParry"));
    struct Params_ReceivePerfectParry {
        FMultiFX2Handle InParraybleFX2Handle; // 0x0
        FMultiFX2Handle InPerfectParryFX2Handle; // 0x8
    }; // Size: 0x10
    Params_ReceivePerfectParry params{};
    params.InParraybleFX2Handle = (FMultiFX2Handle)InParraybleFX2Handle;
    params.InPerfectParryFX2Handle = (FMultiFX2Handle)InPerfectParryFX2Handle;
    ProcessEvent(func, &params);
}
void ABP_AttackIndicatorVFX_C::ReceiveIndicatorStart0(bool bIsParryIndicator, bool bIsUnblockableIndicator, FMultiFX2Handle InFX2Handle, float InEstimatedTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_AttackIndicatorVFX.BP_AttackIndicatorVFX_C.ReceiveIndicatorStart"));
    struct Params_ReceiveIndicatorStart {
        bool bIsParryIndicator; // 0x0
        bool bIsUnblockableIndicator; // 0x1
        char pad_2[0x6];
        FMultiFX2Handle InFX2Handle; // 0x8
        float InEstimatedTime; // 0x10
    }; // Size: 0x14
    Params_ReceiveIndicatorStart params{};
    params.bIsParryIndicator = (bool)bIsParryIndicator;
    params.bIsUnblockableIndicator = (bool)bIsUnblockableIndicator;
    params.InFX2Handle = (FMultiFX2Handle)InFX2Handle;
    params.InEstimatedTime = (float)InEstimatedTime;
    ProcessEvent(func, &params);
}
void ABP_AttackIndicatorVFX_C::ReceiveIndicatorStop0(bool bIsParryIndicator, bool bIsUnblockableIndicator, FMultiFX2Handle InFX2Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_AttackIndicatorVFX.BP_AttackIndicatorVFX_C.ReceiveIndicatorStop"));
    struct Params_ReceiveIndicatorStop {
        bool bIsParryIndicator; // 0x0
        bool bIsUnblockableIndicator; // 0x1
        char pad_2[0x6];
        FMultiFX2Handle InFX2Handle; // 0x8
    }; // Size: 0x10
    Params_ReceiveIndicatorStop params{};
    params.bIsParryIndicator = (bool)bIsParryIndicator;
    params.bIsUnblockableIndicator = (bool)bIsUnblockableIndicator;
    params.InFX2Handle = (FMultiFX2Handle)InFX2Handle;
    ProcessEvent(func, &params);
}
void ABP_AttackIndicatorVFX_C::ExecuteUbergraph_BP_AttackIndicatorVFX(int32_t EntryPoint, bool K2Node_Event_bIsParryIndicator, bool K2Node_Event_bIsUnblockableIndicator, FMultiFX2Handle K2Node_Event_InFX2Handle, FPokeNiagaraFXBool K2Node_MakeStruct_PokeNiagaraFXBool, FMultiFX2Handle K2Node_Event_InParraybleFX2Handle, FMultiFX2Handle K2Node_Event_InPerfectParryFX2Handle, bool K2Node_Event_bIsParryIndicator_1, bool K2Node_Event_bIsUnblockableIndicator_1, FMultiFX2Handle K2Node_Event_InFX2Handle_1, float K2Node_Event_InEstimatedTime, bool CallFunc_FXPokeNiagaraBool_bSuccess, FPokeNiagaraFXFloat K2Node_MakeStruct_PokeNiagaraFXFloat, bool CallFunc_FXPokeNiagaraFloat_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_AttackIndicatorVFX.BP_AttackIndicatorVFX_C.ExecuteUbergraph_BP_AttackIndicatorVFX"));
    struct Params_ExecuteUbergraph_BP_AttackIndicatorVFX {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_bIsParryIndicator; // 0x4
        bool K2Node_Event_bIsUnblockableIndicator; // 0x5
        char pad_6[0x2];
        FMultiFX2Handle K2Node_Event_InFX2Handle; // 0x8
        FPokeNiagaraFXBool K2Node_MakeStruct_PokeNiagaraFXBool; // 0x10
        FMultiFX2Handle K2Node_Event_InParraybleFX2Handle; // 0x28
        FMultiFX2Handle K2Node_Event_InPerfectParryFX2Handle; // 0x30
        bool K2Node_Event_bIsParryIndicator_1; // 0x38
        bool K2Node_Event_bIsUnblockableIndicator_1; // 0x39
        char pad_3a[0x6];
        FMultiFX2Handle K2Node_Event_InFX2Handle_1; // 0x40
        float K2Node_Event_InEstimatedTime; // 0x48
        bool CallFunc_FXPokeNiagaraBool_bSuccess; // 0x4c
        char pad_4d[0x3];
        FPokeNiagaraFXFloat K2Node_MakeStruct_PokeNiagaraFXFloat; // 0x50
        bool CallFunc_FXPokeNiagaraFloat_bSuccess; // 0x68
    }; // Size: 0x69
    Params_ExecuteUbergraph_BP_AttackIndicatorVFX params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_bIsParryIndicator = (bool)K2Node_Event_bIsParryIndicator;
    params.K2Node_Event_bIsUnblockableIndicator = (bool)K2Node_Event_bIsUnblockableIndicator;
    params.K2Node_Event_InFX2Handle = (FMultiFX2Handle)K2Node_Event_InFX2Handle;
    params.K2Node_MakeStruct_PokeNiagaraFXBool = (FPokeNiagaraFXBool)K2Node_MakeStruct_PokeNiagaraFXBool;
    params.K2Node_Event_InParraybleFX2Handle = (FMultiFX2Handle)K2Node_Event_InParraybleFX2Handle;
    params.K2Node_Event_InPerfectParryFX2Handle = (FMultiFX2Handle)K2Node_Event_InPerfectParryFX2Handle;
    params.K2Node_Event_bIsParryIndicator_1 = (bool)K2Node_Event_bIsParryIndicator_1;
    params.K2Node_Event_bIsUnblockableIndicator_1 = (bool)K2Node_Event_bIsUnblockableIndicator_1;
    params.K2Node_Event_InFX2Handle_1 = (FMultiFX2Handle)K2Node_Event_InFX2Handle_1;
    params.K2Node_Event_InEstimatedTime = (float)K2Node_Event_InEstimatedTime;
    params.CallFunc_FXPokeNiagaraBool_bSuccess = (bool)CallFunc_FXPokeNiagaraBool_bSuccess;
    params.K2Node_MakeStruct_PokeNiagaraFXFloat = (FPokeNiagaraFXFloat)K2Node_MakeStruct_PokeNiagaraFXFloat;
    params.CallFunc_FXPokeNiagaraFloat_bSuccess = (bool)CallFunc_FXPokeNiagaraFloat_bSuccess;
    ProcessEvent(func, &params);
}
