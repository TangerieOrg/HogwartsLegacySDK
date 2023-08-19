#include "UInteractiveTool.hpp"
#include "USingleSelectionTool.hpp"
USingleSelectionTool* USingleSelectionTool::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.SingleSelectionTool");
    return (USingleSelectionTool*)res;
}
