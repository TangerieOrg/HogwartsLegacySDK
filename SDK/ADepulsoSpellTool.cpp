#include "ADepulsoSpellTool.hpp"
#include "AFireOnceSpellTool.hpp"
#include "UClass.hpp"
ADepulsoSpellTool* ADepulsoSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DepulsoSpellTool");
    return (ADepulsoSpellTool*)res;
}
