#include "UAnimationArchitectTagProvider.hpp"
#include "USceneRigTag_StationStory.hpp"
USceneRigTag_StationStory* USceneRigTag_StationStory::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigTag_StationStory");
    return (USceneRigTag_StationStory*)res;
}
