#include "ASpawnLocation.hpp"
#include "UActorComponent.hpp"
#include "UEncounterSpawnComponent.hpp"
UEncounterSpawnComponent* UEncounterSpawnComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EncounterSpawnComponent");
    return (UEncounterSpawnComponent*)res;
}
