#include "AHUD.hpp"
#include "AHoverDroneHUD.hpp"
AHoverDroneHUD* AHoverDroneHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/HoverDrone.HoverDroneHUD");
    return (AHoverDroneHUD*)res;
}
