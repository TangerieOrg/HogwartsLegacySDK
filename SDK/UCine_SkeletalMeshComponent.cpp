#include "UCine_SkeletalMeshComponent.hpp"
#include "USkeletalMeshComponent.hpp"
UCine_SkeletalMeshComponent* UCine_SkeletalMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Cine_SkeletalMeshComponent");
    return (UCine_SkeletalMeshComponent*)res;
}
