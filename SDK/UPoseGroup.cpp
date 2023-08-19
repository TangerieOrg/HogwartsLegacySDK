#include "FConversationExplicitPoseGroupReference.hpp"
#include "FPoseGroupTransition.hpp"
#include "UBaseArchitectAsset.hpp"
#include "UObject.hpp"
#include "UPoseGroup.hpp"
UPoseGroup* UPoseGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.PoseGroup");
    return (UPoseGroup*)res;
}
