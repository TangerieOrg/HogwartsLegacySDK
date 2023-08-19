#include "UAISenseEvent.hpp"
#include "UObject.hpp"
UAISenseEvent* UAISenseEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseEvent");
    return (UAISenseEvent*)res;
}
