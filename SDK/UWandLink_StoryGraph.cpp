#include "FSceneRigStage_Actor.hpp"
#include "USceneRig_StoryGraph.hpp"
#include "UWandLink_StoryGraph.hpp"
UWandLink_StoryGraph* UWandLink_StoryGraph::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WandLink_StoryGraph");
    return (UWandLink_StoryGraph*)res;
}
