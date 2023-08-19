#include "UBoneReferenceSkeletonProvider.hpp"
#include "UInterface.hpp"
UBoneReferenceSkeletonProvider* UBoneReferenceSkeletonProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BoneReferenceSkeletonProvider");
    return (UBoneReferenceSkeletonProvider*)res;
}
