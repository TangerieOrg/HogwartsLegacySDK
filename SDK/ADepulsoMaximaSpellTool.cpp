#include "ADepulsoMaximaSpellTool.hpp"
#include "AFireOnceSpellTool.hpp"
ADepulsoMaximaSpellTool* ADepulsoMaximaSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DepulsoMaximaSpellTool");
    return (ADepulsoMaximaSpellTool*)res;
}
