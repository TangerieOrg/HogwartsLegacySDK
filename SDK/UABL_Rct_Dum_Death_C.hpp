#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class AActor;
class ABP_TrainingDummy_C;
#pragma pack(push, 1)
class UABL_Rct_Dum_Death_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_Rct_Dum_Death_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Rct_Dum_Death(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, ABP_TrainingDummy_C* K2Node_DynamicCast_AsBP_Training_Dummy, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0xe8
#pragma pack(pop)
