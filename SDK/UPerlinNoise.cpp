#include "AActor.hpp"
#include "FNoiseParams.hpp"
#include "FNoiseParams2D.hpp"
#include "FNoiseParams3D.hpp"
#include "FNoiseParams4D.hpp"
#include "FOctaveNoiseParams.hpp"
#include "FSoftObjectPath.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UCurveFloat.hpp"
#include "UCurveLinearColor.hpp"
#include "UDynamicNoiseNormals.hpp"
#include "UDynamicNoiseOctaveNormals.hpp"
#include "UDynamicNoiseOctaveTexture.hpp"
#include "UDynamicNoiseTexture.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPerlinNoise.hpp"
#include "UTexture2D.hpp"
UPerlinNoise* UPerlinNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/PerlinNoise.PerlinNoise");
    return (UPerlinNoise*)res;
}
UCurveFloat* UPerlinNoise::SaveCurve(FSoftObjectPath Path, UCurveFloat* Curve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.SaveCurve"));
    struct Params_SaveCurve {
        FSoftObjectPath Path; // 0x0
        UCurveFloat* Curve; // 0x18
        UCurveFloat* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_SaveCurve params{};
    params.Path = (FSoftObjectPath)Path;
    params.Curve = (UCurveFloat*)Curve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCurveFloat*)params.ReturnValue;
}
float UPerlinNoise::PerlinNoiseSeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.PerlinNoiseSeed"));
    struct Params_PerlinNoiseSeed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_PerlinNoiseSeed params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UTexture2D* UPerlinNoise::MakeOctaveNoiseNormalTex(AActor* Owner, FOctaveNoiseParams& Params, int32_t Width, int32_t Height, float Strength, bool Curl, float SuperSample) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.MakeOctaveNoiseNormalTex"));
    struct Params_MakeOctaveNoiseNormalTex {
        AActor* Owner; // 0x0
        FOctaveNoiseParams Params; // 0x8
        int32_t Width; // 0x24
        int32_t Height; // 0x28
        float Strength; // 0x2c
        bool Curl; // 0x30
        char pad_31[0x3];
        float SuperSample; // 0x34
        UTexture2D* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_MakeOctaveNoiseNormalTex params{};
    params.Owner = (AActor*)Owner;
    params.Params = (FOctaveNoiseParams)Params;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.Strength = (float)Strength;
    params.Curl = (bool)Curl;
    params.SuperSample = (float)SuperSample;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UTexture2D*)params.ReturnValue;
}
void UPerlinNoise::GetNoise3DAsymmetric(FVector Pos, FNoiseParams3D& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetNoise3DAsymmetric"));
    struct Params_GetNoise3DAsymmetric {
        FVector Pos; // 0x0
        FNoiseParams3D Params; // 0xc
        float Noise; // 0x24
    }; // Size: 0x28
    Params_GetNoise3DAsymmetric params{};
    params.Pos = (FVector)Pos;
    params.Params = (FNoiseParams3D)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
void UPerlinNoise::GetNoiseNormal2D(FVector2D Pos, FNoiseParams& Params, FVector& Normal, float inverseNormalStrength, float Epsilon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetNoiseNormal2D"));
    struct Params_GetNoiseNormal2D {
        FVector2D Pos; // 0x0
        FNoiseParams Params; // 0x8
        FVector Normal; // 0x18
        float inverseNormalStrength; // 0x24
        float Epsilon; // 0x28
    }; // Size: 0x2c
    Params_GetNoiseNormal2D params{};
    params.Pos = (FVector2D)Pos;
    params.Params = (FNoiseParams)Params;
    params.Normal = (FVector)Normal;
    params.inverseNormalStrength = (float)inverseNormalStrength;
    params.Epsilon = (float)Epsilon;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Normal = params.Normal;
}
UTexture2D* UPerlinNoise::MakeOctaveNoiseTex(AActor* Owner, FOctaveNoiseParams& Params, int32_t Width, int32_t Height, float SuperSample, UCurveLinearColor* Palette, bool WantMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.MakeOctaveNoiseTex"));
    struct Params_MakeOctaveNoiseTex {
        AActor* Owner; // 0x0
        FOctaveNoiseParams Params; // 0x8
        int32_t Width; // 0x24
        int32_t Height; // 0x28
        float SuperSample; // 0x2c
        UCurveLinearColor* Palette; // 0x30
        bool WantMask; // 0x38
        char pad_39[0x7];
        UTexture2D* ReturnValue; // 0x40
    }; // Size: 0x48
    Params_MakeOctaveNoiseTex params{};
    params.Owner = (AActor*)Owner;
    params.Params = (FOctaveNoiseParams)Params;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.SuperSample = (float)SuperSample;
    params.Palette = (UCurveLinearColor*)Palette;
    params.WantMask = (bool)WantMask;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UTexture2D*)params.ReturnValue;
}
UCurveFloat* UPerlinNoise::MakeOctaveNoiseCurve(AActor* Owner, float Duration, FOctaveNoiseParams& Params, float SampleRate, float ErrorThreshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.MakeOctaveNoiseCurve"));
    struct Params_MakeOctaveNoiseCurve {
        AActor* Owner; // 0x0
        float Duration; // 0x8
        FOctaveNoiseParams Params; // 0xc
        float SampleRate; // 0x28
        float ErrorThreshold; // 0x2c
        UCurveFloat* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_MakeOctaveNoiseCurve params{};
    params.Owner = (AActor*)Owner;
    params.Duration = (float)Duration;
    params.Params = (FOctaveNoiseParams)Params;
    params.SampleRate = (float)SampleRate;
    params.ErrorThreshold = (float)ErrorThreshold;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UCurveFloat*)params.ReturnValue;
}
UTexture2D* UPerlinNoise::MakeNoiseNormalTex(AActor* Owner, FNoiseParams2D& Params, int32_t Width, int32_t Height, float Strength, bool Curl, float SuperSample) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.MakeNoiseNormalTex"));
    struct Params_MakeNoiseNormalTex {
        AActor* Owner; // 0x0
        FNoiseParams2D Params; // 0x8
        int32_t Width; // 0x1c
        int32_t Height; // 0x20
        float Strength; // 0x24
        bool Curl; // 0x28
        char pad_29[0x3];
        float SuperSample; // 0x2c
        UTexture2D* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_MakeNoiseNormalTex params{};
    params.Owner = (AActor*)Owner;
    params.Params = (FNoiseParams2D)Params;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.Strength = (float)Strength;
    params.Curl = (bool)Curl;
    params.SuperSample = (float)SuperSample;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UTexture2D*)params.ReturnValue;
}
UTexture2D* UPerlinNoise::MakeNoiseTex(AActor* Owner, FNoiseParams2D& Params, int32_t Width, int32_t Height, float SuperSample, UCurveLinearColor* Palette, bool WantMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.MakeNoiseTex"));
    struct Params_MakeNoiseTex {
        AActor* Owner; // 0x0
        FNoiseParams2D Params; // 0x8
        int32_t Width; // 0x1c
        int32_t Height; // 0x20
        float SuperSample; // 0x24
        UCurveLinearColor* Palette; // 0x28
        bool WantMask; // 0x30
        char pad_31[0x7];
        UTexture2D* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_MakeNoiseTex params{};
    params.Owner = (AActor*)Owner;
    params.Params = (FNoiseParams2D)Params;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.SuperSample = (float)SuperSample;
    params.Palette = (UCurveLinearColor*)Palette;
    params.WantMask = (bool)WantMask;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UTexture2D*)params.ReturnValue;
}
UCurveFloat* UPerlinNoise::MakeNoiseNormalizedCurve(AActor* Owner, float Duration, FNoiseParams& Params, float SampleRate, float ErrorThreshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.MakeNoiseNormalizedCurve"));
    struct Params_MakeNoiseNormalizedCurve {
        AActor* Owner; // 0x0
        float Duration; // 0x8
        FNoiseParams Params; // 0xc
        float SampleRate; // 0x1c
        float ErrorThreshold; // 0x20
        char pad_24[0x4];
        UCurveFloat* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_MakeNoiseNormalizedCurve params{};
    params.Owner = (AActor*)Owner;
    params.Duration = (float)Duration;
    params.Params = (FNoiseParams)Params;
    params.SampleRate = (float)SampleRate;
    params.ErrorThreshold = (float)ErrorThreshold;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UCurveFloat*)params.ReturnValue;
}
UCurveFloat* UPerlinNoise::MakeNoiseCurve(AActor* Owner, float Duration, FNoiseParams& Params, float SampleRate, float ErrorThreshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.MakeNoiseCurve"));
    struct Params_MakeNoiseCurve {
        AActor* Owner; // 0x0
        float Duration; // 0x8
        FNoiseParams Params; // 0xc
        float SampleRate; // 0x1c
        float ErrorThreshold; // 0x20
        char pad_24[0x4];
        UCurveFloat* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_MakeNoiseCurve params{};
    params.Owner = (AActor*)Owner;
    params.Duration = (float)Duration;
    params.Params = (FNoiseParams)Params;
    params.SampleRate = (float)SampleRate;
    params.ErrorThreshold = (float)ErrorThreshold;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UCurveFloat*)params.ReturnValue;
}
void UPerlinNoise::GetOctaveNoise4D(FVector Pos, float Time, FOctaveNoiseParams& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetOctaveNoise4D"));
    struct Params_GetOctaveNoise4D {
        FVector Pos; // 0x0
        float Time; // 0xc
        FOctaveNoiseParams Params; // 0x10
        float Noise; // 0x2c
    }; // Size: 0x30
    Params_GetOctaveNoise4D params{};
    params.Pos = (FVector)Pos;
    params.Time = (float)Time;
    params.Params = (FOctaveNoiseParams)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
void UPerlinNoise::GetOctaveNoise3D(FVector Pos, FOctaveNoiseParams& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetOctaveNoise3D"));
    struct Params_GetOctaveNoise3D {
        FVector Pos; // 0x0
        FOctaveNoiseParams Params; // 0xc
        float Noise; // 0x28
    }; // Size: 0x2c
    Params_GetOctaveNoise3D params{};
    params.Pos = (FVector)Pos;
    params.Params = (FOctaveNoiseParams)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
void UPerlinNoise::GetNoise2D(FVector2D Pos, FNoiseParams& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetNoise2D"));
    struct Params_GetNoise2D {
        FVector2D Pos; // 0x0
        FNoiseParams Params; // 0x8
        float Noise; // 0x18
    }; // Size: 0x1c
    Params_GetNoise2D params{};
    params.Pos = (FVector2D)Pos;
    params.Params = (FNoiseParams)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
void UPerlinNoise::GetOctaveNoise2D(FVector2D Pos, FOctaveNoiseParams& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetOctaveNoise2D"));
    struct Params_GetOctaveNoise2D {
        FVector2D Pos; // 0x0
        FOctaveNoiseParams Params; // 0x8
        float Noise; // 0x24
    }; // Size: 0x28
    Params_GetOctaveNoise2D params{};
    params.Pos = (FVector2D)Pos;
    params.Params = (FOctaveNoiseParams)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
void UPerlinNoise::GetOctaveNoise(float Time, FOctaveNoiseParams& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetOctaveNoise"));
    struct Params_GetOctaveNoise {
        float Time; // 0x0
        FOctaveNoiseParams Params; // 0x4
        float Noise; // 0x20
    }; // Size: 0x24
    Params_GetOctaveNoise params{};
    params.Time = (float)Time;
    params.Params = (FOctaveNoiseParams)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
void UPerlinNoise::GetNoiseNormalized(float Time, FNoiseParams& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetNoiseNormalized"));
    struct Params_GetNoiseNormalized {
        float Time; // 0x0
        FNoiseParams Params; // 0x4
        float Noise; // 0x14
    }; // Size: 0x18
    Params_GetNoiseNormalized params{};
    params.Time = (float)Time;
    params.Params = (FNoiseParams)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
void UPerlinNoise::GetNoiseNormal3D(FVector Pos, FNoiseParams& Params, FVector& Normal, float inverseNormalStrength, float Epsilon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetNoiseNormal3D"));
    struct Params_GetNoiseNormal3D {
        FVector Pos; // 0x0
        FNoiseParams Params; // 0xc
        FVector Normal; // 0x1c
        float inverseNormalStrength; // 0x28
        float Epsilon; // 0x2c
    }; // Size: 0x30
    Params_GetNoiseNormal3D params{};
    params.Pos = (FVector)Pos;
    params.Params = (FNoiseParams)Params;
    params.Normal = (FVector)Normal;
    params.inverseNormalStrength = (float)inverseNormalStrength;
    params.Epsilon = (float)Epsilon;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Normal = params.Normal;
}
void UPerlinNoise::GetNoise4DAsymmetric(FVector Pos, float Time, FNoiseParams4D& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetNoise4DAsymmetric"));
    struct Params_GetNoise4DAsymmetric {
        FVector Pos; // 0x0
        float Time; // 0xc
        FNoiseParams4D Params; // 0x10
        float Noise; // 0x2c
    }; // Size: 0x30
    Params_GetNoise4DAsymmetric params{};
    params.Pos = (FVector)Pos;
    params.Time = (float)Time;
    params.Params = (FNoiseParams4D)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
UDynamicNoiseTexture* UPerlinNoise::ConstructDynamicNoiseTexture(AActor* Owner, FNoiseParams2D& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, UCurveLinearColor* Palette, bool WantMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.ConstructDynamicNoiseTexture"));
    struct Params_ConstructDynamicNoiseTexture {
        AActor* Owner; // 0x0
        FNoiseParams2D Params; // 0x8
        float TimeFactor; // 0x1c
        int32_t Width; // 0x20
        int32_t Height; // 0x24
        float UpdateInterval; // 0x28
        char pad_2c[0x4];
        UCurveLinearColor* Palette; // 0x30
        bool WantMask; // 0x38
        char pad_39[0x7];
        UDynamicNoiseTexture* ReturnValue; // 0x40
    }; // Size: 0x48
    Params_ConstructDynamicNoiseTexture params{};
    params.Owner = (AActor*)Owner;
    params.Params = (FNoiseParams2D)Params;
    params.TimeFactor = (float)TimeFactor;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.UpdateInterval = (float)UpdateInterval;
    params.Palette = (UCurveLinearColor*)Palette;
    params.WantMask = (bool)WantMask;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UDynamicNoiseTexture*)params.ReturnValue;
}
void UPerlinNoise::GetNoise4D(FVector Pos, float Time, FNoiseParams& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetNoise4D"));
    struct Params_GetNoise4D {
        FVector Pos; // 0x0
        float Time; // 0xc
        FNoiseParams Params; // 0x10
        float Noise; // 0x20
    }; // Size: 0x24
    Params_GetNoise4D params{};
    params.Pos = (FVector)Pos;
    params.Time = (float)Time;
    params.Params = (FNoiseParams)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Noise = params.Noise;
    Params = params.Params;
}
void UPerlinNoise::GetNoise3D(FVector Pos, FNoiseParams& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetNoise3D"));
    struct Params_GetNoise3D {
        FVector Pos; // 0x0
        FNoiseParams Params; // 0xc
        float Noise; // 0x1c
    }; // Size: 0x20
    Params_GetNoise3D params{};
    params.Pos = (FVector)Pos;
    params.Params = (FNoiseParams)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
void UPerlinNoise::GetNoise2DAsymmetric(FVector2D Pos, FNoiseParams2D& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetNoise2DAsymmetric"));
    struct Params_GetNoise2DAsymmetric {
        FVector2D Pos; // 0x0
        FNoiseParams2D Params; // 0x8
        float Noise; // 0x1c
    }; // Size: 0x20
    Params_GetNoise2DAsymmetric params{};
    params.Pos = (FVector2D)Pos;
    params.Params = (FNoiseParams2D)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
void UPerlinNoise::GetNoise(float Time, FNoiseParams& Params, float& Noise) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetNoise"));
    struct Params_GetNoise {
        float Time; // 0x0
        FNoiseParams Params; // 0x4
        float Noise; // 0x14
    }; // Size: 0x18
    Params_GetNoise params{};
    params.Time = (float)Time;
    params.Params = (FNoiseParams)Params;
    params.Noise = (float)Noise;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Noise = params.Noise;
}
void UPerlinNoise::GetCurlNoiseAsNormal(FVector2D Pos, FNoiseParams& Params, FVector& Curl, float CurlEpsilon, float inverseNormalStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetCurlNoiseAsNormal"));
    struct Params_GetCurlNoiseAsNormal {
        FVector2D Pos; // 0x0
        FNoiseParams Params; // 0x8
        FVector Curl; // 0x18
        float CurlEpsilon; // 0x24
        float inverseNormalStrength; // 0x28
    }; // Size: 0x2c
    Params_GetCurlNoiseAsNormal params{};
    params.Pos = (FVector2D)Pos;
    params.Params = (FNoiseParams)Params;
    params.Curl = (FVector)Curl;
    params.CurlEpsilon = (float)CurlEpsilon;
    params.inverseNormalStrength = (float)inverseNormalStrength;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Curl = params.Curl;
    Params = params.Params;
}
void UPerlinNoise::GetCurlNoise3D(FVector Pos, FNoiseParams& Params, FVector& Curl, float CurlEpsilon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetCurlNoise3D"));
    struct Params_GetCurlNoise3D {
        FVector Pos; // 0x0
        FNoiseParams Params; // 0xc
        FVector Curl; // 0x1c
        float CurlEpsilon; // 0x28
    }; // Size: 0x2c
    Params_GetCurlNoise3D params{};
    params.Pos = (FVector)Pos;
    params.Params = (FNoiseParams)Params;
    params.Curl = (FVector)Curl;
    params.CurlEpsilon = (float)CurlEpsilon;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Curl = params.Curl;
}
void UPerlinNoise::GetCurlNoise2D(FVector2D Pos, FNoiseParams& Params, FVector2D& Curl, float CurlEpsilon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.GetCurlNoise2D"));
    struct Params_GetCurlNoise2D {
        FVector2D Pos; // 0x0
        FNoiseParams Params; // 0x8
        FVector2D Curl; // 0x18
        float CurlEpsilon; // 0x20
    }; // Size: 0x24
    Params_GetCurlNoise2D params{};
    params.Pos = (FVector2D)Pos;
    params.Params = (FNoiseParams)Params;
    params.Curl = (FVector2D)Curl;
    params.CurlEpsilon = (float)CurlEpsilon;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    Curl = params.Curl;
}
UDynamicNoiseNormals* UPerlinNoise::ConstructDynamicNoiseNormals(AActor* Owner, FNoiseParams2D& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, float NormalStrength, bool Curl) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.ConstructDynamicNoiseNormals"));
    struct Params_ConstructDynamicNoiseNormals {
        AActor* Owner; // 0x0
        FNoiseParams2D Params; // 0x8
        float TimeFactor; // 0x1c
        int32_t Width; // 0x20
        int32_t Height; // 0x24
        float UpdateInterval; // 0x28
        float NormalStrength; // 0x2c
        bool Curl; // 0x30
        char pad_31[0x7];
        UDynamicNoiseNormals* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_ConstructDynamicNoiseNormals params{};
    params.Owner = (AActor*)Owner;
    params.Params = (FNoiseParams2D)Params;
    params.TimeFactor = (float)TimeFactor;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.UpdateInterval = (float)UpdateInterval;
    params.NormalStrength = (float)NormalStrength;
    params.Curl = (bool)Curl;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UDynamicNoiseNormals*)params.ReturnValue;
}
UDynamicNoiseOctaveTexture* UPerlinNoise::ConstructDynamicNoiseOctaveTexture(AActor* Owner, FOctaveNoiseParams& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, UCurveLinearColor* Palette, bool WantMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.ConstructDynamicNoiseOctaveTexture"));
    struct Params_ConstructDynamicNoiseOctaveTexture {
        AActor* Owner; // 0x0
        FOctaveNoiseParams Params; // 0x8
        float TimeFactor; // 0x24
        int32_t Width; // 0x28
        int32_t Height; // 0x2c
        float UpdateInterval; // 0x30
        char pad_34[0x4];
        UCurveLinearColor* Palette; // 0x38
        bool WantMask; // 0x40
        char pad_41[0x7];
        UDynamicNoiseOctaveTexture* ReturnValue; // 0x48
    }; // Size: 0x50
    Params_ConstructDynamicNoiseOctaveTexture params{};
    params.Owner = (AActor*)Owner;
    params.Params = (FOctaveNoiseParams)Params;
    params.TimeFactor = (float)TimeFactor;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.UpdateInterval = (float)UpdateInterval;
    params.Palette = (UCurveLinearColor*)Palette;
    params.WantMask = (bool)WantMask;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UDynamicNoiseOctaveTexture*)params.ReturnValue;
}
UDynamicNoiseOctaveNormals* UPerlinNoise::ConstructDynamicNoiseOctaveNormals(AActor* Owner, FOctaveNoiseParams& Params, float TimeFactor, int32_t Width, int32_t Height, float UpdateInterval, float NormalStrength, bool Curl) {
    static auto func = (UFunction*)(find_uobject("Function /Script/PerlinNoise.PerlinNoise.ConstructDynamicNoiseOctaveNormals"));
    struct Params_ConstructDynamicNoiseOctaveNormals {
        AActor* Owner; // 0x0
        FOctaveNoiseParams Params; // 0x8
        float TimeFactor; // 0x24
        int32_t Width; // 0x28
        int32_t Height; // 0x2c
        float UpdateInterval; // 0x30
        float NormalStrength; // 0x34
        bool Curl; // 0x38
        char pad_39[0x7];
        UDynamicNoiseOctaveNormals* ReturnValue; // 0x40
    }; // Size: 0x48
    Params_ConstructDynamicNoiseOctaveNormals params{};
    params.Owner = (AActor*)Owner;
    params.Params = (FOctaveNoiseParams)Params;
    params.TimeFactor = (float)TimeFactor;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.UpdateInterval = (float)UpdateInterval;
    params.NormalStrength = (float)NormalStrength;
    params.Curl = (bool)Curl;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Params = params.Params;
    return (UDynamicNoiseOctaveNormals*)params.ReturnValue;
}
