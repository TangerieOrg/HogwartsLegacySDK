#include "APawn.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBP_VendorShopUI_C.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneAction_Blueprint.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_InteractButton_C.hpp"
#include "UUI_BP_Vendor_C.hpp"
void UBP_VendorShopUI_C::OnEnterInterval0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_VendorShopUI.BP_VendorShopUI_C.OnEnterInterval"));
    struct Params_OnEnterInterval {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnEnterInterval params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
UBP_VendorShopUI_C* UBP_VendorShopUI_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/Conversations/BP_VendorShopUI.BP_VendorShopUI_C");
    return (UBP_VendorShopUI_C*)res;
}
void UBP_VendorShopUI_C::ShowVendorUI() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_VendorShopUI.BP_VendorShopUI_C.ShowVendorUI"));
    struct Params_ShowVendorUI {
    }; // Size: 0x0
    Params_ShowVendorUI params{};
    ProcessEvent(func, &params);
}
void UBP_VendorShopUI_C::GetInteractActor(FName CallFunc_MakeLiteralName_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_VendorShopUI.BP_VendorShopUI_C.GetInteractActor"));
    struct Params_GetInteractActor {
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x0
        UUIManager* CallFunc_Get_ReturnValue; // 0x8
        APawn* CallFunc_GetPlayerPawn_ReturnValue; // 0x10
        UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x18
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x20
        APawn* K2Node_DynamicCast_AsPawn; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
    }; // Size: 0x31
    Params_GetInteractActor params{};
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerPawn_ReturnValue = (APawn*)CallFunc_GetPlayerPawn_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UBlackboardComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsPawn = (APawn*)K2Node_DynamicCast_AsPawn;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBP_VendorShopUI_C::OnCreate0(UObject* ActionState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_VendorShopUI.BP_VendorShopUI_C.OnCreate"));
    struct Params_OnCreate {
        UObject* ActionState; // 0x0
    }; // Size: 0x8
    Params_OnCreate params{};
    params.ActionState = (UObject*)ActionState;
    ProcessEvent(func, &params);
}
void UBP_VendorShopUI_C::OnButtonClicked(UUI_BP_InteractButton_C* TextButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_VendorShopUI.BP_VendorShopUI_C.OnButtonClicked"));
    struct Params_OnButtonClicked {
        UUI_BP_InteractButton_C* TextButton; // 0x0
    }; // Size: 0x8
    Params_OnButtonClicked params{};
    params.TextButton = (UUI_BP_InteractButton_C*)TextButton;
    ProcessEvent(func, &params);
}
void UBP_VendorShopUI_C::OnMenuCancelled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_VendorShopUI.BP_VendorShopUI_C.OnMenuCancelled"));
    struct Params_OnMenuCancelled {
    }; // Size: 0x0
    Params_OnMenuCancelled params{};
    ProcessEvent(func, &params);
}
void UBP_VendorShopUI_C::OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_VendorShopUI.BP_VendorShopUI_C.OnExitInterval"));
    struct Params_OnExitInterval {
        float Time; // 0x0
        bool Cancelled; // 0x4
        bool IsScrubbing; // 0x5
    }; // Size: 0x6
    Params_OnExitInterval params{};
    params.Time = (float)Time;
    params.Cancelled = (bool)Cancelled;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_VendorShopUI_C::OnCloseUI() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/BP_VendorShopUI.BP_VendorShopUI_C.OnCloseUI"));
    struct Params_OnCloseUI {
    }; // Size: 0x0
    Params_OnCloseUI params{};
    ProcessEvent(func, &params);
}
void UBP_VendorShopUI_C::ExecuteUbergraph_BP_VendorShopUI(int32_t EntryPoint, UObject* K2Node_Event_ActionState) {}
