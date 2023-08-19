#include "AActor.hpp"
#include "ADynamicObjectVolume.hpp"
#include "AEncounterCreator.hpp"
#include "AEncounterVolume.hpp"
#include "ASpawnLocation.hpp"
AEncounterCreator* AEncounterCreator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EncounterCreator");
    return (AEncounterCreator*)res;
}
