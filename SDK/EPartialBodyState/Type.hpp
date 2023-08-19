#pragma once
#include <cstdint>
namespace EPartialBodyState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Protego = 1,
    SpellCombo = 2,
    WandEquip = 3,
    SpellFinisher = 4,
    Carry = 5,
    PickupSighted = 6,
    PickupCollect = 7,
    LootCollect = 8,
    StationInteract = 9,
    AttackAnticipation = 10,
    UseInventoryItem = 11,
    WandEquipped = 12,
    BlockedByWall = 13,
    ChannelSpell = 14,
    Cinematic = 15,
    Lumos = 16,
    WandUnEquip = 17,
    Waving = 18,
    EPartialBodyState_MAX = 19,
};
#pragma pack(pop)
}
