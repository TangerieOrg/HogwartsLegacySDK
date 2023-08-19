#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMercunaPath.hpp"
#include "UObject.hpp"
UMercunaPath* UMercunaPath::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaPath");
    return (UMercunaPath*)res;
}
bool UMercunaPath::IsValid() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaPath.IsValid"));
    struct Params_IsValid {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsValid params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMercunaPath::GetPathLength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaPath.GetPathLength"));
    struct Params_GetPathLength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPathLength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UMercunaPath::IsPartial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaPath.IsPartial"));
    struct Params_IsPartial {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPartial params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMercunaPath::IsReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaPath.IsReady"));
    struct Params_IsReady {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReady params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMercunaPath::GetDebugInfo(int32_t& nodesUsed, bool& bOutOfNodes, float& queryTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaPath.GetDebugInfo"));
    struct Params_GetDebugInfo {
        int32_t nodesUsed; // 0x0
        bool bOutOfNodes; // 0x4
        char pad_5[0x3];
        float queryTime; // 0x8
    }; // Size: 0xc
    Params_GetDebugInfo params{};
    params.nodesUsed = (int32_t)nodesUsed;
    params.bOutOfNodes = (bool)bOutOfNodes;
    params.queryTime = (float)queryTime;
    ProcessEvent(func, &params);
    nodesUsed = params.nodesUsed;
    bOutOfNodes = params.bOutOfNodes;
    queryTime = params.queryTime;
}
int32_t UMercunaPath::GetNumPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaPath.GetNumPoints"));
    struct Params_GetNumPoints {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumPoints params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector UMercunaPath::GetPoint(int32_t I) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaPath.GetPoint"));
    struct Params_GetPoint {
        int32_t I; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetPoint params{};
    params.I = (int32_t)I;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
