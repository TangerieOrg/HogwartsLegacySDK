#include "UAblAbilityEvent.hpp"
#include "UAblPlaceableEvent.hpp"
UAblPlaceableEvent* UAblPlaceableEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPlaceableEvent");
    return (UAblPlaceableEvent*)res;
}
