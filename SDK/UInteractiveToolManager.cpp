#include "UInteractiveTool.hpp"
#include "UInteractiveToolManager.hpp"
#include "UObject.hpp"
UInteractiveToolManager* UInteractiveToolManager::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InteractiveToolManager");
    return (UInteractiveToolManager*)res;
}
