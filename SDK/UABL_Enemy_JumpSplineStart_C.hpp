#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblNPCAbility.hpp"
class UAblAbility;
class UAblAbilityContext;
class UEnemyAIComponent;
class AActor;
#pragma pack(push, 1)
class UABL_Enemy_JumpSplineStart_C : public UAblNPCAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    UAblAbility* NewVar_0; // 0xd0
    static UABL_Enemy_JumpSplineStart_C* StaticClass();
    UAblAbility* OnGetBranchAbility(UAblAbilityContext* Context, FName& EventName, AActor* CallFunc_GetSelfActor_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Enemy_JumpSplineStart(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsAbilityActive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0xd8
#pragma pack(pop)
