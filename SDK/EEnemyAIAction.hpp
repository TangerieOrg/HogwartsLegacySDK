#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyAIAction : uint8_t {
    None = 0,
    BecomeAware = 1,
    LoseAware = 2,
    LosingTarget = 3,
    DEPRECATED_SeekingWeapon = 4,
    Lumos = 5,
    StoreActiveWeapon = 6,
    ActivateRequiredWeapon = 7,
    ActivateDeferredRequiredWeapon = 8,
    Spawn = 9,
    Dodge = 10,
    DodgeExecute = 11,
    ActivateApperate_DEPRECATED = 12,
    ApperateReappear_DEPRECATED = 13,
    PickupWeapon = 14,
    RespawnWeapon = 15,
    React = 16,
    Dying = 17,
    Dead = 18,
    Destroy = 19,
    Taunt = 20,
    TauntAttack = 21,
    SpellReact = 22,
    FaceTarget = 23,
    FaceLastKnownTarget = 24,
    FaceLoc = 25,
    FaceActor = 26,
    Shuffle = 27,
    Attack = 28,
    AttackStoreWeapon = 29,
    FleeExit = 30,
    Scared = 31,
    FaceWeapon = 32,
    FaceEventLoc = 33,
    Jump = 34,
    Eat_DEPRECATED = 35,
    NurtureInteract_DEPRECATED = 36,
    GameEvent = 37,
    ScheduledEntity = 38,
    Climb = 39,
    TauntDeath = 40,
    Protego = 41,
    SecondaryAttack = 42,
    MoveStop = 43,
    WarnAway = 44,
    ClimbLadder = 45,
    IdleBreak = 46,
    BecomeAlert = 47,
    LoseAlert = 48,
    AlertInvestigate = 49,
    AttachWeapon = 50,
    DetachWeapon = 51,
    HealAttack = 52,
    ReparoAttack_Deprecated = 53,
    ApparateAttack = 54,
    Apparate = 55,
    FlitToLoc_DEPRECATED = 56,
    Disillusionment = 57,
    Vault = 58,
    SidekickAttack = 59,
    RespawnAndAcquireWeapon = 60,
    Flourish = 61,
    ProtegoStart = 62,
    Flying = 63,
    StartDrained = 64,
    Drained = 65,
    StopDrained = 66,
    CustomSpell = 67,
    SubAttackWait = 68,
    SubAttackDesync = 69,
    SubAttackPre = 70,
    SubAttackAttack = 71,
    AlertWait = 72,
    ActivateStoredWeapon = 73,
    WanderIdle = 74,
    AlertLook = 75,
    SubAttackAttackSplit = 76,
    AlertFace = 77,
    AlertIdle = 78,
    SwimToShore = 79,
    Outside = 80,
    TooCloseNPC = 81,
    JumpSpline = 82,
    JumpSplineStart = 83,
    JumpSplineLand = 84,
    Block = 85,
    SubAttackAttackCounter = 86,
    SubAttackAttackApparate = 87,
    SubAttackApparateCounter = 88,
    WaitForRelease = 89,
    PreMoveStart = 90,
    BackOnNav = 91,
    ShuffleStart = 92,
    ActivateHiddenWeapon = 93,
    RecoverWeapon = 94,
    InvestigateStart = 95,
    InvestigateMove = 96,
    InvestigateIdle = 97,
    InvestigateStop = 98,
    SpellEffectStart = 99,
    SpellEffectStop = 100,
    ChargeStart = 101,
    AwareTurnAround = 102,
    AwarePause = 103,
    Count = 104,
    EEnemyAIAction_MAX = 105,
};
#pragma pack(pop)
