#include "UClass.hpp"
#include "UEdGraph.hpp"
#include "UEdGraphNode.hpp"
#include "UObject.hpp"
UEdGraph* UEdGraph::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EdGraph");
    return (UEdGraph*)res;
}
