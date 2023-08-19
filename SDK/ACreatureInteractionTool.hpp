#pragma once
#include <cstdint>
#include "AInventoryItemTool.hpp"
#include "ETargetSpeedMode\Type.hpp"
class ACreature_Character;
class ABiped_Player;
#pragma pack(push, 1)
class ACreatureInteractionTool : public AInventoryItemTool {
public:
    ACreature_Character* TargetCreature; // 0x430
    ABiped_Player* Player; // 0x438
    ETargetSpeedMode::Type InteractingSpeedMode; // 0x440
    char pad_441[0x3];
    float InteractRange; // 0x444
    char pad_448[0x8];
    static ACreatureInteractionTool* StaticClass();
    void RequestInteractionEnd();
    void RemoveLookAtTarget();
    void RemoveFaceTarget();
    void OnTickInteraction(float DeltaSeconds);
    void OnInteractionStarted();
    void OnInteractionEndRequested();
    void OnInteractionEnded();
    bool GetInteractionEndRequested();
    void EnableInteractionCamera();
    void DisableInteractionCamera();
    void AllowInteractionEnd();
    void AddLookAtTarget();
    void AddFaceTarget();
}; // Size: 0x450
#pragma pack(pop)
