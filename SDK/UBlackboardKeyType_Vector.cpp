#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_Vector.hpp"
UBlackboardKeyType_Vector* UBlackboardKeyType_Vector::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_Vector");
    return (UBlackboardKeyType_Vector*)res;
}
