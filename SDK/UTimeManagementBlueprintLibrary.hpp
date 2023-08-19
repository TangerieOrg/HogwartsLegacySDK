#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FFrameRate.hpp"
#include "FFrameTime.hpp"
#include "FTimecode.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FQualifiedFrameTime;
#pragma pack(push, 1)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UTimeManagementBlueprintLibrary* StaticClass();
    static FFrameTime TransformTime(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& DestinationRate);
    static FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32_t B);
    static FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
    static FFrameTime SnapFrameTimeToRate(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& SnapToRate);
    static FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, FFrameRate& FrameRate);
    static FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32_t B);
    static bool IsValid_MultipleOf(FFrameRate& InFrameRate, FFrameRate& OtherFramerate);
    static bool IsValid_Framerate(FFrameRate& InFrameRate);
    static FFrameRate GetTimecodeFrameRate();
    static FTimecode GetTimecode();
    static FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32_t B);
    static FString Conv_TimecodeToString(FTimecode& InTimecode, bool bForceSignDisplay);
    static float Conv_QualifiedFrameTimeToSeconds(FQualifiedFrameTime& InFrameTime);
    static float Conv_FrameRateToSeconds(FFrameRate& InFrameRate);
    static int32_t Conv_FrameNumberToInteger(FFrameNumber& InFrameNumber);
    static FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32_t B);
    static FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
}; // Size: 0x28
#pragma pack(pop)
