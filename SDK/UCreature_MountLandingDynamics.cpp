#include "UCreature_MountLandingDynamics.hpp"
#include "UDataAsset.hpp"
UCreature_MountLandingDynamics* UCreature_MountLandingDynamics::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_MountLandingDynamics");
    return (UCreature_MountLandingDynamics*)res;
}
