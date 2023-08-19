#include "ENiagraPropertyTarget.hpp"
#include "UMultiFX2_NiagraPropertyBase.hpp"
#include "UMultiFX2_UMultiFX2_NiagraPropertyActorExtents.hpp"
UMultiFX2_UMultiFX2_NiagraPropertyActorExtents* UMultiFX2_UMultiFX2_NiagraPropertyActorExtents::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_UMultiFX2_NiagraPropertyActorExtents");
    return (UMultiFX2_UMultiFX2_NiagraPropertyActorExtents*)res;
}
