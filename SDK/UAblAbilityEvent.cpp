#include "FRelativeTime.hpp"
#include "UAblAbilityEvent.hpp"
#include "UAblAbilityNode.hpp"
UAblAbilityEvent* UAblAbilityEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityEvent");
    return (UAblAbilityEvent*)res;
}
