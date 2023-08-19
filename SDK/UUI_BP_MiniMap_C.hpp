#pragma once
#include <cstdint>
#include "EMiniMapSizeOption.hpp"
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UMinimapManager.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UImage;
class URetainerBox;
class UUI_BP_MinimapDungeon_C;
class UUI_BP_MinimapHogsmeade_C;
class UUI_BP_MinimapHogwarts_C;
class UUI_BP_MinimapOverland_C;
class UBorder;
class UMinimapRetentionBox;
class UUI_BP_MinimapTents_C;
class UUI_BP_MinimapSanctuary_C;
class UUI_BP_MinimapTutorial_C;
class UOverlay;
class UUMGSequencePlayer;
class UObject;
#pragma pack(push, 1)
class UUI_BP_MiniMap_C : public UMinimapManager {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x7b0
    UWidgetAnimation* FadeIcons; // 0x7b8
    UWidgetAnimation* FadeFelixFelicis; // 0x7c0
    UWidgetAnimation* Minimap_Intro_Quick; // 0x7c8
    UWidgetAnimation* Minimap_Outro_Instant; // 0x7d0
    UWidgetAnimation* Minimap_Intro_Instant; // 0x7d8
    UWidgetAnimation* FadeCloud; // 0x7e0
    UWidgetAnimation* TutorialBounce; // 0x7e8
    UWidgetAnimation* POI_Ring_Pulse; // 0x7f0
    UWidgetAnimation* Minimap_Intro; // 0x7f8
    UImage* CloudyMap; // 0x800
    URetainerBox* DissolvingRetainer; // 0x808
    UUI_BP_MinimapDungeon_C* Dungeon; // 0x810
    UImage* FelixFelicisEffect; // 0x818
    URetainerBox* FelixFelicisRetainer; // 0x820
    UImage* Frame; // 0x828
    UUI_BP_MinimapHogsmeade_C* Hogsmeade; // 0x830
    UUI_BP_MinimapHogwarts_C* Hogwarts; // 0x838
    UImage* IntrusionAlert; // 0x840
    UBorder* mapHolder; // 0x848
    URetainerBox* minimapRetainer; // 0x850
    UUI_BP_MinimapOverland_C* Overland; // 0x858
    UImage* Player; // 0x860
    UCanvasPanel* POI_Rings; // 0x868
    UMinimapRetentionBox* RetentionBox; // 0x870
    UCanvasPanel* Root; // 0x878
    UUI_BP_MinimapSanctuary_C* Sanctuary; // 0x880
    UUI_BP_MinimapTents_C* Tents; // 0x888
    UUI_BP_MinimapTutorial_C* Tutorial; // 0x890
    UOverlay* TutorialHighlight; // 0x898
    bool UsingHoverDrone; // 0x8a0
    char pad_8a1[0x3];
    float POIRePulseTime; // 0x8a4
    bool POICollected; // 0x8a8
    bool InstantFadeIn; // 0x8a9
    bool InstantFadeOut; // 0x8aa
    bool isCloudy; // 0x8ab
    char pad_8ac[0x14];
    bool isFelixFelicisOn; // 0x8c0
    char pad_8c1[0x7];
    static UUI_BP_MiniMap_C* StaticClass();
    void TogglePOIFlash(bool TurnOn, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void AnimationOutroDone();
    void AnimationIntroDone();
    void Play_Mini_Map_Outro(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void PlayMiniMapIntro(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ShowMiniMapEvent(bool Enable);
    void RevealMiniMapEvent(bool InstantIntro);
    void UnrevealMiniMapEvent(bool InstantIntro);
    void ShowPathLayerEvent(bool Enable);
    void SetIntrusionAlertOnBP(bool Enable);
    void InPOIRange(UObject* Caller, int32_t int);
    void DistanceToPOI(UObject* Caller, float float);
    void WidgetAnimationEvt_POI_Ring_Pulse_K2Node_WidgetAnimationEvent_0();
    void Repulse();
    void POICollectedNotification(UObject* Caller);
    void StartMinimapTutorial(UObject* Caller);
    void MinimapTutorialComplete(UObject* Caller);
    void TurnOnCloudyMiniMapEvent();
    void TurnOffCloudyMiniMapEvent();
    void SetVisibleOpacityMiniMapEvent(bool Visible, float Opacity);
    void SetOpacityMiniMapEvent(float Opacity);
    void fadeInSimple();
    void fadeOutSimple();
    void SetOpacityQucikMiniMapEvent(float Opacity, float MapOpacity);
    void MinimapScaleChanged(EMiniMapSizeOption MiniMapSize);
    void Construct();
    void TurnOnCloudyMiniMapDarkEvent();
    void EventTurnOnFelixFelicisMap();
    void EventTurnOffFelixFelicisMap();
    void FelixFelicisPotionStart(UObject* Caller);
    void FelixFelicisPotionStop(UObject* Caller);
    void DoMapTransitionStart();
    void DoMapTransitionEnd();
    void ExecuteUbergraph_UI_BP_MiniMap(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, EMiniMapSizeOption Temp_byte_Variable);
    void OnMinimapScaleChanged__DelegateSignature(EMiniMapSizeOption NewMapSize);
}; // Size: 0x8c8
#pragma pack(pop)
