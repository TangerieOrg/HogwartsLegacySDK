#include "UAISense.hpp"
#include "UAISense_NearbyCreatures.hpp"
UAISense_NearbyCreatures* UAISense_NearbyCreatures::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_NearbyCreatures");
    return (UAISense_NearbyCreatures*)res;
}
