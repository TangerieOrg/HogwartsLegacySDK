#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
struct FOctaveNoiseParams;
class UCurveFloat;
class AActor;
class UCurveLinearColor;
struct FNoiseParams2D;
class UTexture2D;
struct FNoiseParams;
class UDynamicNoiseTexture;
struct FNoiseParams4D;
struct FNoiseParams3D;
class UDynamicNoiseOctaveTexture;
class UDynamicNoiseOctaveNormals;
class UDynamicNoiseNormals;
#pragma pack(push, 1)
class UPerlinNoise : public UObject {
public:
    static UPerlinNoise* StaticClass();
    static UCurveFloat* SaveCurve(FSoftObjectPath Path, UCurveFloat* Curve);
    static float PerlinNoiseSeed();
    static UTexture2D* MakeOctaveNoiseTex(AActor* Owner, FOctaveNoiseParams& Params, int32_t Width, int32_t Height, float SuperSample, UCurveLinearColor* Palette, bool WantMask);
    static UTexture2D* MakeOctaveNoiseNormalTex(AActor* Owner, FOctaveNoiseParams& Params, int32_t Width, int32_t Height, float Strength, bool Curl, float SuperSample);
    static UCurveFloat* MakeOctaveNoiseCurve(AActor* Owner, float Duration, FOctaveNoiseParams& Params, float SampleRate, float ErrorThreshold);
    static UTexture2D* MakeNoiseTex(AActor* Owner, FNoiseParams2D& Params, int32_t Width, int32_t Height, float SuperSample, UCurveLinearColor* Palette, bool WantMask);
    static UTexture2D* MakeNoiseNormalTex(AActor* Owner, FNoiseParams2D& Params, int32_t Width, int32_t Height, float Strength, bool Curl, float SuperSample);
    static UCurveFloat* MakeNoiseNormalizedCurve(AActor* Owner, float Duration, FNoiseParams& Params, float SampleRate, float ErrorThreshold);
    static UCurveFloat* MakeNoiseCurve(AActor* Owner, float Duration, FNoiseParams& Params, float SampleRate, float ErrorThreshold);
    static void GetOctaveNoise4D(FVector Pos, float Time, FOctaveNoiseParams& Params, float& Noise);
    static void GetOctaveNoise3D(FVector Pos, FOctaveNoiseParams& Params, float& Noise);
    static void GetOctaveNoise2D(FVector2D Pos, FOctaveNoiseParams& Params, float& Noise);
    static void GetOctaveNoise(float Time, FOctaveNoiseParams& Params, float& Noise);
    static void GetNoiseNormalized(float Time, FNoiseParams& Params, float& Noise);
    static void GetNoiseNormal3D(FVector Pos, FNoiseParams& Params, FVector& Normal, float inverseNormalStrength, float Epsilon);
    static void GetNoiseNormal2D(FVector2D Pos, FNoiseParams& Params, FVector& Normal, float inverseNormalStrength, float Epsilon);
    static void GetNoise4DAsymmetric(FVector Pos, float Time, FNoiseParams4D& Params, float& Noise);
    static void GetNoise4D(FVector Pos, float Time, FNoiseParams& Params, float& Noise);
    static void GetNoise3DAsymmetric(FVector Pos, FNoiseParams3D& Params, float& Noise);
    static void GetNoise3D(FVector Pos, FNoiseParams& Params, float& Noise);
    static void GetNoise2DAsymmetric(FVector2D Pos, FNoiseParams2D& Params, float& Noise);
    static void GetNoise2D(FVector2D Pos, FNoiseParams& Params, float& Noise);
    static void GetNoise(float Time, FNoiseParams& Params, float& Noise);
    static void GetCurlNoiseAsNormal(FVector2D Pos, FNoiseParams& Params, FVector& Curl, float CurlEpsilon, float inverseNormalStrength);
    static void GetCurlNoise3D(FVector Pos, FNoiseParams& Params, FVector& Curl, float CurlEpsilon);
    static void GetCurlNoise2D(FVector2D Pos, FNoiseParams& Params, FVector2D& Curl, float CurlEpsilon);
    static UDynamicNoiseTexture* ConstructDynamicNoiseTexture(AActor* Owner, FNoiseParams2D& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, UCurveLinearColor* Palette, bool WantMask);
    static UDynamicNoiseOctaveTexture* ConstructDynamicNoiseOctaveTexture(AActor* Owner, FOctaveNoiseParams& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, UCurveLinearColor* Palette, bool WantMask);
    static UDynamicNoiseOctaveNormals* ConstructDynamicNoiseOctaveNormals(AActor* Owner, FOctaveNoiseParams& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, float NormalStrength, bool Curl);
    static UDynamicNoiseNormals* ConstructDynamicNoiseNormals(AActor* Owner, FNoiseParams2D& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, float NormalStrength, bool Curl);
}; // Size: 0x28
#pragma pack(pop)
