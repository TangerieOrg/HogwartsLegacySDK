#pragma once
#include <cstdint>
#include "EPropertyValueCategory.hpp"
#include "FCapturedPropSegment.hpp"
#include "UObject.hpp"
class UClass;
#pragma pack(push, 1)
class UPropertyValue : public UObject {
public:
    char pad_28[0x60];
    TArray<void*> Properties; // 0x88
    TArray<int32_t> PropertyIndices; // 0x98
    TArray<FCapturedPropSegment> CapturedPropSegments; // 0xa8
    FString FullDisplayString; // 0xb8
    FName PropertySetterName; // 0xc8
    char pad_d0[0x50];
    bool bHasRecordedData; // 0x120
    char pad_121[0x7];
    UClass* LeafPropertyClass; // 0x128
    char pad_130[0x8];
    TArray<uint8_t> ValueBytes; // 0x138
    EPropertyValueCategory PropCategory; // 0x148
    char pad_149[0x6f];
    static UPropertyValue* StaticClass();
    bool HasRecordedData();
    void GetPropertyTooltip();
    FString GetFullDisplayString();
}; // Size: 0x1b8
#pragma pack(pop)
