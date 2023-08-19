#include "UBTTaskNode.hpp"
#include "UBTTask_RemoveActorTag.hpp"
UBTTask_RemoveActorTag* UBTTask_RemoveActorTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_RemoveActorTag");
    return (UBTTask_RemoveActorTag*)res;
}
