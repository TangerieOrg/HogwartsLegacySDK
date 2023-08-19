#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyWeaponTypeEnum : uint8_t {
    ESW_Default = 0,
    ESW_Bola = 1,
    ESW_Sword = 2,
    ESW_Axe = 3,
    ESW_Hammer = 4,
    ESW_Mace = 5,
    ESW_Spear = 6,
    ESW_Katar = 7,
    ESW_Shield = 8,
    ESW_DarkWizardWand = 9,
    ESW_Dagger = 10,
    ESW_Meteor = 11,
    ESW_MeteorPiece = 12,
    ESW_Crossbow = 13,
    ESW_MAX = 14,
};
#pragma pack(pop)
