#include "UAblAbilityEvent.hpp"
#include "UAblGeneratedEvent.hpp"
UAblGeneratedEvent* UAblGeneratedEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblGeneratedEvent");
    return (UAblGeneratedEvent*)res;
}
