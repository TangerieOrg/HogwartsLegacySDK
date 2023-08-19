#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class ULevelStreamingDynamic;
class APhoenixHUD;
class UUI_BP_FirstTimeFlow_C;
class APlayerController;
class AHUD;
class UObject;
class UFadeOutAsyncAction;
class UPopupScreen;
#pragma pack(push, 1)
class ARootLevel_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    ULevelStreamingDynamic* FrontendLevel; // 0x258
    ULevelStreamingDynamic* GlobalSkyLevel; // 0x260
    ULevelStreamingDynamic* IntroRootLevel; // 0x268
    ULevelStreamingDynamic* AvatarCreatorLevel; // 0x270
    ULevelStreamingDynamic* LondonLevel; // 0x278
    bool bPrintDebugStrings; // 0x280
    char pad_281[0x7];
    UUI_BP_FirstTimeFlow_C* FirstTimeFlowWidget; // 0x288
    FHermesBPDelegateHandle NewCharClickedHandle; // 0x290
    FHermesBPDelegateHandle AvatarFinalizedHandle; // 0x2a0
    static ARootLevel_C* StaticClass();
    void ShowLondonLevel();
    void UnloadLondonLevel(bool CallFunc_IsValid_ReturnValue);
    void LoadLondonLevel();
    void UnloadGlobalSky();
    void ShowGlobalSky();
    void LoadGlobalSky(bool bShow, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue);
    void ShowAvatarCreatorLevel(int32_t CallFunc_AddStateToStack_ReturnValue);
    void UnloadAvatarCreatorLevel(bool CallFunc_IsValid_ReturnValue);
    void LoadAvatarCreatorLevel(bool bShow);
    void UnloadFrontEnd(bool CallFunc_IsValid_ReturnValue);
    void LoadFrontend(bool CallFunc_IsValid_ReturnValue, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue);
    bool IsLoadGame(FString Temp_string_Variable, FString Temp_string_Variable_1, TArray<FString>& CallFunc_GetWorldOptions_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void ShowPlayer(bool bShow);
    void SetHUDVisibility(bool bVisible, bool RemovingState, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess);
    void AreAllSublevelsVisible(TArray<ULevelStreamingDynamic*>& Array, bool& bAllLoaded, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, ULevelStreamingDynamic* CallFunc_Array_Get_Item, bool CallFunc_IsLevelVisible_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void AreAllSublevelsLoaded(TArray<ULevelStreamingDynamic*>& Array, bool& bAllLoaded, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, ULevelStreamingDynamic* CallFunc_Array_Get_Item, bool CallFunc_IsLevelLoaded_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void LoadIntroRoot();
    void PrintString(FString String, FLinearColor Color, int64_t CallFunc_GetFrameCount_ReturnValue);
    void CurtainRaised_E8EC53644D53D2AAF6BC15BCA37C5F16();
    void CurtainRaised_719B12A84487D57F5F2C03BDBFDB81B0();
    void CurtainRaised_8E9B3FCE44434535ED1F4898D20AE4A3();
    void Complete_18ACD14D4D2AE081A6E8B095185A9E32();
    void Complete_2AA0D30B40366D78C9EF3CA710BE16FC();
    void CurtainRaised_B0AA608842C141D688E142948D6B420A();
    void CurtainRaised_221FAF4A49C5DE0CDD169185CB092566();
    void CurtainRaised_308763E043A510A6360585929689F005();
    void CurtainRaised_0AB342D049A49891F07D05A20BF48471();
    void CurtainRaised_FA8189904516377DEADA4289AAFE6B4A();
    void ReceiveBeginPlay();
    void OnFrontEndLoaded();
    void AvatarFinalized(UObject* Caller);
    void OnFirstTimeFlowWidgetComplete();
    void PlayPortkeyLanding(UObject* Caller);
    void OnAvCreatorLevelLoaded();
    void OnAvCreatorLevelShown();
    void CarriageRideComplete(UObject* Caller);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void PopupClosedEvent_Event_0(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void OnIntroRootLoaded();
    void OnIntroRootShown();
    void GringottsCP2Ready(UObject* Caller);
    void VoidCP3Ready(UObject* Caller);
    void OnFrontendHidden();
    void OnLondonLevelLoaded();
    void OnLondonLevelShown();
    void TransitionToAvatarCreator(bool bCanBackOut);
    void OnFrontEndShown();
    void NewCharacterClicked(UObject* Caller);
    void CancelAvatarCreator(UObject* Caller);
    void VoidCP4Ready(UObject* Caller);
    void VoidCP5Ready(UObject* Caller);
    void GoToLondon(bool bFromLoad);
    void OnAllCrossGenSaveData_transferred(bool bResult);
    void VoidCP6Ready(UObject* Caller);
    void ExecuteUbergraph_RootLevel(int32_t EntryPoint, UUI_BP_FirstTimeFlow_C* CallFunc_Create_ReturnValue, UFadeOutAsyncAction* CallFunc_FadeOut_ReturnValue);
}; // Size: 0x2b0
#pragma pack(pop)
