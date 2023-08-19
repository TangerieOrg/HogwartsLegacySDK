#include "AActor.hpp"
#include "ARevelioSpellTool.hpp"
#include "ASpellTool.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UMultiFX2_Base.hpp"
#include "URevealComponent.hpp"
float ARevelioSpellTool::GetHiddenObjectRange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevelioSpellTool.GetHiddenObjectRange"));
    struct Params_GetHiddenObjectRange {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHiddenObjectRange params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ARevelioSpellTool* ARevelioSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RevelioSpellTool");
    return (ARevelioSpellTool*)res;
}
void ARevelioSpellTool::RevealHiddenActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevelioSpellTool.RevealHiddenActor"));
    struct Params_RevealHiddenActor {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_RevealHiddenActor params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
float ARevelioSpellTool::GetFieldGuideHotspotRange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevelioSpellTool.GetFieldGuideHotspotRange"));
    struct Params_GetFieldGuideHotspotRange {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFieldGuideHotspotRange params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ARevelioSpellTool::GetCurrentOuterRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevelioSpellTool.GetCurrentOuterRadius"));
    struct Params_GetCurrentOuterRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentOuterRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ARevelioSpellTool::BeginRevealFade() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevelioSpellTool.BeginRevealFade"));
    struct Params_BeginRevealFade {
    }; // Size: 0x0
    Params_BeginRevealFade params{};
    ProcessEvent(func, &params);
}
float ARevelioSpellTool::GetCurrentInnerRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevelioSpellTool.GetCurrentInnerRadius"));
    struct Params_GetCurrentInnerRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentInnerRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
