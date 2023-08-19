#include "FBox.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UVisualLoggerKismetLibrary.hpp"
UVisualLoggerKismetLibrary* UVisualLoggerKismetLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VisualLoggerKismetLibrary");
    return (UVisualLoggerKismetLibrary*)res;
}
void UVisualLoggerKismetLibrary::LogSegment(UObject* WorldContextObject, FVector SegmentStart, FVector SegmentEnd, FString Text, FLinearColor ObjectColor, float Thickness, FName CategoryName, bool bAddToMessageLog) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VisualLoggerKismetLibrary.LogSegment"));
    struct Params_LogSegment {
        UObject* WorldContextObject; // 0x0
        FVector SegmentStart; // 0x8
        FVector SegmentEnd; // 0x14
        FString Text; // 0x20
        FLinearColor ObjectColor; // 0x30
        float Thickness; // 0x40
        FName CategoryName; // 0x44
        bool bAddToMessageLog; // 0x4c
    }; // Size: 0x4d
    Params_LogSegment params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SegmentStart = (FVector)SegmentStart;
    params.SegmentEnd = (FVector)SegmentEnd;
    params.Text = (FString)Text;
    params.ObjectColor = (FLinearColor)ObjectColor;
    params.Thickness = (float)Thickness;
    params.CategoryName = (FName)CategoryName;
    params.bAddToMessageLog = (bool)bAddToMessageLog;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVisualLoggerKismetLibrary::RedirectVislog(UObject* SourceOwner, UObject* DestinationOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VisualLoggerKismetLibrary.RedirectVislog"));
    struct Params_RedirectVislog {
        UObject* SourceOwner; // 0x0
        UObject* DestinationOwner; // 0x8
    }; // Size: 0x10
    Params_RedirectVislog params{};
    params.SourceOwner = (UObject*)SourceOwner;
    params.DestinationOwner = (UObject*)DestinationOwner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVisualLoggerKismetLibrary::LogText(UObject* WorldContextObject, FString Text, FName LogCategory, bool bAddToMessageLog) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VisualLoggerKismetLibrary.LogText"));
    struct Params_LogText {
        UObject* WorldContextObject; // 0x0
        FString Text; // 0x8
        FName LogCategory; // 0x18
        bool bAddToMessageLog; // 0x20
    }; // Size: 0x21
    Params_LogText params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Text = (FString)Text;
    params.LogCategory = (FName)LogCategory;
    params.bAddToMessageLog = (bool)bAddToMessageLog;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVisualLoggerKismetLibrary::EnableRecording(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VisualLoggerKismetLibrary.EnableRecording"));
    struct Params_EnableRecording {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_EnableRecording params{};
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVisualLoggerKismetLibrary::LogBox(UObject* WorldContextObject, FBox BoxShape, FString Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VisualLoggerKismetLibrary.LogBox"));
    struct Params_LogBox {
        UObject* WorldContextObject; // 0x0
        FBox BoxShape; // 0x8
        char pad_24[0x4];
        FString Text; // 0x28
        FLinearColor ObjectColor; // 0x38
        FName LogCategory; // 0x48
        bool bAddToMessageLog; // 0x50
    }; // Size: 0x51
    Params_LogBox params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.BoxShape = (FBox)BoxShape;
    params.Text = (FString)Text;
    params.ObjectColor = (FLinearColor)ObjectColor;
    params.LogCategory = (FName)LogCategory;
    params.bAddToMessageLog = (bool)bAddToMessageLog;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVisualLoggerKismetLibrary::LogLocation(UObject* WorldContextObject, FVector Location, FString Text, FLinearColor ObjectColor, float Radius, FName LogCategory, bool bAddToMessageLog) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VisualLoggerKismetLibrary.LogLocation"));
    struct Params_LogLocation {
        UObject* WorldContextObject; // 0x0
        FVector Location; // 0x8
        char pad_14[0x4];
        FString Text; // 0x18
        FLinearColor ObjectColor; // 0x28
        float Radius; // 0x38
        FName LogCategory; // 0x3c
        bool bAddToMessageLog; // 0x44
    }; // Size: 0x45
    Params_LogLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Location = (FVector)Location;
    params.Text = (FString)Text;
    params.ObjectColor = (FLinearColor)ObjectColor;
    params.Radius = (float)Radius;
    params.LogCategory = (FName)LogCategory;
    params.bAddToMessageLog = (bool)bAddToMessageLog;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
