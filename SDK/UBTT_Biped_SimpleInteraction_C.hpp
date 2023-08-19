#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector2D.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UClass;
class AActor;
class UObject;
class UBlackboardComponent;
class UUIManager;
class APawn;
class AController;
class ABiped_PlayerController;
class ABiped_Player;
#pragma pack(push, 1)
class UBTT_Biped_SimpleInteraction_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    float StickMag; // 0x158
    bool OnButtslideSurface; // 0x15c
    char pad_15d[0x3];
    FVector2D CurrentStickDirection; // 0x160
    bool RestoreIKState; // 0x168
    char pad_169[0x7];
    UClass* InteractionAbilityClass; // 0x170
    AActor* InteractActor; // 0x178
    static UBTT_Biped_SimpleInteraction_C* StaticClass();
    void GetBlackboardVariables(FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, UClass* CallFunc_GetValueAsClass_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
    void EnableHUD(bool Flag, UUIManager* CallFunc_Get_ReturnValue);
    void SetContexts(bool Flag);
    void ToggleLockOnCamera(UObject* Object, bool Allowed, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_1);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_SimpleInteraction(int32_t EntryPoint, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVariantMapHandle Temp_struct_Variable);
}; // Size: 0x180
#pragma pack(pop)
