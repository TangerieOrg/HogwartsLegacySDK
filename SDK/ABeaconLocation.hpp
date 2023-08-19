#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
#include "EBeaconDisplayPriority.hpp"
#include "EBeaconType.hpp"
#include "FDbDoubleColumnInfo.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
class ABeaconLocation : public ATargetPoint {
public:
    FVector HUDMarkerOffset; // 0x248
    char pad_254[0x4];
    FDbDoubleColumnInfo ItemInfo; // 0x258
    FString BeaconID; // 0x330
    FString BeaconName; // 0x340
    FName BeaconableObjectID; // 0x350
    EBeaconType BeaconType; // 0x358
    char pad_359[0x7];
    FDbSingleColumnInfo BeaconIcon; // 0x360
    FString DescriptionShort; // 0x3e8
    uint32_t ActivationDistance; // 0x3f8
    uint32_t EnterExitDistance; // 0x3fc
    EBeaconDisplayPriority BeaconPriority; // 0x400
    bool bMakeDynamic; // 0x401
    bool bHideWhenInactive; // 0x402
    bool bShowInWorld; // 0x403
    bool bStartInactive; // 0x404
    bool bIsSaveLocation; // 0x405
    bool bDrawDebug; // 0x406
    char pad_407[0x11];
    static ABeaconLocation* StaticClass();
    void SetStartInactive(bool inStartInactive);
    void SetShowInWorld(bool inShowInWorld);
    void SetParentObject(AActor* inParentObject);
    void SetMakeDynamic(bool inMakeDynamic);
    void SetIsSaveLocation(bool isSaveLocation);
    void SetHudIconSuppressed(bool bInHudIconSuppressed);
    void SetHideWhenInactive(bool inHideWhenInactive);
    void SetEnterExitDistance(int32_t InDistance);
    void SetDescriptionShort(FString inNewShortDesc);
    void SetBeaconType(EBeaconType inBeaconType);
    void SetBeaconPriority(EBeaconDisplayPriority InPriority);
    void SetBeaconName(FString inNewBeaconName);
    void SetBeaconDebug(bool inDoDebug);
    void SetBeaconableObjectID(FName inNewID);
    void SetActivationDistance(int32_t InDistance);
    bool GetStartInactive();
    bool GetShowInWorld();
    bool GetMakeDynamic();
    bool GetIsSaveLocation();
    bool GetHideWhenInactive();
    int32_t GetEnterExitDistance();
    bool GetDrawDebug();
    FString GetDescriptionShort();
    EBeaconType GetBeaconType();
    EBeaconDisplayPriority GetBeaconPriority();
    FString GetBeaconName();
    FString GetBeaconID();
    FDbSingleColumnInfo GetBeaconIcon();
    int32_t GetBeaconHandle();
    FName GetBeaconableObjectID();
    int32_t GetActivationDistance();
}; // Size: 0x418
#pragma pack(pop)
