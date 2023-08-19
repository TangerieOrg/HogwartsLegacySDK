#pragma once
#include <cstdint>
#include "EAblAbilityTargetType.hpp"
#include "EAttachmentRule.hpp"
#include "FAblAbilityTargetTypeLocation.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UAblSpawnActorTask : public UAblAbilityTask {
public:
    UClass* m_actorClass; // 0x70
    FAblAbilityTargetTypeLocation m_SpawnLocation; // 0x78
    FVector m_InitialVelocity; // 0xa0
    bool m_SetOwner; // 0xac
    EAblAbilityTargetType m_OwnerTargetType; // 0xad
    bool m_AttachToOwnerSocket; // 0xae
    EAttachmentRule m_AttachmentRule; // 0xaf
    FName m_SocketName; // 0xb0
    FVector m_Offset; // 0xb8
    bool m_InheritOwnerLinearVelocity; // 0xc4
    bool m_MarkAsTransient; // 0xc5
    bool m_DestroyAtEnd; // 0xc6
    bool m_fireEvent; // 0xc7
    FName m_name; // 0xc8
    static UAblSpawnActorTask* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
