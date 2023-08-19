#pragma once
#include <cstdint>
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class AActor;
#pragma pack(push, 1)
class UABL_Levitated_Start_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_Levitated_Start_C* StaticClass();
    void OnAbilityEnd(UAblAbilityContext* Context);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Levitated_Start(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, AActor* CallFunc_GetOwner_ReturnValue);
}; // Size: 0xe8
#pragma pack(pop)
