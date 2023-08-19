#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_String.hpp"
UBlackboardKeyType_String* UBlackboardKeyType_String::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_String");
    return (UBlackboardKeyType_String*)res;
}
