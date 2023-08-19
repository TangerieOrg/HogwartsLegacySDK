#include "FPhysicalResponseEventData.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhysicalResponseReporter.hpp"
UPhysicalResponseReporter* UPhysicalResponseReporter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhysicalResponseReporter");
    return (UPhysicalResponseReporter*)res;
}
void UPhysicalResponseReporter::HandlePhysicalSweep_Static(FVector& SweepPosition, FVector& PreviousPosition, FName SourceName, float Radius, float StrengthFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicalResponseReporter.HandlePhysicalSweep_Static"));
    struct Params_HandlePhysicalSweep_Static {
        FVector SweepPosition; // 0x0
        FVector PreviousPosition; // 0xc
        FName SourceName; // 0x18
        float Radius; // 0x20
        float StrengthFactor; // 0x24
    }; // Size: 0x28
    Params_HandlePhysicalSweep_Static params{};
    params.SweepPosition = (FVector)SweepPosition;
    params.PreviousPosition = (FVector)PreviousPosition;
    params.SourceName = (FName)SourceName;
    params.Radius = (float)Radius;
    params.StrengthFactor = (float)StrengthFactor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SweepPosition = params.SweepPosition;
    PreviousPosition = params.PreviousPosition;
}
