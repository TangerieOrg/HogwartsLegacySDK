#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_Enum.hpp"
#include "UEnum.hpp"
UBlackboardKeyType_Enum* UBlackboardKeyType_Enum::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_Enum");
    return (UBlackboardKeyType_Enum*)res;
}
