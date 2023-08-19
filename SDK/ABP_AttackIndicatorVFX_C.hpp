#pragma once
#include <cstdint>
#include "APlayer_AttackIndicator.hpp"
#include "FMultiFX2Handle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPokeNiagaraFXBool.hpp"
#include "FPokeNiagaraFXFloat.hpp"
class USceneComponent;
class UNiagaraComponent;
class AActor;
#pragma pack(push, 1)
class ABP_AttackIndicatorVFX_C : public APlayer_AttackIndicator {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
    USceneComponent* DefaultSceneRoot; // 0x2b0
    UNiagaraComponent* Niagara_Component; // 0x2b8
    AActor* AttackingEnemy; // 0x2c0
    static ABP_AttackIndicatorVFX_C* StaticClass();
    void ReceivePerfectParry0(FMultiFX2Handle InParraybleFX2Handle, FMultiFX2Handle InPerfectParryFX2Handle);
    void ReceiveIndicatorStart0(bool bIsParryIndicator, bool bIsUnblockableIndicator, FMultiFX2Handle InFX2Handle, float InEstimatedTime);
    void ReceiveIndicatorStop0(bool bIsParryIndicator, bool bIsUnblockableIndicator, FMultiFX2Handle InFX2Handle);
    void ExecuteUbergraph_BP_AttackIndicatorVFX(int32_t EntryPoint, bool K2Node_Event_bIsParryIndicator, bool K2Node_Event_bIsUnblockableIndicator, FMultiFX2Handle K2Node_Event_InFX2Handle, FPokeNiagaraFXBool K2Node_MakeStruct_PokeNiagaraFXBool, FMultiFX2Handle K2Node_Event_InParraybleFX2Handle, FMultiFX2Handle K2Node_Event_InPerfectParryFX2Handle, bool K2Node_Event_bIsParryIndicator_1, bool K2Node_Event_bIsUnblockableIndicator_1, FMultiFX2Handle K2Node_Event_InFX2Handle_1, float K2Node_Event_InEstimatedTime, bool CallFunc_FXPokeNiagaraBool_bSuccess, FPokeNiagaraFXFloat K2Node_MakeStruct_PokeNiagaraFXFloat, bool CallFunc_FXPokeNiagaraFloat_bSuccess);
}; // Size: 0x2c8
#pragma pack(pop)
