#include "UMultiFX2_Base.hpp"
#include "USkinFXEventTriggerFilteredMultiFX2.hpp"
#include "USkinFXEventTriggerFilteredWithDistance.hpp"
USkinFXEventTriggerFilteredMultiFX2* USkinFXEventTriggerFilteredMultiFX2::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXEventTriggerFilteredMultiFX2");
    return (USkinFXEventTriggerFilteredMultiFX2*)res;
}
