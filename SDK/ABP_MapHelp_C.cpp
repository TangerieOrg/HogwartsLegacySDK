#include "ABP_MapHelp_C.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "AInventoryItemTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UABP_MapHelp_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
#include "UPathNavigationManager.hpp"
#include "USkeletalMeshComponent.hpp"
void ABP_MapHelp_C::ItemEvent(FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/InventoryItems/DEV_MapTool/BP_MapHelp.BP_MapHelp_C.ItemEvent"));
    struct Params_ItemEvent {
        FName EventName; // 0x0
    }; // Size: 0x8
    Params_ItemEvent params{};
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
}
ABP_MapHelp_C* ABP_MapHelp_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Items/InventoryItems/DEV_MapTool/BP_MapHelp.BP_MapHelp_C");
    return (ABP_MapHelp_C*)res;
}
void ABP_MapHelp_C::UseItem() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/InventoryItems/DEV_MapTool/BP_MapHelp.BP_MapHelp_C.UseItem"));
    struct Params_UseItem {
    }; // Size: 0x0
    Params_UseItem params{};
    ProcessEvent(func, &params);
}
void ABP_MapHelp_C::BeginItemUsage() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/InventoryItems/DEV_MapTool/BP_MapHelp.BP_MapHelp_C.BeginItemUsage"));
    struct Params_BeginItemUsage {
    }; // Size: 0x0
    Params_BeginItemUsage params{};
    ProcessEvent(func, &params);
}
void ABP_MapHelp_C::ExecuteUbergraph_BP_MapHelp(int32_t EntryPoint, UPathNavigationManager* CallFunc_Get_ReturnValue, ACharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_GiveMeHelp_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, bool CallFunc_GetBoolVariable_ReturnValue, bool CallFunc_ConsumeItem_ReturnValue, FName K2Node_Event_EventName, bool K2Node_SwitchName_CmpSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_MapHelp_C* K2Node_DynamicCast_AsABP_Map_Help, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/InventoryItems/DEV_MapTool/BP_MapHelp.BP_MapHelp_C.ExecuteUbergraph_BP_MapHelp"));
    struct Params_ExecuteUbergraph_BP_MapHelp {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UPathNavigationManager* CallFunc_Get_ReturnValue; // 0x8
        ACharacter* CallFunc_GetCharacter_ReturnValue; // 0x10
        bool CallFunc_GiveMeHelp_ReturnValue; // 0x18
        char pad_19[0x7];
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x3];
        FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue; // 0x2c
        bool CallFunc_GetBoolVariable_ReturnValue; // 0x30
        bool CallFunc_ConsumeItem_ReturnValue; // 0x31
        char pad_32[0x2];
        FName K2Node_Event_EventName; // 0x34
        bool K2Node_SwitchName_CmpSuccess; // 0x3c
        char pad_3d[0x3];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x40
        UABP_MapHelp_C* K2Node_DynamicCast_AsABP_Map_Help; // 0x48
        bool K2Node_DynamicCast_bSuccess_1; // 0x50
    }; // Size: 0x51
    Params_ExecuteUbergraph_BP_MapHelp params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Get_ReturnValue = (UPathNavigationManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetCharacter_ReturnValue = (ACharacter*)CallFunc_GetCharacter_ReturnValue;
    params.CallFunc_GiveMeHelp_ReturnValue = (bool)CallFunc_GiveMeHelp_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_BroadcastAction_Actor_ReturnValue = (FVariantMapHandle)CallFunc_BroadcastAction_Actor_ReturnValue;
    params.CallFunc_GetBoolVariable_ReturnValue = (bool)CallFunc_GetBoolVariable_ReturnValue;
    params.CallFunc_ConsumeItem_ReturnValue = (bool)CallFunc_ConsumeItem_ReturnValue;
    params.K2Node_Event_EventName = (FName)K2Node_Event_EventName;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsABP_Map_Help = (UABP_MapHelp_C*)K2Node_DynamicCast_AsABP_Map_Help;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
