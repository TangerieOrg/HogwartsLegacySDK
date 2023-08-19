#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class AActor;
#pragma pack(push, 1)
class UABL_GetupCrawl_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_GetupCrawl_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_GetupCrawl(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue);
}; // Size: 0xe8
#pragma pack(pop)
