#include "FBodyInstance.hpp"
#include "FKAggregateGeom.hpp"
#include "FVector.hpp"
#include "FWalkableSlopeOverride.hpp"
#include "UBodySetup.hpp"
#include "UBodySetupCore.hpp"
#include "UPhysicalMaterial.hpp"
UBodySetup* UBodySetup::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BodySetup");
    return (UBodySetup*)res;
}
