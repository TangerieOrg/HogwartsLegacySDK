#include "AActor.hpp"
#include "AFireOnceSpellTool.hpp"
#include "AGlaciusSpellTool.hpp"
#include "UClass.hpp"
#include "UMultiFX2_Base.hpp"
AGlaciusSpellTool* AGlaciusSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GlaciusSpellTool");
    return (AGlaciusSpellTool*)res;
}
