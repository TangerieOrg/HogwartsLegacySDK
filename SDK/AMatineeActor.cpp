#include "AActor.hpp"
#include "AMatineeActor.hpp"
#include "FCameraCutInfo.hpp"
#include "FInterpGroupActorInfo.hpp"
#include "UFunction.hpp"
#include "UInterpData.hpp"
#include "UInterpGroupInst.hpp"
AMatineeActor* AMatineeActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MatineeActor");
    return (AMatineeActor*)res;
}
void AMatineeActor::ChangePlaybackDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MatineeActor.ChangePlaybackDirection"));
    struct Params_ChangePlaybackDirection {
    }; // Size: 0x0
    Params_ChangePlaybackDirection params{};
    ProcessEvent(func, &params);
}
void AMatineeActor::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MatineeActor.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void AMatineeActor::Reverse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MatineeActor.Reverse"));
    struct Params_Reverse {
    }; // Size: 0x0
    Params_Reverse params{};
    ProcessEvent(func, &params);
}
void AMatineeActor::SetPosition(float NewPosition, bool bJump) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MatineeActor.SetPosition"));
    struct Params_SetPosition {
        float NewPosition; // 0x0
        bool bJump; // 0x4
    }; // Size: 0x5
    Params_SetPosition params{};
    params.NewPosition = (float)NewPosition;
    params.bJump = (bool)bJump;
    ProcessEvent(func, &params);
}
void AMatineeActor::SetLoopingState(bool bNewLooping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MatineeActor.SetLoopingState"));
    struct Params_SetLoopingState {
        bool bNewLooping; // 0x0
    }; // Size: 0x1
    Params_SetLoopingState params{};
    params.bNewLooping = (bool)bNewLooping;
    ProcessEvent(func, &params);
}
void AMatineeActor::EnableGroupByName(FString GroupName, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MatineeActor.EnableGroupByName"));
    struct Params_EnableGroupByName {
        FString GroupName; // 0x0
        bool bEnable; // 0x10
    }; // Size: 0x11
    Params_EnableGroupByName params{};
    params.GroupName = (FString)GroupName;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void AMatineeActor::Play() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MatineeActor.Play"));
    struct Params_Play {
    }; // Size: 0x0
    Params_Play params{};
    ProcessEvent(func, &params);
}
void AMatineeActor::Pause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MatineeActor.Pause"));
    struct Params_Pause {
    }; // Size: 0x0
    Params_Pause params{};
    ProcessEvent(func, &params);
}
