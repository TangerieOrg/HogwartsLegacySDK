#include "AAIController.hpp"
#include "ANavigationData.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FVector.hpp"
#include "UBTService.hpp"
#include "UBTService_MissingNavmeshChecker.hpp"
#include "UFunction.hpp"
UBTService_MissingNavmeshChecker* UBTService_MissingNavmeshChecker::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.BTService_MissingNavmeshChecker");
    return (UBTService_MissingNavmeshChecker*)res;
}
bool UBTService_MissingNavmeshChecker::HasNavmesh(AAIController* AIOwner, ANavigationData* NavData, FVector Location, FVector Extent, FVector& OutLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.BTService_MissingNavmeshChecker.HasNavmesh"));
    struct Params_HasNavmesh {
        AAIController* AIOwner; // 0x0
        ANavigationData* NavData; // 0x8
        FVector Location; // 0x10
        FVector Extent; // 0x1c
        FVector OutLocation; // 0x28
        bool ReturnValue; // 0x34
    }; // Size: 0x35
    Params_HasNavmesh params{};
    params.AIOwner = (AAIController*)AIOwner;
    params.NavData = (ANavigationData*)NavData;
    params.Location = (FVector)Location;
    params.Extent = (FVector)Extent;
    params.OutLocation = (FVector)OutLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutLocation = params.OutLocation;
    return (bool)params.ReturnValue;
}
