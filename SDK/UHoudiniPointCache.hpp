#pragma once
#include <cstdint>
#include "EHoudiniPointCacheFileType.hpp"
#include "FPointIndexes.hpp"
#include "UObject.hpp"
struct FVector;
struct FVector4;
struct FQuat;
struct FLinearColor;
#pragma pack(push, 1)
class UHoudiniPointCache : public UObject {
public:
    FString Filename; // 0x28
    int32_t NumberOfSamples; // 0x38
    int32_t NumberOfAttributes; // 0x3c
    int32_t NumberOfPoints; // 0x40
    int32_t NumberOfFrames; // 0x44
    float FirstFrame; // 0x48
    float LastFrame; // 0x4c
    float MinSampleTime; // 0x50
    float MaxSampleTime; // 0x54
    FString SourceCSVTitleRow; // 0x58
    TArray<FString> AttributeArray; // 0x68
    char pad_78[0x8];
    TArray<float> FloatSampleData; // 0x80
    TArray<float> SpawnTimes; // 0x90
    TArray<float> LifeValues; // 0xa0
    TArray<int32_t> PointTypes; // 0xb0
    TArray<int32_t> SpecialAttributeIndexes; // 0xc0
    TArray<FPointIndexes> PointValueIndexes; // 0xd0
    bool UseCustomCSVTitleRow; // 0xe0
    EHoudiniPointCacheFileType FileType; // 0xe1
    char pad_e2[0x6];
    static UHoudiniPointCache* StaticClass();
    void SetUseCustomCSVTitleRow(bool bInUseCustomCSVTitleRow);
    bool GetVelocityValue(int32_t& SampleIndex, FVector& Value);
    bool GetVectorValueForString(int32_t& SampleIndex, FString Attribute, FVector& Value, bool& DoSwap, bool& DoScale);
    bool GetVectorValue(int32_t& SampleIndex, int32_t& attrIndex, FVector& Value, bool& DoSwap, bool& DoScale);
    bool GetVector4ValueForString(int32_t& SampleIndex, FString Attribute, FVector4& Value);
    bool GetVector4Value(int32_t& SampleIndex, int32_t& attrIndex, FVector4& Value);
    bool GetUseCustomCSVTitleRow();
    bool GetTimeValue(int32_t& SampleIndex, float& Value);
    TArray<int32_t> GetSpecialAttributeIndexes();
    TArray<float> GetSpawnTimes();
    bool GetSampleIndexesForPointAtTime(int32_t& POINTID, float& desiredTime, int32_t& PrevSampleIndex, int32_t& NextSampleIndex, float& PrevWeight);
    bool GetQuatValueForString(int32_t& SampleIndex, FString Attribute, FQuat& Value, bool& DoHoudiniToUnrealConversion);
    bool GetQuatValue(int32_t& SampleIndex, int32_t& attrIndex, FQuat& Value, bool& DoHoudiniToUnrealConversion);
    bool GetPositionValue(int32_t& SampleIndex, FVector& Value);
    bool GetPointVectorValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FVector& Vector, bool DoSwap, bool DoScale);
    bool GetPointVectorValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FVector& Vector, bool DoSwap, bool DoScale);
    bool GetPointVector4ValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FVector4& Vector);
    bool GetPointVector4ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FVector4& Vector);
    TArray<FPointIndexes> GetPointValueIndexes();
    bool GetPointValueAtTimeForString(int32_t& POINTID, FString Attribute, float& desiredTime, float& Value);
    bool GetPointValueAtTime(int32_t& POINTID, int32_t& AttributeIndex, float& desiredTime, float& Value);
    TArray<int32_t> GetPointTypes();
    bool GetPointType(int32_t& POINTID, int32_t& Value);
    bool GetPointQuatValueAtTimeForString(int32_t POINTID, FString Attribute, float desiredTime, FQuat& Quat, bool DoHoudiniToUnrealConversion);
    bool GetPointQuatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, FQuat& Quat, bool DoHoudiniToUnrealConversion);
    bool GetPointPositionAtTime(int32_t& POINTID, float& desiredTime, FVector& Vector);
    bool GetPointLifeAtTime(int32_t& POINTID, float& desiredTime, float& Value);
    bool GetPointLife(int32_t& POINTID, float& Value);
    bool GetPointInt32ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, int32_t& Value);
    bool GetPointIDsToSpawnAtTime(float& desiredTime, int32_t& MinID, int32_t& MaxID, int32_t& Count, int32_t& LastSpawnedPointID, float& LastSpawnTime, float& LastSpawnTimeRequest);
    bool GetPointFloatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, float& Value);
    int32_t GetNumberOfSamples();
    int32_t GetNumberOfPoints();
    int32_t GetNumberOfAttributes();
    bool GetNormalValue(int32_t& SampleIndex, FVector& Value);
    TArray<float> GetLifeValues();
    bool GetLastSampleIndexAtTime(float& desiredTime, int32_t& lastSampleIndex);
    bool GetLastPointIDToSpawnAtTime(float& Time, int32_t& lastID);
    bool GetImpulseValue(int32_t& SampleIndex, float& Value);
    bool GetFloatValueForString(int32_t& SampleIndex, FString Attribute, float& Value);
    bool GetFloatValue(int32_t& SampleIndex, int32_t& attrIndex, float& Value);
    TArray<float> GetFloatSampleData();
    bool GetColorValue(int32_t& SampleIndex, FLinearColor& Value);
    static bool GetAttributeIndexInArrayFromString(FString InAttribute, TArray<FString>& InAttributeArray, int32_t& OutAttributeIndex);
    bool GetAttributeIndexFromString(FString Attribute, int32_t& AttributeIndex);
}; // Size: 0xe8
#pragma pack(pop)
