#include "ENiagraPropertyTarget.hpp"
#include "UMultiFX2_NiagraPropertyBase.hpp"
#include "UMultiFX2_UMultiFX2_NiagraPropertyActorCenter.hpp"
UMultiFX2_UMultiFX2_NiagraPropertyActorCenter* UMultiFX2_UMultiFX2_NiagraPropertyActorCenter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_UMultiFX2_NiagraPropertyActorCenter");
    return (UMultiFX2_UMultiFX2_NiagraPropertyActorCenter*)res;
}
