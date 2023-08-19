#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_DGBG_MoveSwim_Loop_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    UAblAbility* NewVar_0; // 0xd0
    static UABL_DGBG_MoveSwim_Loop_C* StaticClass();
    UAblAbility* OnGetBranchAbility(UAblAbilityContext* Context, FName& EventName);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_DGBG_MoveSwim_Loop(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context);
}; // Size: 0xd8
#pragma pack(pop)
