#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_Name.hpp"
UBlackboardKeyType_Name* UBlackboardKeyType_Name::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_Name");
    return (UBlackboardKeyType_Name*)res;
}
