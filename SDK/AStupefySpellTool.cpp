#include "AFireOnceThrowSpellTool.hpp"
#include "AStupefySpellTool.hpp"
#include "UClass.hpp"
AStupefySpellTool* AStupefySpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StupefySpellTool");
    return (AStupefySpellTool*)res;
}
