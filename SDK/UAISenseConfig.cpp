#include "FColor.hpp"
#include "UAISenseConfig.hpp"
#include "UObject.hpp"
UAISenseConfig* UAISenseConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseConfig");
    return (UAISenseConfig*)res;
}
