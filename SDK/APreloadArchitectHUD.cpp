#include "AHUD.hpp"
#include "APreloadArchitectHUD.hpp"
#include "UFunction.hpp"
APreloadArchitectHUD* APreloadArchitectHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.PreloadArchitectHUD");
    return (APreloadArchitectHUD*)res;
}
void APreloadArchitectHUD::TogglePreloadArchitectHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.PreloadArchitectHUD.TogglePreloadArchitectHUD"));
    struct Params_TogglePreloadArchitectHUD {
    }; // Size: 0x0
    Params_TogglePreloadArchitectHUD params{};
    ProcessEvent(func, &params);
}
