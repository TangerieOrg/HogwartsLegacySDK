#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Team.hpp"
UAISenseConfig_Team* UAISenseConfig_Team::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseConfig_Team");
    return (UAISenseConfig_Team*)res;
}
