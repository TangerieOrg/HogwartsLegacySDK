#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_RCT_NPC_SuperSlam_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_RCT_NPC_SuperSlam_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_RCT_NPC_SuperSlam(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context);
}; // Size: 0xe8
#pragma pack(pop)
