#include "ECollisionGeometryMode.hpp"
#include "FPhysicsBoxData.hpp"
#include "FPhysicsCapsuleData.hpp"
#include "FPhysicsConvexData.hpp"
#include "FPhysicsSphereData.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UPhysicsObjectToolPropertySet.hpp"
UPhysicsObjectToolPropertySet* UPhysicsObjectToolPropertySet::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PhysicsObjectToolPropertySet");
    return (UPhysicsObjectToolPropertySet*)res;
}
