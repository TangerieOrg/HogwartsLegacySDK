#include "EEdGraphPinDirection.hpp"
#include "FEdGraphPinType.hpp"
#include "UEdGraphPin_Deprecated.hpp"
#include "UObject.hpp"
UEdGraphPin_Deprecated* UEdGraphPin_Deprecated::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EdGraphPin_Deprecated");
    return (UEdGraphPin_Deprecated*)res;
}
