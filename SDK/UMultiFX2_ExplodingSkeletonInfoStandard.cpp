#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
#include "UMultiFX2_ExplodingSkeletonInfoStandard.hpp"
UMultiFX2_ExplodingSkeletonInfoStandard* UMultiFX2_ExplodingSkeletonInfoStandard::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ExplodingSkeletonInfoStandard");
    return (UMultiFX2_ExplodingSkeletonInfoStandard*)res;
}
