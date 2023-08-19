#include "ATriggerBase.hpp"
#include "ATriggerCapsule.hpp"
ATriggerCapsule* ATriggerCapsule::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TriggerCapsule");
    return (ATriggerCapsule*)res;
}
