#include "UObject.hpp"
#include "UToolManager.hpp"
UToolManager* UToolManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.ToolManager");
    return (UToolManager*)res;
}
