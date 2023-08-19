#pragma once
#include <cstdint>
#include "AConfringoSpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class UMultiFX2Asset;
class UInteractionArchitectAsset;
class AActor;
class ACharacter;
class UIncendioComponent;
#pragma pack(push, 1)
class ABP_ConfringoSpell_C : public AConfringoSpellTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x998
    USceneComponent* DefaultSceneRoot; // 0x9a0
    TArray<UInteractionArchitectAsset*> In_Munition_Data_Assets; // 0x9a8
    UMultiFX2Asset* Multi_FX2; // 0x9b8
    static ABP_ConfringoSpell_C* StaticClass();
    void OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected);
    void AddOnFireDoT(AActor* Target);
    void ExecuteUbergraph_BP_ConfringoSpell(int32_t EntryPoint, AActor* K2Node_Event_Target_1, USceneComponent* K2Node_Event_Component, bool K2Node_Event_bInTargetAffected, AActor* K2Node_Event_Target, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetCharacterActor_ReturnValue, UIncendioComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoDamageOverTime_ReturnValue);
}; // Size: 0x9c0
#pragma pack(pop)
