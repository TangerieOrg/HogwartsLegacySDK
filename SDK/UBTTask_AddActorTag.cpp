#include "UBTTaskNode.hpp"
#include "UBTTask_AddActorTag.hpp"
UBTTask_AddActorTag* UBTTask_AddActorTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_AddActorTag");
    return (UBTTask_AddActorTag*)res;
}
