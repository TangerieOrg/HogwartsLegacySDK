#include "APawn.hpp"
#include "APlayerCart.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
APlayerCart* APlayerCart::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PlayerCart");
    return (APlayerCart*)res;
}
void APlayerCart::UpdateCartPositionAndRotation(FVector& InNewLocation, FRotator& InNewRotation, FVector& InVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerCart.UpdateCartPositionAndRotation"));
    struct Params_UpdateCartPositionAndRotation {
        FVector InNewLocation; // 0x0
        FRotator InNewRotation; // 0xc
        FVector InVelocity; // 0x18
    }; // Size: 0x24
    Params_UpdateCartPositionAndRotation params{};
    params.InNewLocation = (FVector)InNewLocation;
    params.InNewRotation = (FRotator)InNewRotation;
    params.InVelocity = (FVector)InVelocity;
    ProcessEvent(func, &params);
    InNewLocation = params.InNewLocation;
    InNewRotation = params.InNewRotation;
    InVelocity = params.InVelocity;
}
