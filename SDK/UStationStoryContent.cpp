#include "FSceneRigStageCast.hpp"
#include "FStationStoryAnimationContent.hpp"
#include "UDataAsset.hpp"
#include "USkeletalMesh.hpp"
#include "UStaticMesh.hpp"
#include "UStationStoryContent.hpp"
#include "UStationStoryProp.hpp"
UStationStoryContent* UStationStoryContent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationStoryContent");
    return (UStationStoryContent*)res;
}
