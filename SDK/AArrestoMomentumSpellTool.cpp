#include "AArrestoMomentumSpellTool.hpp"
#include "AFireOnceSpellTool.hpp"
#include "UClass.hpp"
#include "UMultiFX2_Base.hpp"
AArrestoMomentumSpellTool* AArrestoMomentumSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ArrestoMomentumSpellTool");
    return (AArrestoMomentumSpellTool*)res;
}
