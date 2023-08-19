#include "FRagdollState.hpp"
#include "UDataAsset.hpp"
#include "URagdollBehaviorBase.hpp"
URagdollBehaviorBase* URagdollBehaviorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollBehaviorBase");
    return (URagdollBehaviorBase*)res;
}
