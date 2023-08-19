#include "ACrucioSpellTool.hpp"
#include "AFireOnceSpellTool.hpp"
#include "UClass.hpp"
#include "UMultiFX2_Base.hpp"
ACrucioSpellTool* ACrucioSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CrucioSpellTool");
    return (ACrucioSpellTool*)res;
}
