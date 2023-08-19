#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UUI_BPI_NotificationPanel_C : public UInterface {
public:
    static UUI_BPI_NotificationPanel_C* StaticClass();
    void I_AddChallengeCompleteNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t MaxLevels);
    void I_AddCollectionObtainedNotification(FName CollectionID, FName CollectionCategory);
    void I_AddCollectionKnownNotification(FName CollectionID, FName CollectionCategory);
    void I_AddGenericNotification(FString HeaderText, FString SubheaderText, FString IconName);
    void I_ItemCollected(FString Name, FString IconName, int32_t Count, FString Header, bool SpecialCollection, FName Variation);
}; // Size: 0x28
#pragma pack(pop)
