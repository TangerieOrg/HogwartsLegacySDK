#include "ADiffindoSpellTool.hpp"
#include "ASpellTool.hpp"
#include "UClass.hpp"
ADiffindoSpellTool* ADiffindoSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DiffindoSpellTool");
    return (ADiffindoSpellTool*)res;
}
