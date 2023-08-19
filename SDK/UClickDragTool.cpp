#include "UClickDragTool.hpp"
#include "UInteractiveTool.hpp"
UClickDragTool* UClickDragTool::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.ClickDragTool");
    return (UClickDragTool*)res;
}
