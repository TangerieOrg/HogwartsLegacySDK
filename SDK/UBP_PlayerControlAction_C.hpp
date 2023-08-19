#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "USceneAction_Blueprint.hpp"
class UObject;
class ACharacter;
#pragma pack(push, 1)
class UBP_PlayerControlAction_C : public USceneAction_Blueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    bool EnableCasualMode; // 0xb0
    bool DisableMoveInput; // 0xb1
    bool DisableJumping; // 0xb2
    bool DisableDodging; // 0xb3
    bool DisableSpells; // 0xb4
    bool DisableAimMode; // 0xb5
    bool DisableIdleBreaks; // 0xb6
    bool DisableUIMenus; // 0xb7
    bool DisableContextualInput; // 0xb8
    bool DisablePhotoMode; // 0xb9
    char pad_ba[0x6];
    static UBP_PlayerControlAction_C* StaticClass();
    FLinearColor GetActionColor0(FColor K2Node_MakeStruct_Color, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue);
    void GetDisplayName0();
    bool IsProxyRequiredBP0();
    void OnEnterInterval0(float Time, bool IsScrubbing);
    void OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing);
    void ExecuteUbergraph_BP_PlayerControlAction(int32_t EntryPoint, int32_t CallFunc_SelectInt_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue_1, int32_t CallFunc_SelectInt_ReturnValue_2, int32_t CallFunc_SelectInt_ReturnValue_3, int32_t CallFunc_SelectInt_ReturnValue_4, int32_t CallFunc_SelectInt_ReturnValue_5, int32_t CallFunc_SelectInt_ReturnValue_6, int32_t CallFunc_SelectInt_ReturnValue_7, int32_t CallFunc_SelectInt_ReturnValue_8, int32_t CallFunc_SelectInt_ReturnValue_9, int32_t CallFunc_SelectInt_ReturnValue_10, int32_t CallFunc_SelectInt_ReturnValue_11, int32_t CallFunc_SelectInt_ReturnValue_12, int32_t CallFunc_SelectInt_ReturnValue_13, UObject* CallFunc_GetActionObjectBP_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_SelectInt_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_1, UObject* CallFunc_GetActionObjectBP_ReturnValue_1, int32_t CallFunc_SelectInt_ReturnValue_16, ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_Time, bool K2Node_Event_Cancelled, bool K2Node_Event_IsScrubbing, int32_t CallFunc_SelectInt_ReturnValue_17, int32_t CallFunc_SelectInt_ReturnValue_18, float K2Node_Event_Time_1, bool K2Node_Event_IsScrubbing_1, int32_t CallFunc_SelectInt_ReturnValue_19);
}; // Size: 0xc0
#pragma pack(pop)
