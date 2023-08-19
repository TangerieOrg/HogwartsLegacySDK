#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class AAmbulatory_Character;
class UObject;
class ACharacter;
class UAblAbilityContext;
class UPawnMovementComponent;
class UAblAbility;
class UClass;
class AActor;
class UAmbulatory_MovementComponent;
#pragma pack(push, 1)
class UABL_NPC_RCT_SendAway_S_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    ACharacter* TempCharRef; // 0xe8
    UObject* NewVar_0; // 0xf0
    static UABL_NPC_RCT_SendAway_S_C* StaticClass();
    void OnAbilityEnd(UAblAbilityContext* Context);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void OnAbilityStart(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_NPC_RCT_SendAway_S(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_3, UAblAbilityContext* K2Node_Event_Context_2, UAblAbilityContext* K2Node_Event_Context_1, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context, UClass* CallFunc_GetObjectClass_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, AAmbulatory_Character* K2Node_DynamicCast_AsAmbulatory_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, UAmbulatory_MovementComponent* K2Node_DynamicCast_AsAmbulatory_Movement_Component, bool K2Node_DynamicCast_bSuccess_1);
}; // Size: 0xf8
#pragma pack(pop)
