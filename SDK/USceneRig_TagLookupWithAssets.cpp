#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UBaseArchitectAsset.hpp"
#include "USceneRigProvider.hpp"
#include "USceneRig_TagLookupWithAssets.hpp"
USceneRig_TagLookupWithAssets* USceneRig_TagLookupWithAssets::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRig_TagLookupWithAssets");
    return (USceneRig_TagLookupWithAssets*)res;
}
