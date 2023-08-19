#include "USkinFXEventTriggerFiltered.hpp"
#include "USkinFXEventTriggerFilteredWithDistance.hpp"
USkinFXEventTriggerFilteredWithDistance* USkinFXEventTriggerFilteredWithDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXEventTriggerFilteredWithDistance");
    return (USkinFXEventTriggerFilteredWithDistance*)res;
}
