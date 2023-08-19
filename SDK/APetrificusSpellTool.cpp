#include "AFireOnceSpellTool.hpp"
#include "APetrificusSpellTool.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2_Base.hpp"
APetrificusSpellTool* APetrificusSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PetrificusSpellTool");
    return (APetrificusSpellTool*)res;
}
