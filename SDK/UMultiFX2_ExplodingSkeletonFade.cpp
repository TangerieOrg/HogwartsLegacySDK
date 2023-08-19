#include "UMultiFX2_ExplodingSkeletonFade.hpp"
#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
UMultiFX2_ExplodingSkeletonFade* UMultiFX2_ExplodingSkeletonFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ExplodingSkeletonFade");
    return (UMultiFX2_ExplodingSkeletonFade*)res;
}
