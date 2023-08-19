#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_Enemy_Move_Start_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_Enemy_Move_Start_C* StaticClass();
    void OnAbilityInterrupt0(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Enemy_Move_Start(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context);
}; // Size: 0xd0
#pragma pack(pop)
