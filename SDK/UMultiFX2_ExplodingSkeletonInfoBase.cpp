#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
#include "UObject.hpp"
UMultiFX2_ExplodingSkeletonInfoBase* UMultiFX2_ExplodingSkeletonInfoBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ExplodingSkeletonInfoBase");
    return (UMultiFX2_ExplodingSkeletonInfoBase*)res;
}
