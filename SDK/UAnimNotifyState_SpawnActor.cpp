#include "UAnimNotifyState_SpawnActor.hpp"
#include "UAnimNotifyState_SpawnActorBase.hpp"
#include "UClass.hpp"
UAnimNotifyState_SpawnActor* UAnimNotifyState_SpawnActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotifyState_SpawnActor");
    return (UAnimNotifyState_SpawnActor*)res;
}
