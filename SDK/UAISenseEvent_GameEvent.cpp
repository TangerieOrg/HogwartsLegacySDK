#include "FAIGameEvent.hpp"
#include "UAISenseEvent.hpp"
#include "UAISenseEvent_GameEvent.hpp"
UAISenseEvent_GameEvent* UAISenseEvent_GameEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISenseEvent_GameEvent");
    return (UAISenseEvent_GameEvent*)res;
}
