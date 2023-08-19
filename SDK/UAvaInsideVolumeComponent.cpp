#include "FInsideVolumeDistanceField.hpp"
#include "FInsideVolumeOptionsMask.hpp"
#include "FIntVector.hpp"
#include "UAvaInsideVolumeComponent.hpp"
#include "UAvaInsideVolumeLightClippingComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UAvaInsideVolumeComponent* UAvaInsideVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AvaInsideVolumeComponent");
    return (UAvaInsideVolumeComponent*)res;
}
void UAvaInsideVolumeComponent::CacheBrush() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AvaInsideVolumeComponent.CacheBrush"));
    struct Params_CacheBrush {
    }; // Size: 0x0
    Params_CacheBrush params{};
    ProcessEvent(func, &params);
}
