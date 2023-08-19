#include "ENiagraPropertyTarget.hpp"
#include "UMultiFX2_NiagraPropertyBase.hpp"
#include "UMultiFX2_UMultiFX2_NiagraPropertyVelocity.hpp"
UMultiFX2_UMultiFX2_NiagraPropertyVelocity* UMultiFX2_UMultiFX2_NiagraPropertyVelocity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_UMultiFX2_NiagraPropertyVelocity");
    return (UMultiFX2_UMultiFX2_NiagraPropertyVelocity*)res;
}
