#include "AFireOnceSpellTool.hpp"
#include "AGlaciusMaximaSpellTool.hpp"
#include "UClass.hpp"
#include "UMultiFX2_Base.hpp"
AGlaciusMaximaSpellTool* AGlaciusMaximaSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GlaciusMaximaSpellTool");
    return (AGlaciusMaximaSpellTool*)res;
}
