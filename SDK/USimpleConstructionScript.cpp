#include "UObject.hpp"
#include "USCS_Node.hpp"
#include "USimpleConstructionScript.hpp"
USimpleConstructionScript* USimpleConstructionScript::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SimpleConstructionScript");
    return (USimpleConstructionScript*)res;
}
