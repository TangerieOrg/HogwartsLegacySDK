#pragma once
#include <cstdint>
namespace EAttackState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    AttackCombo1 = 1,
    AttackCombo2 = 2,
    AttackCombo3 = 3,
    AttackCombo4 = 4,
    AttackCombo5 = 5,
    AttackFinisher1 = 6,
    AttackFinisher2 = 7,
    AttackFinisher3 = 8,
    AttackAOESpell = 9,
    AttackAOEArrestoMomentum = 10,
    AttackAOEDepulso = 11,
    AttackAOEExpectoPatronum = 12,
    AttackAOEExpulso = 13,
    AttackAOEIncendio = 14,
    AttackAOELevioso = 15,
    AttackAOELumos = 16,
    AttackAOEReparo = 17,
    EAttackState_MAX = 18,
};
#pragma pack(pop)
}
