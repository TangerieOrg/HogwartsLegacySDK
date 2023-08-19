#include "UBTDecorator.hpp"
#include "UBTDecorator_HasActorTag.hpp"
UBTDecorator_HasActorTag* UBTDecorator_HasActorTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_HasActorTag");
    return (UBTDecorator_HasActorTag*)res;
}
