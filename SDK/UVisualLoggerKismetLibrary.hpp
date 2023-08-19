#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary {
public:
    static UVisualLoggerKismetLibrary* StaticClass();
    static void RedirectVislog(UObject* SourceOwner, UObject* DestinationOwner);
    static void LogText(UObject* WorldContextObject, FString Text, FName LogCategory, bool bAddToMessageLog);
    static void LogSegment(UObject* WorldContextObject, FVector SegmentStart, FVector SegmentEnd, FString Text, FLinearColor ObjectColor, float Thickness, FName CategoryName, bool bAddToMessageLog);
    static void LogLocation(UObject* WorldContextObject, FVector Location, FString Text, FLinearColor ObjectColor, float Radius, FName LogCategory, bool bAddToMessageLog);
    static void LogBox(UObject* WorldContextObject, FBox BoxShape, FString Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog);
    static void EnableRecording(bool bEnabled);
}; // Size: 0x28
#pragma pack(pop)
