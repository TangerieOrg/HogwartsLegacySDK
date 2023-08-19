#include "AConfundoSpellTool.hpp"
#include "AFireOnceSpellTool.hpp"
#include "UMultiFX2_Base.hpp"
AConfundoSpellTool* AConfundoSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConfundoSpellTool");
    return (AConfundoSpellTool*)res;
}
