#include "ADefaultPawn.hpp"
#include "AMapPawn.hpp"
#include "UCameraComponent.hpp"
AMapPawn* AMapPawn::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapPawn");
    return (AMapPawn*)res;
}
