#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UKismetGuidLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetGuidLibrary* StaticClass();
    static void Parse_StringToGuid(FString GuidString, FGuid& OutGuid, bool& Success);
    static bool NotEqual_GuidGuid(FGuid& A, FGuid& B);
    static FGuid NewGuid();
    static bool IsValid_Guid(FGuid& InGuid);
    static void Invalidate_Guid(FGuid& InGuid);
    static bool EqualEqual_GuidGuid(FGuid& A, FGuid& B);
    static FString Conv_GuidToString(FGuid& InGuid);
}; // Size: 0x28
#pragma pack(pop)
