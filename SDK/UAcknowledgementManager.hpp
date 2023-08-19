#pragma once
#include <cstdint>
#include "UObject.hpp"
class UGameLogicObject;
class UAcknowledgement;
class AActor;
#pragma pack(push, 1)
class UAcknowledgementManager : public UObject {
public:
    char pad_28[0xd8];
    UGameLogicObject* AcknowledgementLogicContainer; // 0x100
    char pad_108[0x50];
    TArray<UAcknowledgement*> TimeAck_Any; // 0x158
    TArray<UAcknowledgement*> TimeAck_Companion; // 0x168
    TArray<UAcknowledgement*> TimeAck_SpecialSpeaker; // 0x178
    TArray<UAcknowledgement*> TimeAck_Enemy; // 0x188
    TArray<UAcknowledgement*> TimeAck_NonEnemy; // 0x198
    TArray<UAcknowledgement*> TimeAck_Player; // 0x1a8
    char pad_1b8[0x2f8];
    static UAcknowledgementManager* StaticClass();
    static void UpdateMiscStatStatic(FName Key, FString Value);
    static void UpdateMiscIntStatStatic(FName Key, int32_t Value);
    static void UpdateMiscBoolStatStatic(FName Key, bool bValue);
    static void SetSpecialSpeakerForAcknowledgement(AActor* InSpecialSpeaker);
    static void SetSpecialSpeakerByDBIDForAcknowledgement(FName& InSpecialSpeakerName);
    void OnSaveGameLoaded();
    void OnPreLoadGame();
    void OnNewGame();
    void HandleStatChanged(FName StatID, int32_t Value, int32_t Delta);
    void HandleHouseChestAcknowledgement();
    void HandleFleshLoaded(AActor* InFleshActor);
    static UAcknowledgementManager* GetAcknowledgementManager();
    static UAcknowledgementManager* Get();
}; // Size: 0x4b0
#pragma pack(pop)
