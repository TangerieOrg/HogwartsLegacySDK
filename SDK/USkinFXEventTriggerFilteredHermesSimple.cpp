#include "USkinFXEventTriggerFilteredHermesSimple.hpp"
#include "USkinFXEventTriggerFilteredWithDistance.hpp"
USkinFXEventTriggerFilteredHermesSimple* USkinFXEventTriggerFilteredHermesSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXEventTriggerFilteredHermesSimple");
    return (USkinFXEventTriggerFilteredHermesSimple*)res;
}
