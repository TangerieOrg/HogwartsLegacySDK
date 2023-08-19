#include "UAnimationAsset.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_SkeletalComponent.hpp"
#include "USkeletalMesh.hpp"
UMultiFX2_SkeletalComponent* UMultiFX2_SkeletalComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_SkeletalComponent");
    return (UMultiFX2_SkeletalComponent*)res;
}
