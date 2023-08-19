#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class AActor;
class UObjectStateInfo;
class UAblAbility;
#pragma pack(push, 1)
class UABL_HitFreeze_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_HitFreeze_C* StaticClass();
    bool CustomCanBranchTo(UAblAbilityContext* Context, AActor* CallFunc_GetSelfActor_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
    void OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_HitFreeze(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility);
}; // Size: 0xe8
#pragma pack(pop)
