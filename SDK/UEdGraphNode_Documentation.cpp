#include "UEdGraphNode.hpp"
#include "UEdGraphNode_Documentation.hpp"
UEdGraphNode_Documentation* UEdGraphNode_Documentation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EdGraphNode_Documentation");
    return (UEdGraphNode_Documentation*)res;
}
