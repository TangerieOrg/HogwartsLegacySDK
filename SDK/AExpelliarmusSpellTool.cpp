#include "AExpelliarmusSpellTool.hpp"
#include "AFireOnceSpellTool.hpp"
#include "FGameplayTag.hpp"
#include "UClass.hpp"
AExpelliarmusSpellTool* AExpelliarmusSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ExpelliarmusSpellTool");
    return (AExpelliarmusSpellTool*)res;
}
