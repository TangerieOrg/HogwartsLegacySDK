#include "ECreatureStance.hpp"
#include "UAnimInstance.hpp"
#include "UPropOwl_AnimInstance.hpp"
UPropOwl_AnimInstance* UPropOwl_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PropOwl_AnimInstance");
    return (UPropOwl_AnimInstance*)res;
}
