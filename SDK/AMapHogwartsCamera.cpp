#include "AActor.hpp"
#include "ACameraActor.hpp"
#include "AMapHogwartsCamera.hpp"
#include "ATargetPoint.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
AMapHogwartsCamera* AMapHogwartsCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapHogwartsCamera");
    return (AMapHogwartsCamera*)res;
}
void AMapHogwartsCamera::UpdateCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsCamera.UpdateCamera"));
    struct Params_UpdateCamera {
    }; // Size: 0x0
    Params_UpdateCamera params{};
    ProcessEvent(func, &params);
}
