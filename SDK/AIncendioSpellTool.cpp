#include "AActor.hpp"
#include "AFireOnceSpellTool.hpp"
#include "AIncendioSpellTool.hpp"
#include "AMunitionType_AOE_MultiFX.hpp"
#include "UClass.hpp"
#include "UMultiFX2_Base.hpp"
AIncendioSpellTool* AIncendioSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IncendioSpellTool");
    return (AIncendioSpellTool*)res;
}
