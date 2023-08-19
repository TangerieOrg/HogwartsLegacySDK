#include "UDebugSceneRigManager.hpp"
#include "UDebugWindow.hpp"
UDebugSceneRigManager* UDebugSceneRigManager::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.DebugSceneRigManager");
    return (UDebugSceneRigManager*)res;
}
