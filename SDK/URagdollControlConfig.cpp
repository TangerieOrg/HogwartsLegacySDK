#include "FAuthoredImpact.hpp"
#include "FFloatRange.hpp"
#include "FGameplayTagContainer.hpp"
#include "FGetupAnimationProfile.hpp"
#include "FPhysicsForceAndTorquePD.hpp"
#include "UClass.hpp"
#include "UDataAsset.hpp"
#include "URagdollControlConfig.hpp"
URagdollControlConfig* URagdollControlConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollControlConfig");
    return (URagdollControlConfig*)res;
}
