#include "UCameraCheatManager.hpp"
#include "UCheatManager.hpp"
UCameraCheatManager* UCameraCheatManager::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraCheatManager");
    return (UCameraCheatManager*)res;
}
