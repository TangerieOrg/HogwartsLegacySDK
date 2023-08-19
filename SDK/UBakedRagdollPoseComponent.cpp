#include "UBakedRagdollPoseComponent.hpp"
#include "UBodySetup.hpp"
#include "UPrimitiveComponent.hpp"
UBakedRagdollPoseComponent* UBakedRagdollPoseComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.BakedRagdollPoseComponent");
    return (UBakedRagdollPoseComponent*)res;
}
