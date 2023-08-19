#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class AActor;
#pragma pack(push, 1)
class UABL_Spider_Spawn_Launch_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_Spider_Spawn_Launch_C* StaticClass();
    void OnCustomEvent0(UAblAbilityContext* Context, FName& EventName);
    void ResetPitchAndRoll(UAblAbilityContext* Context, AActor* CallFunc_GetSelfActor_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
    void OnAbilityStart0(UAblAbilityContext* Context);
    void OnAbilityEnd0(UAblAbilityContext* Context);
    void OnAbilityInterrupt0(UAblAbilityContext* Context);
    void OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_Spider_Spawn_Launch(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_2, UAblAbilityContext* K2Node_Event_Context_3);
}; // Size: 0xd0
#pragma pack(pop)
