#include "AActor.hpp"
#include "AAncientMagicWaypoint.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
AAncientMagicWaypoint* AAncientMagicWaypoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AncientMagicWaypoint");
    return (AAncientMagicWaypoint*)res;
}
void AAncientMagicWaypoint::FootPlantOccurred(FVector FootLocation, FRotator FootRotator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicWaypoint.FootPlantOccurred"));
    struct Params_FootPlantOccurred {
        FVector FootLocation; // 0x0
        FRotator FootRotator; // 0xc
    }; // Size: 0x18
    Params_FootPlantOccurred params{};
    params.FootLocation = (FVector)FootLocation;
    params.FootRotator = (FRotator)FootRotator;
    ProcessEvent(func, &params);
}
void AAncientMagicWaypoint::TrackFootPlants() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicWaypoint.TrackFootPlants"));
    struct Params_TrackFootPlants {
    }; // Size: 0x0
    Params_TrackFootPlants params{};
    ProcessEvent(func, &params);
}
void AAncientMagicWaypoint::StopTrackingFootPlants() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicWaypoint.StopTrackingFootPlants"));
    struct Params_StopTrackingFootPlants {
    }; // Size: 0x0
    Params_StopTrackingFootPlants params{};
    ProcessEvent(func, &params);
}
