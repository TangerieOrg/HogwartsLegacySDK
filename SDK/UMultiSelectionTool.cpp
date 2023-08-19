#include "UInteractiveTool.hpp"
#include "UMultiSelectionTool.hpp"
UMultiSelectionTool* UMultiSelectionTool::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.MultiSelectionTool");
    return (UMultiSelectionTool*)res;
}
