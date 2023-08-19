#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "USceneAction_Blueprint.hpp"
class UFastTravelManager;
#pragma pack(push, 1)
class UBP_SceneAction_FlooFinishWait_C : public USceneAction_Blueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    static UBP_SceneAction_FlooFinishWait_C* StaticClass();
    bool IsInstant0();
    void OnInstant0(float Time, bool IsScrubbing);
    void ExecuteUbergraph_BP_SceneAction_FlooFinishWait(int32_t EntryPoint, UFastTravelManager* CallFunc_Get_ReturnValue, float K2Node_Event_Time, bool K2Node_Event_IsScrubbing, bool CallFunc_IsInEditor_ReturnValue);
}; // Size: 0xb0
#pragma pack(pop)
