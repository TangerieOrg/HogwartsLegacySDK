#include "AActor.hpp"
#include "ALevelScriptActor.hpp"
#include "FIntVector.hpp"
#include "UFunction.hpp"
ALevelScriptActor* ALevelScriptActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LevelScriptActor");
    return (ALevelScriptActor*)res;
}
void ALevelScriptActor::WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelScriptActor.WorldOriginLocationChanged"));
    struct Params_WorldOriginLocationChanged {
        FIntVector OldOriginLocation; // 0x0
        FIntVector NewOriginLocation; // 0xc
    }; // Size: 0x18
    Params_WorldOriginLocationChanged params{};
    params.OldOriginLocation = (FIntVector)OldOriginLocation;
    params.NewOriginLocation = (FIntVector)NewOriginLocation;
    ProcessEvent(func, &params);
}
void ALevelScriptActor::SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelScriptActor.SetCinematicMode"));
    struct Params_SetCinematicMode {
        bool bCinematicMode; // 0x0
        bool bHidePlayer; // 0x1
        bool bAffectsHUD; // 0x2
        bool bAffectsMovement; // 0x3
        bool bAffectsTurning; // 0x4
    }; // Size: 0x5
    Params_SetCinematicMode params{};
    params.bCinematicMode = (bool)bCinematicMode;
    params.bHidePlayer = (bool)bHidePlayer;
    params.bAffectsHUD = (bool)bAffectsHUD;
    params.bAffectsMovement = (bool)bAffectsMovement;
    params.bAffectsTurning = (bool)bAffectsTurning;
    ProcessEvent(func, &params);
}
void ALevelScriptActor::LevelReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelScriptActor.LevelReset"));
    struct Params_LevelReset {
    }; // Size: 0x0
    Params_LevelReset params{};
    ProcessEvent(func, &params);
}
bool ALevelScriptActor::RemoteEvent(FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelScriptActor.RemoteEvent"));
    struct Params_RemoteEvent {
        FName EventName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoteEvent params{};
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
