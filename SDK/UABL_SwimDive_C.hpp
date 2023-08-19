#pragma once
#include <cstdint>
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_SwimDive_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_SwimDive_C* StaticClass();
    void OnAbilityEnd0(UAblAbilityContext* Context);
    void OnAbilityInterrupt0(UAblAbilityContext* Context);
    void OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void OnAbilityStart0(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_SwimDive(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1);
}; // Size: 0xd0
#pragma pack(pop)
