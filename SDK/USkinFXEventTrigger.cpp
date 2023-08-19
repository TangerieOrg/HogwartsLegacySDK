#include "UObject.hpp"
#include "USkinFXEventTrigger.hpp"
USkinFXEventTrigger* USkinFXEventTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXEventTrigger");
    return (USkinFXEventTrigger*)res;
}
