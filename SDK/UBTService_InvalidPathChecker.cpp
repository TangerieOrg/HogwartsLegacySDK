#include "AAIController.hpp"
#include "ANavigationData.hpp"
#include "FVector.hpp"
#include "UBTService.hpp"
#include "UBTService_InvalidPathChecker.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
UBTService_InvalidPathChecker* UBTService_InvalidPathChecker::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.BTService_InvalidPathChecker");
    return (UBTService_InvalidPathChecker*)res;
}
bool UBTService_InvalidPathChecker::CanPath(AAIController* AIOwner, ANavigationData* NavData, FVector From, FVector To, UClass* QueryFilter, bool bAllowPartial, float ProjRadius, float ProjHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.BTService_InvalidPathChecker.CanPath"));
    struct Params_CanPath {
        AAIController* AIOwner; // 0x0
        ANavigationData* NavData; // 0x8
        FVector From; // 0x10
        FVector To; // 0x1c
        UClass* QueryFilter; // 0x28
        bool bAllowPartial; // 0x30
        char pad_31[0x3];
        float ProjRadius; // 0x34
        float ProjHeight; // 0x38
        bool ReturnValue; // 0x3c
    }; // Size: 0x3d
    Params_CanPath params{};
    params.AIOwner = (AAIController*)AIOwner;
    params.NavData = (ANavigationData*)NavData;
    params.From = (FVector)From;
    params.To = (FVector)To;
    params.QueryFilter = (UClass*)QueryFilter;
    params.bAllowPartial = (bool)bAllowPartial;
    params.ProjRadius = (float)ProjRadius;
    params.ProjHeight = (float)ProjHeight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
