#include "ABiped_PlayerController.hpp"
#include "APhoenixHUD.hpp"
#include "APhoenixPlayerController.hpp"
#include "UClass.hpp"
#include "UEncounterTracker.hpp"
#include "UFunction.hpp"
#include "ULEDEffects.hpp"
#include "ULEDFadeEffect.hpp"
#include "UTriggerEffectManager.hpp"
APhoenixPlayerController* APhoenixPlayerController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixPlayerController");
    return (APhoenixPlayerController*)res;
}
void APhoenixPlayerController::MapCaptureStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixPlayerController.MapCaptureStart"));
    struct Params_MapCaptureStart {
    }; // Size: 0x0
    Params_MapCaptureStart params{};
    ProcessEvent(func, &params);
}
