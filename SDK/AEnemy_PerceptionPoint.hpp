#pragma once
#include <cstdint>
#include "APerceptionPoint.hpp"
class APerceptionPointArea;
#pragma pack(push, 1)
class AEnemy_PerceptionPoint : public APerceptionPoint {
public:
    static AEnemy_PerceptionPoint* StaticClass();
    void RemovePerceiveVolume(APerceptionPointArea* InAreaPtr);
    void RemoveLoseVolume(APerceptionPointArea* InAreaPtr);
    void RemoveForceVolume(APerceptionPointArea* InAreaPtr);
    void RemoveExcludeVolume(APerceptionPointArea* InAreaPtr);
    void AddPerceiveVolume(APerceptionPointArea* InAreaPtr);
    void AddLoseVolume(APerceptionPointArea* InAreaPtr);
    void AddForceVolume(APerceptionPointArea* InAreaPtr);
    void AddExcludeVolume(APerceptionPointArea* InAreaPtr);
}; // Size: 0x360
#pragma pack(pop)
