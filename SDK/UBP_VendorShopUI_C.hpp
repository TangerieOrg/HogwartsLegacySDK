#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "USceneAction_Blueprint.hpp"
class APawn;
class UUI_BP_Vendor_C;
class UUIManager;
class UUI_BP_InteractButton_C;
class UBlackboardComponent;
class UObject;
#pragma pack(push, 1)
class UBP_VendorShopUI_C : public USceneAction_Blueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    APawn* InteractionTarget; // 0xb0
    UUI_BP_Vendor_C* VendorWidget; // 0xb8
    static UBP_VendorShopUI_C* StaticClass();
    void GetInteractActor(FName CallFunc_MakeLiteralName_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess);
    void OnCreate0(UObject* ActionState);
    void OnButtonClicked(UUI_BP_InteractButton_C* TextButton);
    void OnMenuCancelled();
    void OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing);
    void ShowVendorUI();
    void OnEnterInterval0(float Time, bool IsScrubbing);
    void OnCloseUI();
    void ExecuteUbergraph_BP_VendorShopUI(int32_t EntryPoint, UObject* K2Node_Event_ActionState);
}; // Size: 0xc0
#pragma pack(pop)
