#include "AAOESpellTool.hpp"
#include "ASpellTool.hpp"
#include "UClass.hpp"
AAOESpellTool* AAOESpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AOESpellTool");
    return (AAOESpellTool*)res;
}
