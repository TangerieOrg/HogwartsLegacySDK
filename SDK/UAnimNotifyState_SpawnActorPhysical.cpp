#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotifyState.hpp"
#include "UAnimNotifyState_SpawnActorPhysical.hpp"
#include "UClass.hpp"
#include "UStaticMesh.hpp"
UAnimNotifyState_SpawnActorPhysical* UAnimNotifyState_SpawnActorPhysical::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotifyState_SpawnActorPhysical");
    return (UAnimNotifyState_SpawnActorPhysical*)res;
}
