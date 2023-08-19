#include "FExplodingSkeletonSetup.hpp"
#include "UDataAsset.hpp"
#include "UExplodingSkeletonPieceSetup.hpp"
UExplodingSkeletonPieceSetup* UExplodingSkeletonPieceSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ExplodingSkeletonPieceSetup");
    return (UExplodingSkeletonPieceSetup*)res;
}
