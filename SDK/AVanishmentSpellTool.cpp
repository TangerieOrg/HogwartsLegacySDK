#include "ATransfigurationSpellToolBase.hpp"
#include "AVanishmentSpellTool.hpp"
#include "UClass.hpp"
AVanishmentSpellTool* AVanishmentSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VanishmentSpellTool");
    return (AVanishmentSpellTool*)res;
}
