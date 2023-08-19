#include "UObject.hpp"
#include "USceneRig.hpp"
#include "USceneRigStory.hpp"
USceneRigStory* USceneRigStory::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigStory");
    return (USceneRigStory*)res;
}
