#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOdc_BP.hpp"
UOdc_BP* UOdc_BP::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.Odc_BP");
    return (UOdc_BP*)res;
}
bool UOdc_BP::GetNavmeshPoint(int32_t Layer, FVector& InLoc, float InRadius, float InUpDist, float InDownDist, FVector& OutLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OdysseyRuntime.Odc_BP.GetNavmeshPoint"));
    struct Params_GetNavmeshPoint {
        int32_t Layer; // 0x0
        FVector InLoc; // 0x4
        float InRadius; // 0x10
        float InUpDist; // 0x14
        float InDownDist; // 0x18
        FVector OutLoc; // 0x1c
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetNavmeshPoint params{};
    params.Layer = (int32_t)Layer;
    params.InLoc = (FVector)InLoc;
    params.InRadius = (float)InRadius;
    params.InUpDist = (float)InUpDist;
    params.InDownDist = (float)InDownDist;
    params.OutLoc = (FVector)OutLoc;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InLoc = params.InLoc;
    OutLoc = params.OutLoc;
    return (bool)params.ReturnValue;
}
