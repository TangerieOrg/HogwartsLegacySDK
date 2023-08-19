#include "AFireOnceSpellTool.hpp"
#include "AObliviateSpellTool.hpp"
AObliviateSpellTool* AObliviateSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObliviateSpellTool");
    return (AObliviateSpellTool*)res;
}
