#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBroomChallengeScreen.hpp"
class UWidgetAnimation;
class UUI_BP_FG_DetailsPanelBack_C;
class UUMGSequencePlayer;
class UUI_BP_Legend_Horizontal_Screen_C;
class UPhoenixTextBlock;
class UUI_BP_BroomPosition_C;
class ARace;
class UObject;
#pragma pack(push, 1)
class UUI_BP_BroomChallengeAccept_C : public UBroomChallengeScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x380
    UWidgetAnimation* BREventPopupOff; // 0x388
    UWidgetAnimation* PlayerFifthPlaceNumOn; // 0x390
    UWidgetAnimation* PlayerFourthPlaceNumOn; // 0x398
    UWidgetAnimation* PlayerThirdPlaceNumOn; // 0x3a0
    UWidgetAnimation* PlayerSecondPlaceNumOn; // 0x3a8
    UWidgetAnimation* PlayerFirstPlaceNumberOn; // 0x3b0
    UWidgetAnimation* BREventPopupOn; // 0x3b8
    UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x3c0
    UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x3c8
    UPhoenixTextBlock* PlayersBestTime; // 0x3d0
    UPhoenixTextBlock* PlayersBestTimeName; // 0x3d8
    UUI_BP_BroomPosition_C* position1; // 0x3e0
    UUI_BP_BroomPosition_C* position2; // 0x3e8
    UUI_BP_BroomPosition_C* position3; // 0x3f0
    UUI_BP_BroomPosition_C* position4; // 0x3f8
    UUI_BP_BroomPosition_C* position5; // 0x400
    UPhoenixTextBlock* RaceNameText; // 0x408
    ARace* RaceObj; // 0x410
    TArray<UUI_BP_BroomPosition_C*> PositionArray; // 0x418
    int32_t OutroIndex; // 0x428
    bool RaceStarting; // 0x42c
    char pad_42d[0x3];
    static UUI_BP_BroomChallengeAccept_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_BroomChallengeAccept_0();
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
    void Construct();
    void OnOutroAnimationComplete();
    void OnRaceCountdownBegin(UObject* Caller, int32_t int);
    void ExecuteUbergraph_UI_BP_BroomChallengeAccept(int32_t EntryPoint);
}; // Size: 0x430
#pragma pack(pop)
