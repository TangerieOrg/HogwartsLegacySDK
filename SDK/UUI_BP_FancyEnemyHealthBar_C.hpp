#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UFancyProgressBar.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_FancyEnemyHealthBar_C : public UFancyProgressBar {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x348
    UWidgetAnimation* Filled; // 0x350
    UWidgetAnimation* Depleted; // 0x358
    UImage* TheBar; // 0x360
    UMaterialInstanceDynamic* CachedMaterial; // 0x368
    static UUI_BP_FancyEnemyHealthBar_C* StaticClass();
    void Construct();
    void ProgressChanged0(float Progress);
    void GhostProgressChanged0(float GhostProgress);
    void DepletedFeedback0();
    void FilledFeedback0();
    void ExecuteUbergraph_UI_BP_FancyEnemyHealthBar(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Event_Progress, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Event_GhostProgress, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
}; // Size: 0x370
#pragma pack(pop)
