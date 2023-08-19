#include "FAIMagicEvent.hpp"
#include "UAISenseEvent.hpp"
#include "UAISenseEvent_Magic.hpp"
UAISenseEvent_Magic* UAISenseEvent_Magic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISenseEvent_Magic");
    return (UAISenseEvent_Magic*)res;
}
