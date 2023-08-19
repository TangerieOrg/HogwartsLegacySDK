#pragma once
#include <cstdint>
#include "FMultiFX2DataArray.hpp"
#include "FMultiFX2Handle.hpp"
#include "FMultiFX2Var.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UMultiFX2Asset;
class AActor;
#pragma pack(push, 1)
class UMultiFX2Manager : public UObject {
public:
    TArray<FMultiFX2DataArray> FXDataArray; // 0x28
    char pad_38[0x20];
    static UMultiFX2Manager* StaticClass();
    void UpdateFX();
    static FMultiFX2Handle SpawnFXAsset(UMultiFX2Asset* FXAsset, UObject* Target, AActor* Instigator, FVector Location, FRotator Rotation, FName AttachPointName);
    static FMultiFX2Handle SpawnFXArray(TArray<FMultiFX2Var>& Var, UObject* Target, AActor* Instigator, FVector Location, FRotator Rotation, FName AttachPointName);
    static FMultiFX2Handle SpawnFX(FMultiFX2Var& Var, UObject* Target, AActor* Instigator, FVector Location, FRotator Rotation, FName AttachPointName);
    static void SetRotation(FMultiFX2Handle& InHandle, FRotator& InRotation);
    static void SetLocation(FMultiFX2Handle& InHandle, FVector& InLocation);
    static void SetFootprintLifetimeScale(float Scale);
    static void SetCustomTimeDilation(FMultiFX2Handle& InHandle, float Dilation);
    static bool IsLooping(FMultiFX2Handle& InHandle);
    static bool IsActive(FMultiFX2Handle& InHandle);
    static void DestroyFXHandle(FMultiFX2Handle& InHandle, bool bImmediate);
}; // Size: 0x58
#pragma pack(pop)
