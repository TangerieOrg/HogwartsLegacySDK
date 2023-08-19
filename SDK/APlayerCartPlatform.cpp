#include "AActor.hpp"
#include "APlayerCartPlatform.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
APlayerCartPlatform* APlayerCartPlatform::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PlayerCartPlatform");
    return (APlayerCartPlatform*)res;
}
void APlayerCartPlatform::SetDismountLocation(AActor* Target, FTransform DismountLocation, FTransform CompanionDismountLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCartPlatform.SetDismountLocation"));
    struct Params_SetDismountLocation {
        AActor* Target; // 0x0
        char pad_8[0x8];
        FTransform DismountLocation; // 0x10
        FTransform CompanionDismountLocation; // 0x40
    }; // Size: 0x70
    Params_SetDismountLocation params{};
    params.Target = (AActor*)Target;
    params.DismountLocation = (FTransform)DismountLocation;
    params.CompanionDismountLocation = (FTransform)CompanionDismountLocation;
    ProcessEvent(func, &params);
}
