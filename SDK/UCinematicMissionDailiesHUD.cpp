#include "UCinematicBatchHUD.hpp"
#include "UCinematicMissionDailiesHUD.hpp"
#include "UFunction.hpp"
#include "USceneRig.hpp"
#include "USceneRigPlayer.hpp"
void UCinematicMissionDailiesHUD::SetSceneRig(USceneRig* InSceneRig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.SetSceneRig"));
    struct Params_SetSceneRig {
        USceneRig* InSceneRig; // 0x0
    }; // Size: 0x8
    Params_SetSceneRig params{};
    params.InSceneRig = (USceneRig*)InSceneRig;
    ProcessEvent(func, &params);
}
void UCinematicMissionDailiesHUD::UpdateStoryGraphName(FString NewSGName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.UpdateStoryGraphName"));
    struct Params_UpdateStoryGraphName {
        FString NewSGName; // 0x0
    }; // Size: 0x10
    Params_UpdateStoryGraphName params{};
    params.NewSGName = (FString)NewSGName;
    ProcessEvent(func, &params);
}
UCinematicMissionDailiesHUD* UCinematicMissionDailiesHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CinematicMissionDailiesHUD");
    return (UCinematicMissionDailiesHUD*)res;
}
void UCinematicMissionDailiesHUD::UpdateMissionID(FString NewMissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.UpdateMissionID"));
    struct Params_UpdateMissionID {
        FString NewMissionID; // 0x0
    }; // Size: 0x10
    Params_UpdateMissionID params{};
    params.NewMissionID = (FString)NewMissionID;
    ProcessEvent(func, &params);
}
void UCinematicMissionDailiesHUD::UpdateSceneRigName(FString NewSRName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.UpdateSceneRigName"));
    struct Params_UpdateSceneRigName {
        FString NewSRName; // 0x0
    }; // Size: 0x10
    Params_UpdateSceneRigName params{};
    params.NewSRName = (FString)NewSRName;
    ProcessEvent(func, &params);
}
void UCinematicMissionDailiesHUD::ShowSG() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.ShowSG"));
    struct Params_ShowSG {
    }; // Size: 0x0
    Params_ShowSG params{};
    ProcessEvent(func, &params);
}
void UCinematicMissionDailiesHUD::ShowSR() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.ShowSR"));
    struct Params_ShowSR {
    }; // Size: 0x0
    Params_ShowSR params{};
    ProcessEvent(func, &params);
}
void UCinematicMissionDailiesHUD::ShowFrames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.ShowFrames"));
    struct Params_ShowFrames {
    }; // Size: 0x0
    Params_ShowFrames params{};
    ProcessEvent(func, &params);
}
void UCinematicMissionDailiesHUD::OnSceneRigChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.OnSceneRigChanged"));
    struct Params_OnSceneRigChanged {
    }; // Size: 0x0
    Params_OnSceneRigChanged params{};
    ProcessEvent(func, &params);
}
void UCinematicMissionDailiesHUD::HideSR() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.HideSR"));
    struct Params_HideSR {
    }; // Size: 0x0
    Params_HideSR params{};
    ProcessEvent(func, &params);
}
void UCinematicMissionDailiesHUD::HideSG() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.HideSG"));
    struct Params_HideSG {
    }; // Size: 0x0
    Params_HideSG params{};
    ProcessEvent(func, &params);
}
void UCinematicMissionDailiesHUD::HideFrames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.HideFrames"));
    struct Params_HideFrames {
    }; // Size: 0x0
    Params_HideFrames params{};
    ProcessEvent(func, &params);
}
float UCinematicMissionDailiesHUD::GetHUDSRLength(USceneRigPlayer* SceneRigPlayer, USceneRig* InSceneRig, bool bInFrames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.GetHUDSRLength"));
    struct Params_GetHUDSRLength {
        USceneRigPlayer* SceneRigPlayer; // 0x0
        USceneRig* InSceneRig; // 0x8
        bool bInFrames; // 0x10
        char pad_11[0x3];
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetHUDSRLength params{};
    params.SceneRigPlayer = (USceneRigPlayer*)SceneRigPlayer;
    params.InSceneRig = (USceneRig*)InSceneRig;
    params.bInFrames = (bool)bInFrames;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UCinematicMissionDailiesHUD::GetActiveSRFrame(USceneRigPlayer* SceneRigPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicMissionDailiesHUD.GetActiveSRFrame"));
    struct Params_GetActiveSRFrame {
        USceneRigPlayer* SceneRigPlayer; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetActiveSRFrame params{};
    params.SceneRigPlayer = (USceneRigPlayer*)SceneRigPlayer;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
