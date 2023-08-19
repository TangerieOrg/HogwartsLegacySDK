#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
#include "UMultiFX2_ExplodingSkeletonMIDFade.hpp"
UMultiFX2_ExplodingSkeletonMIDFade* UMultiFX2_ExplodingSkeletonMIDFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ExplodingSkeletonMIDFade");
    return (UMultiFX2_ExplodingSkeletonMIDFade*)res;
}
