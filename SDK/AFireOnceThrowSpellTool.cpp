#include "AFireOnceSpellTool.hpp"
#include "AFireOnceThrowSpellTool.hpp"
AFireOnceThrowSpellTool* AFireOnceThrowSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FireOnceThrowSpellTool");
    return (AFireOnceThrowSpellTool*)res;
}
