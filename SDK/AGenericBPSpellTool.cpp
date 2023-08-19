#include "AChannelingSpellTool.hpp"
#include "AGenericBPSpellTool.hpp"
#include "UClass.hpp"
AGenericBPSpellTool* AGenericBPSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GenericBPSpellTool");
    return (AGenericBPSpellTool*)res;
}
