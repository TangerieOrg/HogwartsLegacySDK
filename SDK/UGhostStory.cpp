#include "UGhostStory.hpp"
#include "USceneRigStory.hpp"
UGhostStory* UGhostStory::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GhostStory");
    return (UGhostStory*)res;
}
