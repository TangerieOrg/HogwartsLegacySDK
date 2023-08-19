#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_Sprint_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_Sprint_C* StaticClass();
    void OnAbilityEnd(UAblAbilityContext* Context);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Sprint(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbilityContext* K2Node_Event_Context_1);
}; // Size: 0xd0
#pragma pack(pop)
