#include "UAISenseConfig.hpp"
#include "UAISenseConfig_NearbyCreatures.hpp"
UAISenseConfig_NearbyCreatures* UAISenseConfig_NearbyCreatures::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISenseConfig_NearbyCreatures");
    return (UAISenseConfig_NearbyCreatures*)res;
}
