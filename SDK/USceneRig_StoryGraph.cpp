#include "USceneRigProvider.hpp"
#include "USceneRig_StoryGraph.hpp"
#include "UTimeRig_StoryGraph.hpp"
USceneRig_StoryGraph* USceneRig_StoryGraph::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRig_StoryGraph");
    return (USceneRig_StoryGraph*)res;
}
