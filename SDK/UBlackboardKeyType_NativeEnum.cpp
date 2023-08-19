#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_NativeEnum.hpp"
#include "UEnum.hpp"
UBlackboardKeyType_NativeEnum* UBlackboardKeyType_NativeEnum::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_NativeEnum");
    return (UBlackboardKeyType_NativeEnum*)res;
}
