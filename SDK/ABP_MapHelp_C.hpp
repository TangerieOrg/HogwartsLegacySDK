#pragma once
#include <cstdint>
#include "AInventoryItemTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
class USkeletalMeshComponent;
class UPathNavigationManager;
class UABP_MapHelp_C;
class ACharacter;
class ABiped_Player;
class UAnimInstance;
#pragma pack(push, 1)
class ABP_MapHelp_C : public AInventoryItemTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x430
    USkeletalMeshComponent* SkeletalMesh; // 0x438
    TArray<FVector> Path; // 0x440
    static ABP_MapHelp_C* StaticClass();
    void UseItem();
    void BeginItemUsage();
    void ItemEvent(FName EventName);
    void ExecuteUbergraph_BP_MapHelp(int32_t EntryPoint, UPathNavigationManager* CallFunc_Get_ReturnValue, ACharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_GiveMeHelp_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, bool CallFunc_GetBoolVariable_ReturnValue, bool CallFunc_ConsumeItem_ReturnValue, FName K2Node_Event_EventName, bool K2Node_SwitchName_CmpSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_MapHelp_C* K2Node_DynamicCast_AsABP_Map_Help, bool K2Node_DynamicCast_bSuccess_1);
}; // Size: 0x450
#pragma pack(pop)
