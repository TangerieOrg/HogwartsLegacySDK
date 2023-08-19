#include "FRagdollSensoryBehavior.hpp"
#include "FRagdollSensoryCollision.hpp"
#include "FRagdollSensoryRange.hpp"
#include "FRagdollSensoryStatus.hpp"
#include "FRagdollState.hpp"
#include "UDataAsset.hpp"
#include "URagdollSensoryState.hpp"
URagdollSensoryState* URagdollSensoryState::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollSensoryState");
    return (URagdollSensoryState*)res;
}
