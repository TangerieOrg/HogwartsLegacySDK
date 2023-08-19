#include "FTransform.hpp"
#include "UAnimInstance.hpp"
#include "UAnimInstance_ApplyActorTransform.hpp"
UAnimInstance_ApplyActorTransform* UAnimInstance_ApplyActorTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimInstance_ApplyActorTransform");
    return (UAnimInstance_ApplyActorTransform*)res;
}
