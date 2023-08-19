#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_Scheduled_MoveStart_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_Scheduled_MoveStart_C* StaticClass();
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Scheduled_MoveStart(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context);
}; // Size: 0xd0
#pragma pack(pop)
