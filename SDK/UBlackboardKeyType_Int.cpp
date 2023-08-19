#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_Int.hpp"
UBlackboardKeyType_Int* UBlackboardKeyType_Int::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_Int");
    return (UBlackboardKeyType_Int*)res;
}
