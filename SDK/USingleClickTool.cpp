#include "UInteractiveTool.hpp"
#include "USingleClickTool.hpp"
USingleClickTool* USingleClickTool::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.SingleClickTool");
    return (USingleClickTool*)res;
}
