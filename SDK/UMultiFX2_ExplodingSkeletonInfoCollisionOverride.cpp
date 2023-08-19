#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
#include "UMultiFX2_ExplodingSkeletonInfoCollisionOverride.hpp"
UMultiFX2_ExplodingSkeletonInfoCollisionOverride* UMultiFX2_ExplodingSkeletonInfoCollisionOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ExplodingSkeletonInfoCollisionOverride");
    return (UMultiFX2_ExplodingSkeletonInfoCollisionOverride*)res;
}
