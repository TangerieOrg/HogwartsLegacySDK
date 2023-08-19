#include "UAnimNotify.hpp"
#include "UAnimNotify_ResetDynamics.hpp"
UAnimNotify_ResetDynamics* UAnimNotify_ResetDynamics::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotify_ResetDynamics");
    return (UAnimNotify_ResetDynamics*)res;
}
