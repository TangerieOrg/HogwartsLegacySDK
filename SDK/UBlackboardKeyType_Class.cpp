#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_Class.hpp"
#include "UClass.hpp"
UBlackboardKeyType_Class* UBlackboardKeyType_Class::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_Class");
    return (UBlackboardKeyType_Class*)res;
}
