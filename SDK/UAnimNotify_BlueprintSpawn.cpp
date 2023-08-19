#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotifyState.hpp"
#include "UAnimNotify_BlueprintSpawn.hpp"
#include "UClass.hpp"
UAnimNotify_BlueprintSpawn* UAnimNotify_BlueprintSpawn::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimNotify_BlueprintSpawn");
    return (UAnimNotify_BlueprintSpawn*)res;
}
