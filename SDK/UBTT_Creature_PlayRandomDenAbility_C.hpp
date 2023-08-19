#pragma once
#include <cstdint>
#include "ECreatureStance.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class UCreature_AIComponent;
class AAIController;
class APawn;
#pragma pack(push, 1)
class UBTT_Creature_PlayRandomDenAbility_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    ECreatureStance Creature_Stance; // 0xb0
    bool Force_Execute; // 0xb1
    char pad_b2[0x56];
    UCreature_AIComponent* AIComponent; // 0x108
    static UBTT_Creature_PlayRandomDenAbility_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_PlayRandomDenAbility(int32_t EntryPoint, FGameplayTagContainer Temp_struct_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_RandomInteger_ReturnValue, ECreatureStance CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn);
}; // Size: 0x110
#pragma pack(pop)
