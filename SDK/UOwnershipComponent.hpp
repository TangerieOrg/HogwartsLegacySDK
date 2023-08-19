#pragma once
#include <cstdint>
#include "FDbDoubleColumnInfo.hpp"
#include "SocialCapitalStatusIDs.hpp"
#include "UActorComponent.hpp"
class AActor;
class UScheduledEntity;
#pragma pack(push, 1)
class UOwnershipComponent : public UActorComponent {
public:
    FDbDoubleColumnInfo m_DbIdInfo[3]; // 0xc8
    static UOwnershipComponent* StaticClass();
    static bool IsTakingObjectStealing(AActor* ObjectToTake, AActor* WhoIsTaking);
    static bool IsEntityAnOwner(AActor* Owned, UScheduledEntity* ScheduledEntity);
    static bool HasOwnership(AActor* Owned);
    static bool GetOwnership(AActor* Owned, FString& o_OwnerName);
    static SocialCapitalStatusIDs GetMinimumPlayerStatusWithOwners(AActor* OwnedObject);
    static void CopyOwnership(AActor* From, AActor* To);
}; // Size: 0x350
#pragma pack(pop)
