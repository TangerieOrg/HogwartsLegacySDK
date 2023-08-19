#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Blueprint.hpp"
#include "UClass.hpp"
UAISenseConfig_Blueprint* UAISenseConfig_Blueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseConfig_Blueprint");
    return (UAISenseConfig_Blueprint*)res;
}
