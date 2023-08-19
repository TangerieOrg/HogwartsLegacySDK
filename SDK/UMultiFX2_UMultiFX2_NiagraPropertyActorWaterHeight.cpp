#include "ENiagraPropertyTarget.hpp"
#include "UMultiFX2_NiagraPropertyBase.hpp"
#include "UMultiFX2_UMultiFX2_NiagraPropertyActorWaterHeight.hpp"
UMultiFX2_UMultiFX2_NiagraPropertyActorWaterHeight* UMultiFX2_UMultiFX2_NiagraPropertyActorWaterHeight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_UMultiFX2_NiagraPropertyActorWaterHeight");
    return (UMultiFX2_UMultiFX2_NiagraPropertyActorWaterHeight*)res;
}
