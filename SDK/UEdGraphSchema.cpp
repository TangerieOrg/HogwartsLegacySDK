#include "UEdGraphSchema.hpp"
#include "UObject.hpp"
UEdGraphSchema* UEdGraphSchema::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EdGraphSchema");
    return (UEdGraphSchema*)res;
}
