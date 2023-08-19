#include "UDataAsset.hpp"
#include "URagdollBehavior.hpp"
#include "URagdollBehaviorProfile.hpp"
URagdollBehaviorProfile* URagdollBehaviorProfile::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollBehaviorProfile");
    return (URagdollBehaviorProfile*)res;
}
