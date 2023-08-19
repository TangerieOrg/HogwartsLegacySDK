#include "ATriggerBase.hpp"
#include "ATriggerSphere.hpp"
ATriggerSphere* ATriggerSphere::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TriggerSphere");
    return (ATriggerSphere*)res;
}
