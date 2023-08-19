#include "FGameplayTag.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_TagCooldown.hpp"
UBTDecorator_TagCooldown* UBTDecorator_TagCooldown::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_TagCooldown");
    return (UBTDecorator_TagCooldown*)res;
}
