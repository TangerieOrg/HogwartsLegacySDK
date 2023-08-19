#include "USkinFXEventTriggerFilteredActorRTPC.hpp"
#include "USkinFXEventTriggerFilteredWithDistance.hpp"
USkinFXEventTriggerFilteredActorRTPC* USkinFXEventTriggerFilteredActorRTPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXEventTriggerFilteredActorRTPC");
    return (USkinFXEventTriggerFilteredActorRTPC*)res;
}
