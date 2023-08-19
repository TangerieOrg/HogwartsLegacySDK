#include "AFiniteSpellTool.hpp"
#include "AFireOnceSpellTool.hpp"
AFiniteSpellTool* AFiniteSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FiniteSpellTool");
    return (AFiniteSpellTool*)res;
}
