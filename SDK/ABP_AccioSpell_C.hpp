#pragma once
#include <cstdint>
#include "AAccioSpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class ASpellTool;
class UNiagaraComponent;
class UInputComponent;
#pragma pack(push, 1)
class ABP_AccioSpell_C : public AAccioSpellTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xae8
    USceneComponent* DefaultSceneRoot; // 0xaf0
    UInputComponent* Parent_Input_Component; // 0xaf8
    ASpellTool* BonusSpellTool; // 0xb00
    UNiagaraComponent* N_TrailBeam; // 0xb08
    UNiagaraComponent* ActiveBeam; // 0xb10
    static ABP_AccioSpell_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_AccioSpell(int32_t EntryPoint);
}; // Size: 0xb18
#pragma pack(pop)
