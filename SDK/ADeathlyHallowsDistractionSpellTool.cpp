#include "ADeathlyHallowsDistractionSpellTool.hpp"
#include "AFireOnceSpellTool.hpp"
ADeathlyHallowsDistractionSpellTool* ADeathlyHallowsDistractionSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DeathlyHallowsDistractionSpellTool");
    return (ADeathlyHallowsDistractionSpellTool*)res;
}
