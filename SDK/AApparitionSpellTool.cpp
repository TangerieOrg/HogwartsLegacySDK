#include "AActor.hpp"
#include "AApparitionSpellTool.hpp"
#include "AChannelingSpellTool.hpp"
#include "FApparitionLevelData.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UParticleSystem.hpp"
AApparitionSpellTool* AApparitionSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ApparitionSpellTool");
    return (AApparitionSpellTool*)res;
}
void AApparitionSpellTool::TeleportNow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ApparitionSpellTool.TeleportNow"));
    struct Params_TeleportNow {
    }; // Size: 0x0
    Params_TeleportNow params{};
    ProcessEvent(func, &params);
}
void AApparitionSpellTool::SetDirection(float X, float Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ApparitionSpellTool.SetDirection"));
    struct Params_SetDirection {
        float X; // 0x0
        float Y; // 0x4
    }; // Size: 0x8
    Params_SetDirection params{};
    params.X = (float)X;
    params.Y = (float)Y;
    ProcessEvent(func, &params);
}
