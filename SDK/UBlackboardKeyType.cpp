#include "UBlackboardKeyType.hpp"
#include "UObject.hpp"
UBlackboardKeyType* UBlackboardKeyType::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType");
    return (UBlackboardKeyType*)res;
}
