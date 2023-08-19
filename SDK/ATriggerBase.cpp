#include "AActor.hpp"
#include "ATriggerBase.hpp"
#include "UShapeComponent.hpp"
ATriggerBase* ATriggerBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TriggerBase");
    return (ATriggerBase*)res;
}
