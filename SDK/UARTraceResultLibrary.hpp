#pragma once
#include <cstdint>
#include "EARLineTraceChannels.hpp"
#include "FTransform.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FARTraceResult;
class UARTrackedGeometry;
#pragma pack(push, 1)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary {
public:
    static UARTraceResultLibrary* StaticClass();
    static UARTrackedGeometry* GetTrackedGeometry(FARTraceResult& TraceResult);
    static EARLineTraceChannels GetTraceChannel(FARTraceResult& TraceResult);
    static FTransform GetLocalTransform(FARTraceResult& TraceResult);
    static FTransform GetLocalToWorldTransform(FARTraceResult& TraceResult);
    static FTransform GetLocalToTrackingTransform(FARTraceResult& TraceResult);
    static float GetDistanceFromCamera(FARTraceResult& TraceResult);
}; // Size: 0x28
#pragma pack(pop)
