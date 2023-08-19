#include "EPhysicsAssetSolverType.hpp"
#include "FPhysicsAssetSolverSettings.hpp"
#include "FSolverIterations.hpp"
#include "UBodySetup.hpp"
#include "UObject.hpp"
#include "UPhysicsAsset.hpp"
#include "UPhysicsConstraintTemplate.hpp"
#include "USkeletalBodySetup.hpp"
#include "UThumbnailInfo.hpp"
UPhysicsAsset* UPhysicsAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsAsset");
    return (UPhysicsAsset*)res;
}
