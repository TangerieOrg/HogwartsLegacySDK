#include "EHoudiniPointCacheFileType.hpp"
#include "FLinearColor.hpp"
#include "FPointIndexes.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UFunction.hpp"
#include "UHoudiniPointCache.hpp"
#include "UObject.hpp"
bool UHoudiniPointCache::GetVectorValueForString(int32_t& SampleIndex, FString Attribute, FVector& Value, bool& DoSwap, bool& DoScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetVectorValueForString"));
    struct Params_GetVectorValueForString {
        int32_t SampleIndex; // 0x0
        char pad_4[0x4];
        FString Attribute; // 0x8
        FVector Value; // 0x18
        bool DoSwap; // 0x24
        bool DoScale; // 0x25
        bool ReturnValue; // 0x26
    }; // Size: 0x27
    Params_GetVectorValueForString params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.Attribute = (FString)Attribute;
    params.Value = (FVector)Value;
    params.DoSwap = (bool)DoSwap;
    params.DoScale = (bool)DoScale;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    Value = params.Value;
    DoSwap = params.DoSwap;
    DoScale = params.DoScale;
    return (bool)params.ReturnValue;
}
TArray<int32_t> UHoudiniPointCache::GetPointTypes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointTypes"));
    struct Params_GetPointTypes {
        TArray<int32_t> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPointTypes params{};
    ProcessEvent(func, &params);
    return (TArray<int32_t>)params.ReturnValue;
}
UHoudiniPointCache* UHoudiniPointCache::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniNiagara.HoudiniPointCache");
    return (UHoudiniPointCache*)res;
}
void UHoudiniPointCache::SetUseCustomCSVTitleRow(bool bInUseCustomCSVTitleRow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.SetUseCustomCSVTitleRow"));
    struct Params_SetUseCustomCSVTitleRow {
        bool bInUseCustomCSVTitleRow; // 0x0
    }; // Size: 0x1
    Params_SetUseCustomCSVTitleRow params{};
    params.bInUseCustomCSVTitleRow = (bool)bInUseCustomCSVTitleRow;
    ProcessEvent(func, &params);
}
bool UHoudiniPointCache::GetLastSampleIndexAtTime(float& desiredTime, int32_t& lastSampleIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetLastSampleIndexAtTime"));
    struct Params_GetLastSampleIndexAtTime {
        float desiredTime; // 0x0
        int32_t lastSampleIndex; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetLastSampleIndexAtTime params{};
    params.desiredTime = (float)desiredTime;
    params.lastSampleIndex = (int32_t)lastSampleIndex;
    ProcessEvent(func, &params);
    desiredTime = params.desiredTime;
    lastSampleIndex = params.lastSampleIndex;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetVector4ValueForString(int32_t& SampleIndex, FString Attribute, FVector4& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetVector4ValueForString"));
    struct Params_GetVector4ValueForString {
        int32_t SampleIndex; // 0x0
        char pad_4[0x4];
        FString Attribute; // 0x8
        char pad_18[0x8];
        FVector4 Value; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetVector4ValueForString params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.Attribute = (FString)Attribute;
    params.Value = (FVector4)Value;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetVelocityValue(int32_t& SampleIndex, FVector& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetVelocityValue"));
    struct Params_GetVelocityValue {
        int32_t SampleIndex; // 0x0
        FVector Value; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetVelocityValue params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.Value = (FVector)Value;
    ProcessEvent(func, &params);
    Value = params.Value;
    SampleIndex = params.SampleIndex;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetUseCustomCSVTitleRow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetUseCustomCSVTitleRow"));
    struct Params_GetUseCustomCSVTitleRow {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetUseCustomCSVTitleRow params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetVectorValue(int32_t& SampleIndex, int32_t& attrIndex, FVector& Value, bool& DoSwap, bool& DoScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetVectorValue"));
    struct Params_GetVectorValue {
        int32_t SampleIndex; // 0x0
        int32_t attrIndex; // 0x4
        FVector Value; // 0x8
        bool DoSwap; // 0x14
        bool DoScale; // 0x15
        bool ReturnValue; // 0x16
    }; // Size: 0x17
    Params_GetVectorValue params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.attrIndex = (int32_t)attrIndex;
    params.Value = (FVector)Value;
    params.DoSwap = (bool)DoSwap;
    params.DoScale = (bool)DoScale;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    Value = params.Value;
    attrIndex = params.attrIndex;
    DoSwap = params.DoSwap;
    DoScale = params.DoScale;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetVector4Value(int32_t& SampleIndex, int32_t& attrIndex, FVector4& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetVector4Value"));
    struct Params_GetVector4Value {
        int32_t SampleIndex; // 0x0
        int32_t attrIndex; // 0x4
        char pad_8[0x8];
        FVector4 Value; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetVector4Value params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.attrIndex = (int32_t)attrIndex;
    params.Value = (FVector4)Value;
    ProcessEvent(func, &params);
    attrIndex = params.attrIndex;
    SampleIndex = params.SampleIndex;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetTimeValue(int32_t& SampleIndex, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetTimeValue"));
    struct Params_GetTimeValue {
        int32_t SampleIndex; // 0x0
        float Value; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetTimeValue params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetAttributeIndexInArrayFromString(FString InAttribute, TArray<FString>& InAttributeArray, int32_t& OutAttributeIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetAttributeIndexInArrayFromString"));
    struct Params_GetAttributeIndexInArrayFromString {
        FString InAttribute; // 0x0
        TArray<FString> InAttributeArray; // 0x10
        int32_t OutAttributeIndex; // 0x20
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_GetAttributeIndexInArrayFromString params{};
    params.InAttribute = (FString)InAttribute;
    params.InAttributeArray = (TArray<FString>)InAttributeArray;
    params.OutAttributeIndex = (int32_t)OutAttributeIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAttributeArray = params.InAttributeArray;
    OutAttributeIndex = params.OutAttributeIndex;
    return (bool)params.ReturnValue;
}
TArray<int32_t> UHoudiniPointCache::GetSpecialAttributeIndexes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetSpecialAttributeIndexes"));
    struct Params_GetSpecialAttributeIndexes {
        TArray<int32_t> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSpecialAttributeIndexes params{};
    ProcessEvent(func, &params);
    return (TArray<int32_t>)params.ReturnValue;
}
TArray<float> UHoudiniPointCache::GetSpawnTimes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetSpawnTimes"));
    struct Params_GetSpawnTimes {
        TArray<float> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSpawnTimes params{};
    ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
bool UHoudiniPointCache::GetColorValue(int32_t& SampleIndex, FLinearColor& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetColorValue"));
    struct Params_GetColorValue {
        int32_t SampleIndex; // 0x0
        FLinearColor Value; // 0x4
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetColorValue params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointValueAtTimeForString(int32_t& POINTID, FString Attribute, float& desiredTime, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointValueAtTimeForString"));
    struct Params_GetPointValueAtTimeForString {
        int32_t POINTID; // 0x0
        char pad_4[0x4];
        FString Attribute; // 0x8
        float desiredTime; // 0x18
        float Value; // 0x1c
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetPointValueAtTimeForString params{};
    params.POINTID = (int32_t)POINTID;
    params.Attribute = (FString)Attribute;
    params.desiredTime = (float)desiredTime;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    POINTID = params.POINTID;
    desiredTime = params.desiredTime;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetSampleIndexesForPointAtTime(int32_t& POINTID, float& desiredTime, int32_t& PrevSampleIndex, int32_t& NextSampleIndex, float& PrevWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetSampleIndexesForPointAtTime"));
    struct Params_GetSampleIndexesForPointAtTime {
        int32_t POINTID; // 0x0
        float desiredTime; // 0x4
        int32_t PrevSampleIndex; // 0x8
        int32_t NextSampleIndex; // 0xc
        float PrevWeight; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetSampleIndexesForPointAtTime params{};
    params.POINTID = (int32_t)POINTID;
    params.desiredTime = (float)desiredTime;
    params.PrevSampleIndex = (int32_t)PrevSampleIndex;
    params.NextSampleIndex = (int32_t)NextSampleIndex;
    params.PrevWeight = (float)PrevWeight;
    ProcessEvent(func, &params);
    POINTID = params.POINTID;
    desiredTime = params.desiredTime;
    PrevSampleIndex = params.PrevSampleIndex;
    PrevWeight = params.PrevWeight;
    NextSampleIndex = params.NextSampleIndex;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetQuatValueForString(int32_t& SampleIndex, FString Attribute, FQuat& Value, bool& DoHoudiniToUnrealConversion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetQuatValueForString"));
    struct Params_GetQuatValueForString {
        int32_t SampleIndex; // 0x0
        char pad_4[0x4];
        FString Attribute; // 0x8
        char pad_18[0x8];
        FQuat Value; // 0x20
        bool DoHoudiniToUnrealConversion; // 0x30
        bool ReturnValue; // 0x31
    }; // Size: 0x32
    Params_GetQuatValueForString params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.Attribute = (FString)Attribute;
    params.Value = (FQuat)Value;
    params.DoHoudiniToUnrealConversion = (bool)DoHoudiniToUnrealConversion;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    Value = params.Value;
    DoHoudiniToUnrealConversion = params.DoHoudiniToUnrealConversion;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetQuatValue(int32_t& SampleIndex, int32_t& attrIndex, FQuat& Value, bool& DoHoudiniToUnrealConversion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetQuatValue"));
    struct Params_GetQuatValue {
        int32_t SampleIndex; // 0x0
        int32_t attrIndex; // 0x4
        char pad_8[0x8];
        FQuat Value; // 0x10
        bool DoHoudiniToUnrealConversion; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_GetQuatValue params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.attrIndex = (int32_t)attrIndex;
    params.Value = (FQuat)Value;
    params.DoHoudiniToUnrealConversion = (bool)DoHoudiniToUnrealConversion;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    attrIndex = params.attrIndex;
    Value = params.Value;
    DoHoudiniToUnrealConversion = params.DoHoudiniToUnrealConversion;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPositionValue(int32_t& SampleIndex, FVector& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPositionValue"));
    struct Params_GetPositionValue {
        int32_t SampleIndex; // 0x0
        FVector Value; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetPositionValue params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.Value = (FVector)Value;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointVectorValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FVector& Vector, bool DoSwap, bool DoScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointVectorValueAtTimeForString"));
    struct Params_GetPointVectorValueAtTimeForString {
        int32_t POINTID; // 0x0
        char pad_4[0x4];
        FString Attribute; // 0x8
        float desiredTime; // 0x18
        FVector Vector; // 0x1c
        bool DoSwap; // 0x28
        bool DoScale; // 0x29
        bool ReturnValue; // 0x2a
    }; // Size: 0x2b
    Params_GetPointVectorValueAtTimeForString params{};
    params.POINTID = (int32_t)POINTID;
    params.Attribute = (FString)Attribute;
    params.desiredTime = (float)desiredTime;
    params.Vector = (FVector)Vector;
    params.DoSwap = (bool)DoSwap;
    params.DoScale = (bool)DoScale;
    ProcessEvent(func, &params);
    Vector = params.Vector;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointVectorValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FVector& Vector, bool DoSwap, bool DoScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointVectorValueAtTime"));
    struct Params_GetPointVectorValueAtTime {
        int32_t POINTID; // 0x0
        int32_t AttributeIndex; // 0x4
        float desiredTime; // 0x8
        FVector Vector; // 0xc
        bool DoSwap; // 0x18
        bool DoScale; // 0x19
        bool ReturnValue; // 0x1a
    }; // Size: 0x1b
    Params_GetPointVectorValueAtTime params{};
    params.POINTID = (int32_t)POINTID;
    params.AttributeIndex = (int32_t)AttributeIndex;
    params.desiredTime = (float)desiredTime;
    params.Vector = (FVector)Vector;
    params.DoSwap = (bool)DoSwap;
    params.DoScale = (bool)DoScale;
    ProcessEvent(func, &params);
    Vector = params.Vector;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointVector4ValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FVector4& Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointVector4ValueAtTimeForString"));
    struct Params_GetPointVector4ValueAtTimeForString {
        int32_t POINTID; // 0x0
        char pad_4[0x4];
        FString Attribute; // 0x8
        float desiredTime; // 0x18
        char pad_1c[0x4];
        FVector4 Vector; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetPointVector4ValueAtTimeForString params{};
    params.POINTID = (int32_t)POINTID;
    params.Attribute = (FString)Attribute;
    params.desiredTime = (float)desiredTime;
    params.Vector = (FVector4)Vector;
    ProcessEvent(func, &params);
    Vector = params.Vector;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetFloatValue(int32_t& SampleIndex, int32_t& attrIndex, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetFloatValue"));
    struct Params_GetFloatValue {
        int32_t SampleIndex; // 0x0
        int32_t attrIndex; // 0x4
        float Value; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetFloatValue params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.attrIndex = (int32_t)attrIndex;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    attrIndex = params.attrIndex;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointVector4ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FVector4& Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointVector4ValueAtTime"));
    struct Params_GetPointVector4ValueAtTime {
        int32_t POINTID; // 0x0
        int32_t AttributeIndex; // 0x4
        float desiredTime; // 0x8
        char pad_c[0x4];
        FVector4 Vector; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetPointVector4ValueAtTime params{};
    params.POINTID = (int32_t)POINTID;
    params.AttributeIndex = (int32_t)AttributeIndex;
    params.desiredTime = (float)desiredTime;
    params.Vector = (FVector4)Vector;
    ProcessEvent(func, &params);
    Vector = params.Vector;
    return (bool)params.ReturnValue;
}
TArray<FPointIndexes> UHoudiniPointCache::GetPointValueIndexes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointValueIndexes"));
    struct Params_GetPointValueIndexes {
        TArray<FPointIndexes> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPointValueIndexes params{};
    ProcessEvent(func, &params);
    return (TArray<FPointIndexes>)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointValueAtTime(int32_t& POINTID, int32_t& AttributeIndex, float& desiredTime, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointValueAtTime"));
    struct Params_GetPointValueAtTime {
        int32_t POINTID; // 0x0
        int32_t AttributeIndex; // 0x4
        float desiredTime; // 0x8
        float Value; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetPointValueAtTime params{};
    params.POINTID = (int32_t)POINTID;
    params.AttributeIndex = (int32_t)AttributeIndex;
    params.desiredTime = (float)desiredTime;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    POINTID = params.POINTID;
    AttributeIndex = params.AttributeIndex;
    desiredTime = params.desiredTime;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointType(int32_t& POINTID, int32_t& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointType"));
    struct Params_GetPointType {
        int32_t POINTID; // 0x0
        int32_t Value; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetPointType params{};
    params.POINTID = (int32_t)POINTID;
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
    POINTID = params.POINTID;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointQuatValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FQuat& Quat, bool DoHoudiniToUnrealConversion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointQuatValueAtTimeForString"));
    struct Params_GetPointQuatValueAtTimeForString {
        int32_t POINTID; // 0x0
        char pad_4[0x4];
        FString Attribute; // 0x8
        float desiredTime; // 0x18
        char pad_1c[0x4];
        FQuat Quat; // 0x20
        bool DoHoudiniToUnrealConversion; // 0x30
        bool ReturnValue; // 0x31
    }; // Size: 0x32
    Params_GetPointQuatValueAtTimeForString params{};
    params.POINTID = (int32_t)POINTID;
    params.Attribute = (FString)Attribute;
    params.desiredTime = (float)desiredTime;
    params.Quat = (FQuat)Quat;
    params.DoHoudiniToUnrealConversion = (bool)DoHoudiniToUnrealConversion;
    ProcessEvent(func, &params);
    Quat = params.Quat;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointQuatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FQuat& Quat, bool DoHoudiniToUnrealConversion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointQuatValueAtTime"));
    struct Params_GetPointQuatValueAtTime {
        int32_t POINTID; // 0x0
        int32_t AttributeIndex; // 0x4
        float desiredTime; // 0x8
        char pad_c[0x4];
        FQuat Quat; // 0x10
        bool DoHoudiniToUnrealConversion; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_GetPointQuatValueAtTime params{};
    params.POINTID = (int32_t)POINTID;
    params.AttributeIndex = (int32_t)AttributeIndex;
    params.desiredTime = (float)desiredTime;
    params.Quat = (FQuat)Quat;
    params.DoHoudiniToUnrealConversion = (bool)DoHoudiniToUnrealConversion;
    ProcessEvent(func, &params);
    Quat = params.Quat;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointPositionAtTime(int32_t& POINTID, float& desiredTime, FVector& Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointPositionAtTime"));
    struct Params_GetPointPositionAtTime {
        int32_t POINTID; // 0x0
        float desiredTime; // 0x4
        FVector Vector; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetPointPositionAtTime params{};
    params.POINTID = (int32_t)POINTID;
    params.desiredTime = (float)desiredTime;
    params.Vector = (FVector)Vector;
    ProcessEvent(func, &params);
    POINTID = params.POINTID;
    Vector = params.Vector;
    desiredTime = params.desiredTime;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointLifeAtTime(int32_t& POINTID, float& desiredTime, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointLifeAtTime"));
    struct Params_GetPointLifeAtTime {
        int32_t POINTID; // 0x0
        float desiredTime; // 0x4
        float Value; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetPointLifeAtTime params{};
    params.POINTID = (int32_t)POINTID;
    params.desiredTime = (float)desiredTime;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    POINTID = params.POINTID;
    desiredTime = params.desiredTime;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
TArray<float> UHoudiniPointCache::GetFloatSampleData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetFloatSampleData"));
    struct Params_GetFloatSampleData {
        TArray<float> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFloatSampleData params{};
    ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointLife(int32_t& POINTID, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointLife"));
    struct Params_GetPointLife {
        int32_t POINTID; // 0x0
        float Value; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetPointLife params{};
    params.POINTID = (int32_t)POINTID;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    POINTID = params.POINTID;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetAttributeIndexFromString(FString Attribute, int32_t& AttributeIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetAttributeIndexFromString"));
    struct Params_GetAttributeIndexFromString {
        FString Attribute; // 0x0
        int32_t AttributeIndex; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetAttributeIndexFromString params{};
    params.Attribute = (FString)Attribute;
    params.AttributeIndex = (int32_t)AttributeIndex;
    ProcessEvent(func, &params);
    AttributeIndex = params.AttributeIndex;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointInt32ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, int32_t& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointInt32ValueAtTime"));
    struct Params_GetPointInt32ValueAtTime {
        int32_t POINTID; // 0x0
        int32_t AttributeIndex; // 0x4
        float desiredTime; // 0x8
        int32_t Value; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetPointInt32ValueAtTime params{};
    params.POINTID = (int32_t)POINTID;
    params.AttributeIndex = (int32_t)AttributeIndex;
    params.desiredTime = (float)desiredTime;
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointIDsToSpawnAtTime(float& desiredTime, int32_t& MinID, int32_t& MaxID, int32_t& Count, int32_t& LastSpawnedPointID, float& LastSpawnTime, float& LastSpawnTimeRequest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointIDsToSpawnAtTime"));
    struct Params_GetPointIDsToSpawnAtTime {
        float desiredTime; // 0x0
        int32_t MinID; // 0x4
        int32_t MaxID; // 0x8
        int32_t Count; // 0xc
        int32_t LastSpawnedPointID; // 0x10
        float LastSpawnTime; // 0x14
        float LastSpawnTimeRequest; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_GetPointIDsToSpawnAtTime params{};
    params.desiredTime = (float)desiredTime;
    params.MinID = (int32_t)MinID;
    params.MaxID = (int32_t)MaxID;
    params.Count = (int32_t)Count;
    params.LastSpawnedPointID = (int32_t)LastSpawnedPointID;
    params.LastSpawnTime = (float)LastSpawnTime;
    params.LastSpawnTimeRequest = (float)LastSpawnTimeRequest;
    ProcessEvent(func, &params);
    LastSpawnedPointID = params.LastSpawnedPointID;
    desiredTime = params.desiredTime;
    MinID = params.MinID;
    LastSpawnTime = params.LastSpawnTime;
    Count = params.Count;
    MaxID = params.MaxID;
    LastSpawnTimeRequest = params.LastSpawnTimeRequest;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetPointFloatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetPointFloatValueAtTime"));
    struct Params_GetPointFloatValueAtTime {
        int32_t POINTID; // 0x0
        int32_t AttributeIndex; // 0x4
        float desiredTime; // 0x8
        float Value; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetPointFloatValueAtTime params{};
    params.POINTID = (int32_t)POINTID;
    params.AttributeIndex = (int32_t)AttributeIndex;
    params.desiredTime = (float)desiredTime;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    Value = params.Value;
    return (bool)params.ReturnValue;
}
int32_t UHoudiniPointCache::GetNumberOfSamples() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetNumberOfSamples"));
    struct Params_GetNumberOfSamples {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfSamples params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UHoudiniPointCache::GetNumberOfPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetNumberOfPoints"));
    struct Params_GetNumberOfPoints {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfPoints params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UHoudiniPointCache::GetNumberOfAttributes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetNumberOfAttributes"));
    struct Params_GetNumberOfAttributes {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfAttributes params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UHoudiniPointCache::GetNormalValue(int32_t& SampleIndex, FVector& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetNormalValue"));
    struct Params_GetNormalValue {
        int32_t SampleIndex; // 0x0
        FVector Value; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetNormalValue params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.Value = (FVector)Value;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetFloatValueForString(int32_t& SampleIndex, FString Attribute, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetFloatValueForString"));
    struct Params_GetFloatValueForString {
        int32_t SampleIndex; // 0x0
        char pad_4[0x4];
        FString Attribute; // 0x8
        float Value; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_GetFloatValueForString params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.Attribute = (FString)Attribute;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    Value = params.Value;
    SampleIndex = params.SampleIndex;
    return (bool)params.ReturnValue;
}
TArray<float> UHoudiniPointCache::GetLifeValues() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetLifeValues"));
    struct Params_GetLifeValues {
        TArray<float> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLifeValues params{};
    ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
bool UHoudiniPointCache::GetLastPointIDToSpawnAtTime(float& Time, int32_t& lastID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetLastPointIDToSpawnAtTime"));
    struct Params_GetLastPointIDToSpawnAtTime {
        float Time; // 0x0
        int32_t lastID; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetLastPointIDToSpawnAtTime params{};
    params.Time = (float)Time;
    params.lastID = (int32_t)lastID;
    ProcessEvent(func, &params);
    Time = params.Time;
    lastID = params.lastID;
    return (bool)params.ReturnValue;
}
bool UHoudiniPointCache::GetImpulseValue(int32_t& SampleIndex, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoudiniNiagara.HoudiniPointCache.GetImpulseValue"));
    struct Params_GetImpulseValue {
        int32_t SampleIndex; // 0x0
        float Value; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetImpulseValue params{};
    params.SampleIndex = (int32_t)SampleIndex;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    SampleIndex = params.SampleIndex;
    Value = params.Value;
    return (bool)params.ReturnValue;
}
