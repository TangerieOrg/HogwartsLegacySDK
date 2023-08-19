#include "UBaseArchitectAsset.hpp"
#include "UObject.hpp"
#include "USceneRigProvider.hpp"
#include "USceneRigStory.hpp"
#include "UStoryTeller.hpp"
UStoryTeller* UStoryTeller::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StoryTeller");
    return (UStoryTeller*)res;
}
