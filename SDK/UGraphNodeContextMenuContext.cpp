#include "UBlueprint.hpp"
#include "UEdGraph.hpp"
#include "UEdGraphNode.hpp"
#include "UGraphNodeContextMenuContext.hpp"
#include "UObject.hpp"
UGraphNodeContextMenuContext* UGraphNodeContextMenuContext::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GraphNodeContextMenuContext");
    return (UGraphNodeContextMenuContext*)res;
}
