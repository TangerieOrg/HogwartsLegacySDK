#include "AEpiskeySpellTool.hpp"
#include "ASpellTool.hpp"
AEpiskeySpellTool* AEpiskeySpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EpiskeySpellTool");
    return (AEpiskeySpellTool*)res;
}
