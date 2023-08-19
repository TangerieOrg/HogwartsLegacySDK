#include "AFireOnceSpellTool.hpp"
#include "ASpellTool.hpp"
#include "FAdditionalProjectiles.hpp"
AFireOnceSpellTool* AFireOnceSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FireOnceSpellTool");
    return (AFireOnceSpellTool*)res;
}
