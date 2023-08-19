#include "AMeleeSpellTool.hpp"
#include "ASpellTool.hpp"
AMeleeSpellTool* AMeleeSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MeleeSpellTool");
    return (AMeleeSpellTool*)res;
}
