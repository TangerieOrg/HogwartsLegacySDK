#pragma once
#include <cstdint>
#include "UCinematicBatchHUD.hpp"
class USceneRig;
class USceneRigPlayer;
#pragma pack(push, 1)
class UCinematicMissionDailiesHUD : public UCinematicBatchHUD {
public:
    FString SceneRigName; // 0x278
    FString StoryGraphName; // 0x288
    FString MissionID; // 0x298
    bool bTotalFramesSet; // 0x2a8
    bool bHasSceneRigBeenInitialized; // 0x2a9
    char pad_2aa[0x6];
    static UCinematicMissionDailiesHUD* StaticClass();
    void UpdateStoryGraphName(FString NewSGName);
    void UpdateSceneRigName(FString NewSRName);
    void UpdateMissionID(FString NewMissionID);
    void ShowSR();
    void ShowSG();
    void ShowFrames();
    void SetSceneRig(USceneRig* InSceneRig);
    void OnSceneRigChanged();
    void HideSR();
    void HideSG();
    void HideFrames();
    float GetHUDSRLength(USceneRigPlayer* SceneRigPlayer, USceneRig* InSceneRig, bool bInFrames);
    float GetActiveSRFrame(USceneRigPlayer* SceneRigPlayer);
}; // Size: 0x2b0
#pragma pack(pop)
