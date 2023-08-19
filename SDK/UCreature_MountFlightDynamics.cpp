#include "FRotator.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UCreature_MountFlightDynamics.hpp"
#include "UDataAsset.hpp"
UCreature_MountFlightDynamics* UCreature_MountFlightDynamics::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_MountFlightDynamics");
    return (UCreature_MountFlightDynamics*)res;
}
