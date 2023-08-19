#include "AActor.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "ULightInterface.hpp"
ULightInterface* ULightInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightInterface");
    return (ULightInterface*)res;
}
void ULightInterface::OnEnteredLightProximity(AActor* LumosBP) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightInterface.OnEnteredLightProximity"));
    struct Params_OnEnteredLightProximity {
        AActor* LumosBP; // 0x0
    }; // Size: 0x8
    Params_OnEnteredLightProximity params{};
    params.LumosBP = (AActor*)LumosBP;
    ProcessEvent(func, &params);
}
void ULightInterface::OnExitedNearby() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightInterface.OnExitedNearby"));
    struct Params_OnExitedNearby {
    }; // Size: 0x0
    Params_OnExitedNearby params{};
    ProcessEvent(func, &params);
}
void ULightInterface::OnExitedLightProximity(AActor* LumosBP) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightInterface.OnExitedLightProximity"));
    struct Params_OnExitedLightProximity {
        AActor* LumosBP; // 0x0
    }; // Size: 0x8
    Params_OnExitedLightProximity params{};
    params.LumosBP = (AActor*)LumosBP;
    ProcessEvent(func, &params);
}
void ULightInterface::OnExitedLight(AActor* LumosBP, bool bPlayerOwned) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightInterface.OnExitedLight"));
    struct Params_OnExitedLight {
        AActor* LumosBP; // 0x0
        bool bPlayerOwned; // 0x8
    }; // Size: 0x9
    Params_OnExitedLight params{};
    params.LumosBP = (AActor*)LumosBP;
    params.bPlayerOwned = (bool)bPlayerOwned;
    ProcessEvent(func, &params);
}
void ULightInterface::OnEnteredNearby(AActor* LumosBP) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightInterface.OnEnteredNearby"));
    struct Params_OnEnteredNearby {
        AActor* LumosBP; // 0x0
    }; // Size: 0x8
    Params_OnEnteredNearby params{};
    params.LumosBP = (AActor*)LumosBP;
    ProcessEvent(func, &params);
}
void ULightInterface::OnEnteredLight(AActor* LumosBP, bool bPlayerOwned) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightInterface.OnEnteredLight"));
    struct Params_OnEnteredLight {
        AActor* LumosBP; // 0x0
        bool bPlayerOwned; // 0x8
    }; // Size: 0x9
    Params_OnEnteredLight params{};
    params.LumosBP = (AActor*)LumosBP;
    params.bPlayerOwned = (bool)bPlayerOwned;
    ProcessEvent(func, &params);
}
bool ULightInterface::DisableLightRaytrace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightInterface.DisableLightRaytrace"));
    struct Params_DisableLightRaytrace {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisableLightRaytrace params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULightInterface::DisableLightInteraction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightInterface.DisableLightInteraction"));
    struct Params_DisableLightInteraction {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisableLightInteraction params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
