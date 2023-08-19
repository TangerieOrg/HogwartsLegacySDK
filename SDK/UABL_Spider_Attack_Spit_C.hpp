#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class AActor;
class UObjectStateInfo;
#pragma pack(push, 1)
class UABL_Spider_Attack_Spit_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_Spider_Attack_Spit_C* StaticClass();
    void OnCustomEvent0(UAblAbilityContext* Context, FName& EventName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, AActor* CallFunc_GetSelfActor_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1);
    void OnAbilityStart0(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Spider_Attack_Spit(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context);
}; // Size: 0xd0
#pragma pack(pop)
