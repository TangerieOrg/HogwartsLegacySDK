#include "USkinFXEventTriggerFilteredHermes.hpp"
#include "USkinFXEventTriggerFilteredWithDistance.hpp"
USkinFXEventTriggerFilteredHermes* USkinFXEventTriggerFilteredHermes::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXEventTriggerFilteredHermes");
    return (USkinFXEventTriggerFilteredHermes*)res;
}
