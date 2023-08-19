#include "AActor.hpp"
#include "UAnimNotifyState.hpp"
#include "UAnimNotifyState_SpawnActorBase.hpp"
#include "UCurveFloat.hpp"
UAnimNotifyState_SpawnActorBase* UAnimNotifyState_SpawnActorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotifyState_SpawnActorBase");
    return (UAnimNotifyState_SpawnActorBase*)res;
}
