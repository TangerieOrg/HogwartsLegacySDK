#include "UBehaviorTreeTypes.hpp"
#include "UObject.hpp"
UBehaviorTreeTypes* UBehaviorTreeTypes::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BehaviorTreeTypes");
    return (UBehaviorTreeTypes*)res;
}
