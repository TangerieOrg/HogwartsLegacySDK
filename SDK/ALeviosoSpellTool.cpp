#include "AActor.hpp"
#include "AFireOnceSpellTool.hpp"
#include "ALeviosoSpellTool.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UCurveVector.hpp"
#include "UMultiFX2_Base.hpp"
ALeviosoSpellTool* ALeviosoSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LeviosoSpellTool");
    return (ALeviosoSpellTool*)res;
}
