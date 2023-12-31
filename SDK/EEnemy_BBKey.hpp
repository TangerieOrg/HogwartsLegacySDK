#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_BBKey : uint8_t {
    None = 0,
    Spawn = 1,
    Dodge = 2,
    BecomeAware = 3,
    LoseAware = 4,
    LosingTarget = 5,
    DEPRECATED_SeekingWeapon = 6,
    Lumos = 7,
    React = 8,
    StoreActiveWeapon = 9,
    ActivateWeapon = 10,
    Scared = 11,
    Investigate = 12,
    Jump = 13,
    Abort = 14,
    GameEvent = 15,
    DEPRECATED_ScheduledEntity = 16,
    Climb = 17,
    Protego = 18,
    SecondaryAttack = 19,
    ClimbLadder = 20,
    BecomeAlert = 21,
    LoseAlert = 22,
    HealAttack = 23,
    InvestigateAlert = 24,
    Disillusionment = 25,
    ReparoAttack = 26,
    Vault = 27,
    CustomPause = 28,
    SidekickAttack = 29,
    ProtegoStart = 30,
    Alert = 31,
    SwimToShore = 32,
    Outside = 33,
    TooCloseToNPC = 34,
    JumpSpline = 35,
    BackOnNav = 36,
    RecoverWeapon = 37,
    Aggro = 38,
    TASTreeState = 39,
    SpellEffect = 40,
    AwareTurnAround = 41,
    AwarePause = 42,
    EEnemy_MAX = 43,
};
#pragma pack(pop)
