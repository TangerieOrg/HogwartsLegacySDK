#include "FExplodingSkeletonInitialDelay.hpp"
#include "FVector.hpp"
#include "UExplodingSkeletonPieceSetup.hpp"
#include "UMultiFX2_ExplodingSkeleton.hpp"
#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_ExplodingSkeleton* UMultiFX2_ExplodingSkeleton::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ExplodingSkeleton");
    return (UMultiFX2_ExplodingSkeleton*)res;
}
