#include "AActor.hpp"
#include "ALadder.hpp"
#include "UFunction.hpp"
bool ALadder::CanPlayerClimbLadder() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ladder.CanPlayerClimbLadder"));
    struct Params_CanPlayerClimbLadder {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPlayerClimbLadder params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ALadder* ALadder::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Ladder");
    return (ALadder*)res;
}
void ALadder::EnablePlayerClimbing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ladder.EnablePlayerClimbing"));
    struct Params_EnablePlayerClimbing {
    }; // Size: 0x0
    Params_EnablePlayerClimbing params{};
    ProcessEvent(func, &params);
}
void ALadder::EnablePlayerMountTop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ladder.EnablePlayerMountTop"));
    struct Params_EnablePlayerMountTop {
    }; // Size: 0x0
    Params_EnablePlayerMountTop params{};
    ProcessEvent(func, &params);
}
float ALadder::GetMeshHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ladder.GetMeshHeight"));
    struct Params_GetMeshHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMeshHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ALadder::DisablePlayerMountTop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ladder.DisablePlayerMountTop"));
    struct Params_DisablePlayerMountTop {
    }; // Size: 0x0
    Params_DisablePlayerMountTop params{};
    ProcessEvent(func, &params);
}
float ALadder::GetLadderBottomZ() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ladder.GetLadderBottomZ"));
    struct Params_GetLadderBottomZ {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLadderBottomZ params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ALadder::GetLadderTopZ() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ladder.GetLadderTopZ"));
    struct Params_GetLadderTopZ {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLadderTopZ params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t ALadder::GetLadderHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ladder.GetLadderHeight"));
    struct Params_GetLadderHeight {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLadderHeight params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ALadder::DisablePlayerClimbing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ladder.DisablePlayerClimbing"));
    struct Params_DisablePlayerClimbing {
    }; // Size: 0x0
    Params_DisablePlayerClimbing params{};
    ProcessEvent(func, &params);
}
