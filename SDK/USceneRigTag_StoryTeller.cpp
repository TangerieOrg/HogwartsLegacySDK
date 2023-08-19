#include "UAnimationArchitectTagProvider.hpp"
#include "USceneRigTag_StoryTeller.hpp"
USceneRigTag_StoryTeller* USceneRigTag_StoryTeller::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigTag_StoryTeller");
    return (USceneRigTag_StoryTeller*)res;
}
