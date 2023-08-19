#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_Rct_Dum_Death_02_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    FName FallApartEventName; // 0xe8
    static UABL_Rct_Dum_Death_02_C* StaticClass();
    void OnCustomEvent(UAblAbilityContext* Context, FName& EventName);
    void OnAbilityStart(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Rct_Dum_Death_02(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context);
}; // Size: 0xf0
#pragma pack(pop)
