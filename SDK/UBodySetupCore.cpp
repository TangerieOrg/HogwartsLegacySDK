#include "EBodyCollisionResponse\Type.hpp"
#include "ECollisionTraceFlag.hpp"
#include "EPhysicsType.hpp"
#include "UBodySetupCore.hpp"
#include "UObject.hpp"
UBodySetupCore* UBodySetupCore::StaticClass() {
    static auto res = find_uobject("Class /Script/PhysicsCore.BodySetupCore");
    return (UBodySetupCore*)res;
}
