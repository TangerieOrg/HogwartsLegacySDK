#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UI_BP_FastTravelDirectionEnum\Type.hpp"
#include "UImage.hpp"
#include "UMapBase.hpp"
#include "UMapSubSystem.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTutorialSystem.hpp"
#include "UUI_BP_MapsButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_MapsButton_C* UUI_BP_MapsButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C");
    return (UUI_BP_MapsButton_C*)res;
}
TArray<FString> UUI_BP_MapsButton_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_MapsButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::SetButtonDirection(float TempPivot, float TempTextTranslation, float TempBackScale, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.SetButtonDirection"));
    struct Params_SetButtonDirection {
        float TempPivot; // 0x0
        float TempTextTranslation; // 0x4
        float TempBackScale; // 0x8
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0xc
        FVector2D CallFunc_MakeVector2D_ReturnValue_1; // 0x14
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1c
    }; // Size: 0x1d
    Params_SetButtonDirection params{};
    params.TempPivot = (float)TempPivot;
    params.TempTextTranslation = (float)TempTextTranslation;
    params.TempBackScale = (float)TempBackScale;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue_1 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_1;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::PlayTutorialHighlight(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.PlayTutorialHighlight"));
    struct Params_PlayTutorialHighlight {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_PlayTutorialHighlight params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::StopTutorialHighlight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.StopTutorialHighlight"));
    struct Params_StopTutorialHighlight {
    }; // Size: 0x0
    Params_StopTutorialHighlight params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::ExecuteUbergraph_UI_BP_MapsButton(int32_t EntryPoint, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UMapBase* CallFunc_GetActiveMap_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_GetCameraLerpInProgress_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, UTutorialSystem* CallFunc_Get_ReturnValue, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue, UMapBase* CallFunc_GetActiveMap_ReturnValue_1, bool CallFunc_GetCameraLerpInProgress_ReturnValue_1, bool CallFunc_IsTutorialStepActiveByAlias_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.ExecuteUbergraph_UI_BP_MapsButton"));
    struct Params_ExecuteUbergraph_UI_BP_MapsButton {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue; // 0x8
        UMapBase* CallFunc_GetActiveMap_ReturnValue; // 0x10
        bool K2Node_Event_IsDesignTime; // 0x18
        bool CallFunc_GetCameraLerpInProgress_ReturnValue; // 0x19
        char pad_1a[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x20
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x28
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x30
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x34
        int32_t CallFunc_PostEventAtLocation_ReturnValue_2; // 0x38
        char pad_3c[0x4];
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x40
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1; // 0x48
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue; // 0x50
        char pad_51[0x7];
        UMapBase* CallFunc_GetActiveMap_ReturnValue_1; // 0x58
        bool CallFunc_GetCameraLerpInProgress_ReturnValue_1; // 0x60
        bool CallFunc_IsTutorialStepActiveByAlias_ReturnValue; // 0x61
    }; // Size: 0x62
    Params_ExecuteUbergraph_UI_BP_MapsButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue;
    params.CallFunc_GetActiveMap_ReturnValue = (UMapBase*)CallFunc_GetActiveMap_ReturnValue;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_GetCameraLerpInProgress_ReturnValue = (bool)CallFunc_GetCameraLerpInProgress_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue_2 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_2;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue;
    params.CallFunc_GetActiveMap_ReturnValue_1 = (UMapBase*)CallFunc_GetActiveMap_ReturnValue_1;
    params.CallFunc_GetCameraLerpInProgress_ReturnValue_1 = (bool)CallFunc_GetCameraLerpInProgress_ReturnValue_1;
    params.CallFunc_IsTutorialStepActiveByAlias_ReturnValue = (bool)CallFunc_IsTutorialStepActiveByAlias_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::OnMapsButtonUnhovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.OnMapsButtonUnhovered__DelegateSignature"));
    struct Params_OnMapsButtonUnhovered__DelegateSignature {
    }; // Size: 0x0
    Params_OnMapsButtonUnhovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::OnMapsButtonHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.OnMapsButtonHovered__DelegateSignature"));
    struct Params_OnMapsButtonHovered__DelegateSignature {
    }; // Size: 0x0
    Params_OnMapsButtonHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapsButton_C::OnMapsButtonSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_MapsButton.UI_BP_MapsButton_C.OnMapsButtonSelected__DelegateSignature"));
    struct Params_OnMapsButtonSelected__DelegateSignature {
    }; // Size: 0x0
    Params_OnMapsButtonSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
