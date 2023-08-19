#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEnemyAIState.hpp"
#include "EPathNodeSpeed.hpp"
#pragma pack(push, 1)
class APathNode : public AActor {
public:
    TArray<APathNode*> m_nextArray; // 0x248
    float m_waitTime; // 0x258
    float m_threshold; // 0x25c
    float m_arrivalTimeout; // 0x260
    EEnemyAIState m_nextAction; // 0x264
    bool m_onArrivalEnablePerception; // 0x265
    bool m_applyPathSpeed; // 0x266
    EPathNodeSpeed m_selectedSpeed; // 0x267
    float m_pathSpeed; // 0x268
    bool m_airPathNode; // 0x26c
    char pad_26d[0x3];
    float m_airPathSpeedMultiplyer; // 0x270
    bool m_perchPathNode; // 0x274
    char pad_275[0x13];
    static APathNode* StaticClass();
    float GetArrivalTimeout();
    void BroadcastArrived(AActor* pActor);
    void Arrived();
}; // Size: 0x288
#pragma pack(pop)
