#include "UClass.hpp"
#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
#include "UMultiFX2_ExplodingSkeletonSkinFX.hpp"
UMultiFX2_ExplodingSkeletonSkinFX* UMultiFX2_ExplodingSkeletonSkinFX::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ExplodingSkeletonSkinFX");
    return (UMultiFX2_ExplodingSkeletonSkinFX*)res;
}
