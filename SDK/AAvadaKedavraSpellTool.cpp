#include "AAvadaKedavraSpellTool.hpp"
#include "AFireOnceSpellTool.hpp"
#include "UCurveFloat.hpp"
#include "UMultiFX2_Base.hpp"
AAvadaKedavraSpellTool* AAvadaKedavraSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvadaKedavraSpellTool");
    return (AAvadaKedavraSpellTool*)res;
}
