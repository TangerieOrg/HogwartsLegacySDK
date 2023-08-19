#include "USkinFXEventTrigger.hpp"
#include "USkinFXEventTriggerFiltered.hpp"
USkinFXEventTriggerFiltered* USkinFXEventTriggerFiltered::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXEventTriggerFiltered");
    return (USkinFXEventTriggerFiltered*)res;
}
