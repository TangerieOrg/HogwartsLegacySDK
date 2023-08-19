#include "FAINoiseEvent.hpp"
#include "UAISenseEvent.hpp"
#include "UAISenseEvent_Hearing.hpp"
UAISenseEvent_Hearing* UAISenseEvent_Hearing::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseEvent_Hearing");
    return (UAISenseEvent_Hearing*)res;
}
