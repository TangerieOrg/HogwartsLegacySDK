#include "UInputBehaviorSet.hpp"
#include "UInteractiveTool.hpp"
#include "UObject.hpp"
UInteractiveTool* UInteractiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InteractiveTool");
    return (UInteractiveTool*)res;
}
