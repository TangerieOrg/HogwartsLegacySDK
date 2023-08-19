#include "FAIDamageEvent.hpp"
#include "UAISenseEvent.hpp"
#include "UAISenseEvent_Damage.hpp"
UAISenseEvent_Damage* UAISenseEvent_Damage::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseEvent_Damage");
    return (UAISenseEvent_Damage*)res;
}
