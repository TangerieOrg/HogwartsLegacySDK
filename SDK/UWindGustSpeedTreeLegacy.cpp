#include "UWindGustController.hpp"
#include "UWindGustSpeedTreeLegacy.hpp"
UWindGustSpeedTreeLegacy* UWindGustSpeedTreeLegacy::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindGustSpeedTreeLegacy");
    return (UWindGustSpeedTreeLegacy*)res;
}
