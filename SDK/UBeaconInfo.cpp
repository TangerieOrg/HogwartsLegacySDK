#include "AActor.hpp"
#include "EBeaconState.hpp"
#include "EBeaconSubType.hpp"
#include "EBeaconType.hpp"
#include "FBeaconDistanceRule.hpp"
#include "FVector.hpp"
#include "UBeaconInfo.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBeaconInfo* UBeaconInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BeaconInfo");
    return (UBeaconInfo*)res;
}
void UBeaconInfo::SetupChestBeacon(FString pBeaconName, FVector pLocation, AActor* pParentActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconInfo.SetupChestBeacon"));
    struct Params_SetupChestBeacon {
        FString pBeaconName; // 0x0
        FVector pLocation; // 0x10
        char pad_1c[0x4];
        AActor* pParentActor; // 0x20
    }; // Size: 0x28
    Params_SetupChestBeacon params{};
    params.pBeaconName = (FString)pBeaconName;
    params.pLocation = (FVector)pLocation;
    params.pParentActor = (AActor*)pParentActor;
    ProcessEvent(func, &params);
}
